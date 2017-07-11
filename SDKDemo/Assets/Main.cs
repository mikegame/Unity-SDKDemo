using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using System;

public class Main : MonoBehaviour {

	[DllImport("__Internal")]
	private static extern void _mkLogin();

	[DllImport("__Internal")]
	private static extern void _mkCenter();

	[DllImport("__Internal")]
	private static extern void _mkLogout();

	[DllImport("__Internal")]
	private static extern void _mkInit(int gameId, int subGameId, string secretKey);

	[DllImport("__Internal")]
	private static extern void _mkReportRole(int roleLevel, string serverId, string serverName, string roleId, 
		string roleName, string dateTime);


	[DllImport("__Internal")]
	private static extern void _mkPay(int totalFee, string cpOrderId, string serverId, string roleId
		, string roleName, string productId, string productName, string productDescription, string customInfo);

	void OnGUI()  
	{  
		if(GUI.Button(new Rect(10,50,400,100),"初始化"))  
		{  
			_mkInit (1, 1, "4f76c696869efaa7f84afe5a2d0de332");
		}  

		if(GUI.Button(new Rect(10,200,400,100),"登录"))  
		{  
			_mkLogin ();
		}

		if(GUI.Button(new Rect(10,350,400,100),"用户中心"))  
		{  
			_mkCenter ();
		}

		if(GUI.Button(new Rect(10,500,400,100),"注销"))  
		{  
			_mkLogout ();
		}

		if(GUI.Button(new Rect(10,650,400,100),"买个表"))  
		{  
			_mkPay (1, Guid.NewGuid ().ToString (), "serverId1", "9527", "凯特琳", "com.mk.mksdkdemo.1", "凯特琳皮肤", "凯特琳皮肤",
				"好戏开场了，想看帽子戏法吗");
		}

	}  

	public void logoutBlock(string nilStr)
	{
		Debug.LogWarning ( "注销回调");
	}
		
	void createOrderBlock (int payCode)
	{
		Debug.Log ("创建订单回调:" + payCode);
	}

	void payViewCloseBlock (string nilStr)
	{
		Debug.Log ("关闭页面回调");
	}

	void loginSuccessBlock (string userString)
	{
		Debug.Log ("登陆成功回调" + userString);

		//上报角色信息
		_mkReportRole(1,"s1", "紫陌红尘","roleid","拉克丝小姐姐","2020-12-12 23:23:23");
	}

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
