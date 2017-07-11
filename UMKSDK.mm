//
//  UMKSDK.m
//  Unity-iPhone
//
//  Created by 熙文 张 on 17/7/10.
//
//


#import <MKSDK/MKSDK.h>

const char *nStr2CStr(NSString* nStr) {
    return [nStr cStringUsingEncoding:NSUTF8StringEncoding];
}

const char *createJSONResult (NSDictionary* data) {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc]init];
    [jsonDict setValue:data forKey:@"data"];
    
    NSError* err;
    NSData* jsonData = [NSJSONSerialization dataWithJSONObject:jsonDict options:NSJSONWritingPrettyPrinted error:&err];
    NSString* jsonStr = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
    
    NSLog(@"jsonResult:%@",jsonStr);
    return nStr2CStr(jsonStr);
}

extern "C" {
    void _mkLogin()
    {
        [[MKSDK sharedXSSDK] mkLogin];
    }
    
    void _mkCenter()
    {
        [[MKSDK sharedXSSDK] mkCenter];
    }
    
    void _mkLogout()
    {
        [[MKSDK sharedXSSDK] mkLogout];
    }
    
    void _mkReportRole(int roleLevel, const char *serverId, const char *serverName, const char *roleId, const char *roleName, const char *dateTime)
    {
        MKRole *role = [MKRole new];
        [role setServerId:[NSString stringWithFormat:@"%s",serverId]];
        [role setServerName:[NSString stringWithFormat:@"%s",serverName]];
        [role setRoleId:[NSString stringWithFormat:@"%s",roleId]];
        [role setRoleName:[NSString stringWithFormat:@"%s",roleName]];
        [role setRoleLevel:roleLevel];
        [role setLoginTime:[NSString stringWithFormat:@"%s",dateTime]];
        [[MKSDK sharedXSSDK] mkReportRole:role];
    }
    
    void _mkInit(int gameId, int subGameId, const char *secretKey)
    {
        [[MKSDK sharedXSSDK] mkInitWithSDKParameters:gameId subGameId:subGameId
                                           secretKey:[NSString stringWithFormat:@"%s",secretKey]];
        
        [[MKSDK sharedXSSDK] setLogoutBlock:^{
            UnitySendMessage("Main Camera", "logoutBlock", "");
            NSLog(@"注销事件的回调");
        }];
        
        [[MKSDK sharedXSSDK] setCreateOrderBlock:^(MKPayCode payCode) {
            UnitySendMessage("Main Camera", "createOrderBlock", [NSString stringWithFormat:@"%d",payCode].UTF8String);
            NSLog(@"IAP支付回调 - %ld", (long)payCode);
        }];
        
        [[MKSDK sharedXSSDK] setPayViewCloseBlock:^{
            UnitySendMessage("Main Camera", "payViewCloseBlock", "");
            NSLog(@"支付页面关闭的回调");
        }];
        
        
        
        [[MKSDK sharedXSSDK] setLoginSuccessBlock:^(MKUser *user, MKLoginSuccessSource loginSuccessSource) {
            NSString *userId    = user.userId;
            NSString *userName  = user.username;
            NSString *accessToken = user.accessToken;
            NSLog(@"userId      -- %@", userId);
            NSLog(@"userName    -- %@", userName);
            NSLog(@"accessToken -- %@", accessToken);
            if (loginSuccessSource == MKLoginSuccessByLogin) {
                NSLog(@"登陆来源");
            }
            else if (loginSuccessSource == MKLoginSuccessByRegister)
            {
                NSLog(@"注册来源");
            }
            
            NSMutableDictionary* userLoginResponseDic = [[NSMutableDictionary alloc] initWithCapacity:4];
            [userLoginResponseDic setObject:[NSNumber numberWithLongLong:loginSuccessSource] forKey:@"loginSuccessSource"];
            [userLoginResponseDic setObject:user.userId forKey:@"userId"];
            [userLoginResponseDic setObject:user.username forKey:@"username"];
            [userLoginResponseDic setObject:user.accessToken forKey:@"accessToken"];
            
            UnitySendMessage("Main Camera", "loginSuccessBlock", createJSONResult(userLoginResponseDic));
        }];
        
    }
    
    void _mkPay(int totalFee, const char *cpOrderId, const char *serverId, const char *roleId,
                const char *roleName, const char *productId, const char *productName, const char *productDescription, const char *customInfo)
    {
        MKOrder *order = [MKOrder new];
        [order setServerId:[NSString stringWithFormat:@"%s",serverId]];
        [order setTotalFee:totalFee];
        [order setRoleId:[NSString stringWithFormat:@"%s",roleId]];
        [order setRoleName:[NSString stringWithFormat:@"%s",roleName]];
        [order setProductName:[NSString stringWithFormat:@"%s",productName]];
        [order setProductDescription:[NSString stringWithFormat:@"%s",productDescription]];
        [order setCpOrderId:[NSString stringWithFormat:@"%s",cpOrderId]];
        [order setCustomInfo:[NSString stringWithFormat:@"%s",customInfo]];
        [order setProductId:[NSString stringWithFormat:@"%s",productId]];
        [[MKSDK sharedXSSDK] mkPay:order];
    }
    
}
