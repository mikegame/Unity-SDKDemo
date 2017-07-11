#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_Main2809994845.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "mscorlib_System_Guid2533601593.h"
#include "mscorlib_System_Single2076509932.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Object2689449295.h"

// Main
struct Main_t2809994845;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
extern Il2CppClass* GUI_t4082743951_il2cpp_TypeInfo_var;
extern Il2CppClass* Guid_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3551956756;
extern Il2CppCodeGenString* _stringLiteral378561963;
extern Il2CppCodeGenString* _stringLiteral2302264462;
extern Il2CppCodeGenString* _stringLiteral3097103285;
extern Il2CppCodeGenString* _stringLiteral1380667750;
extern Il2CppCodeGenString* _stringLiteral206496392;
extern Il2CppCodeGenString* _stringLiteral2711389881;
extern Il2CppCodeGenString* _stringLiteral4216257297;
extern Il2CppCodeGenString* _stringLiteral597452677;
extern Il2CppCodeGenString* _stringLiteral2788004037;
extern Il2CppCodeGenString* _stringLiteral1902903031;
extern Il2CppCodeGenString* _stringLiteral3758696738;
extern const uint32_t Main_OnGUI_m4007704720_MetadataUsageId;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2699980497;
extern const uint32_t Main_logoutBlock_m1015760133_MetadataUsageId;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1050471845;
extern const uint32_t Main_createOrderBlock_m1607900130_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral1756285450;
extern const uint32_t Main_payViewCloseBlock_m3438110204_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral2078187019;
extern Il2CppCodeGenString* _stringLiteral2827728186;
extern Il2CppCodeGenString* _stringLiteral3533551521;
extern Il2CppCodeGenString* _stringLiteral3175982921;
extern Il2CppCodeGenString* _stringLiteral3486296438;
extern Il2CppCodeGenString* _stringLiteral1291308077;
extern const uint32_t Main_loginSuccessBlock_m2107427611_MetadataUsageId;




// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m1220545469 (Rect_t3681755626 * __this, float p0, float p1, float p2, float p3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C"  bool GUI_Button_m3054448581 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::_mkInit(System.Int32,System.Int32,System.String)
extern "C"  void Main__mkInit_m55404085 (Il2CppObject * __this /* static, unused */, int32_t ___gameId0, int32_t ___subGameId1, String_t* ___secretKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::_mkLogin()
extern "C"  void Main__mkLogin_m1997568440 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::_mkCenter()
extern "C"  void Main__mkCenter_m3590336968 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::_mkLogout()
extern "C"  void Main__mkLogout_m2595865591 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid::NewGuid()
extern "C"  Guid_t  Guid_NewGuid_m3493657620 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString()
extern "C"  String_t* Guid_ToString_m3927110175 (Guid_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::_mkPay(System.Int32,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C"  void Main__mkPay_m3536722190 (Il2CppObject * __this /* static, unused */, int32_t ___totalFee0, String_t* ___cpOrderId1, String_t* ___serverId2, String_t* ___roleId3, String_t* ___roleName4, String_t* ___productId5, String_t* ___productName6, String_t* ___productDescription7, String_t* ___customInfo8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m2503577968 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m56707527 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m920475918 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m2596409543 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::_mkReportRole(System.Int32,System.String,System.String,System.String,System.String,System.String)
extern "C"  void Main__mkReportRole_m3080130354 (Il2CppObject * __this /* static, unused */, int32_t ___roleLevel0, String_t* ___serverId1, String_t* ___serverName2, String_t* ___roleId3, String_t* ___roleName4, String_t* ___dateTime5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Main::.ctor()
extern "C"  void Main__ctor_m325986520 (Main_t2809994845 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL _mkLogin();
// System.Void Main::_mkLogin()
extern "C"  void Main__mkLogin_m1997568440 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_mkLogin)();

}
extern "C" void DEFAULT_CALL _mkCenter();
// System.Void Main::_mkCenter()
extern "C"  void Main__mkCenter_m3590336968 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_mkCenter)();

}
extern "C" void DEFAULT_CALL _mkLogout();
// System.Void Main::_mkLogout()
extern "C"  void Main__mkLogout_m2595865591 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_mkLogout)();

}
extern "C" void DEFAULT_CALL _mkInit(int32_t, int32_t, char*);
// System.Void Main::_mkInit(System.Int32,System.Int32,System.String)
extern "C"  void Main__mkInit_m55404085 (Il2CppObject * __this /* static, unused */, int32_t ___gameId0, int32_t ___subGameId1, String_t* ___secretKey2, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, char*);

	// Marshaling of parameter '___secretKey2' to native representation
	char* ____secretKey2_marshaled = NULL;
	____secretKey2_marshaled = il2cpp_codegen_marshal_string(___secretKey2);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_mkInit)(___gameId0, ___subGameId1, ____secretKey2_marshaled);

	// Marshaling cleanup of parameter '___secretKey2' native representation
	il2cpp_codegen_marshal_free(____secretKey2_marshaled);
	____secretKey2_marshaled = NULL;

}
extern "C" void DEFAULT_CALL _mkReportRole(int32_t, char*, char*, char*, char*, char*);
// System.Void Main::_mkReportRole(System.Int32,System.String,System.String,System.String,System.String,System.String)
extern "C"  void Main__mkReportRole_m3080130354 (Il2CppObject * __this /* static, unused */, int32_t ___roleLevel0, String_t* ___serverId1, String_t* ___serverName2, String_t* ___roleId3, String_t* ___roleName4, String_t* ___dateTime5, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, char*, char*, char*);

	// Marshaling of parameter '___serverId1' to native representation
	char* ____serverId1_marshaled = NULL;
	____serverId1_marshaled = il2cpp_codegen_marshal_string(___serverId1);

	// Marshaling of parameter '___serverName2' to native representation
	char* ____serverName2_marshaled = NULL;
	____serverName2_marshaled = il2cpp_codegen_marshal_string(___serverName2);

	// Marshaling of parameter '___roleId3' to native representation
	char* ____roleId3_marshaled = NULL;
	____roleId3_marshaled = il2cpp_codegen_marshal_string(___roleId3);

	// Marshaling of parameter '___roleName4' to native representation
	char* ____roleName4_marshaled = NULL;
	____roleName4_marshaled = il2cpp_codegen_marshal_string(___roleName4);

	// Marshaling of parameter '___dateTime5' to native representation
	char* ____dateTime5_marshaled = NULL;
	____dateTime5_marshaled = il2cpp_codegen_marshal_string(___dateTime5);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_mkReportRole)(___roleLevel0, ____serverId1_marshaled, ____serverName2_marshaled, ____roleId3_marshaled, ____roleName4_marshaled, ____dateTime5_marshaled);

	// Marshaling cleanup of parameter '___serverId1' native representation
	il2cpp_codegen_marshal_free(____serverId1_marshaled);
	____serverId1_marshaled = NULL;

	// Marshaling cleanup of parameter '___serverName2' native representation
	il2cpp_codegen_marshal_free(____serverName2_marshaled);
	____serverName2_marshaled = NULL;

	// Marshaling cleanup of parameter '___roleId3' native representation
	il2cpp_codegen_marshal_free(____roleId3_marshaled);
	____roleId3_marshaled = NULL;

	// Marshaling cleanup of parameter '___roleName4' native representation
	il2cpp_codegen_marshal_free(____roleName4_marshaled);
	____roleName4_marshaled = NULL;

	// Marshaling cleanup of parameter '___dateTime5' native representation
	il2cpp_codegen_marshal_free(____dateTime5_marshaled);
	____dateTime5_marshaled = NULL;

}
extern "C" void DEFAULT_CALL _mkPay(int32_t, char*, char*, char*, char*, char*, char*, char*, char*);
// System.Void Main::_mkPay(System.Int32,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C"  void Main__mkPay_m3536722190 (Il2CppObject * __this /* static, unused */, int32_t ___totalFee0, String_t* ___cpOrderId1, String_t* ___serverId2, String_t* ___roleId3, String_t* ___roleName4, String_t* ___productId5, String_t* ___productName6, String_t* ___productDescription7, String_t* ___customInfo8, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, char*, char*, char*, char*, char*, char*);

	// Marshaling of parameter '___cpOrderId1' to native representation
	char* ____cpOrderId1_marshaled = NULL;
	____cpOrderId1_marshaled = il2cpp_codegen_marshal_string(___cpOrderId1);

	// Marshaling of parameter '___serverId2' to native representation
	char* ____serverId2_marshaled = NULL;
	____serverId2_marshaled = il2cpp_codegen_marshal_string(___serverId2);

	// Marshaling of parameter '___roleId3' to native representation
	char* ____roleId3_marshaled = NULL;
	____roleId3_marshaled = il2cpp_codegen_marshal_string(___roleId3);

	// Marshaling of parameter '___roleName4' to native representation
	char* ____roleName4_marshaled = NULL;
	____roleName4_marshaled = il2cpp_codegen_marshal_string(___roleName4);

	// Marshaling of parameter '___productId5' to native representation
	char* ____productId5_marshaled = NULL;
	____productId5_marshaled = il2cpp_codegen_marshal_string(___productId5);

	// Marshaling of parameter '___productName6' to native representation
	char* ____productName6_marshaled = NULL;
	____productName6_marshaled = il2cpp_codegen_marshal_string(___productName6);

	// Marshaling of parameter '___productDescription7' to native representation
	char* ____productDescription7_marshaled = NULL;
	____productDescription7_marshaled = il2cpp_codegen_marshal_string(___productDescription7);

	// Marshaling of parameter '___customInfo8' to native representation
	char* ____customInfo8_marshaled = NULL;
	____customInfo8_marshaled = il2cpp_codegen_marshal_string(___customInfo8);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_mkPay)(___totalFee0, ____cpOrderId1_marshaled, ____serverId2_marshaled, ____roleId3_marshaled, ____roleName4_marshaled, ____productId5_marshaled, ____productName6_marshaled, ____productDescription7_marshaled, ____customInfo8_marshaled);

	// Marshaling cleanup of parameter '___cpOrderId1' native representation
	il2cpp_codegen_marshal_free(____cpOrderId1_marshaled);
	____cpOrderId1_marshaled = NULL;

	// Marshaling cleanup of parameter '___serverId2' native representation
	il2cpp_codegen_marshal_free(____serverId2_marshaled);
	____serverId2_marshaled = NULL;

	// Marshaling cleanup of parameter '___roleId3' native representation
	il2cpp_codegen_marshal_free(____roleId3_marshaled);
	____roleId3_marshaled = NULL;

	// Marshaling cleanup of parameter '___roleName4' native representation
	il2cpp_codegen_marshal_free(____roleName4_marshaled);
	____roleName4_marshaled = NULL;

	// Marshaling cleanup of parameter '___productId5' native representation
	il2cpp_codegen_marshal_free(____productId5_marshaled);
	____productId5_marshaled = NULL;

	// Marshaling cleanup of parameter '___productName6' native representation
	il2cpp_codegen_marshal_free(____productName6_marshaled);
	____productName6_marshaled = NULL;

	// Marshaling cleanup of parameter '___productDescription7' native representation
	il2cpp_codegen_marshal_free(____productDescription7_marshaled);
	____productDescription7_marshaled = NULL;

	// Marshaling cleanup of parameter '___customInfo8' native representation
	il2cpp_codegen_marshal_free(____customInfo8_marshaled);
	____customInfo8_marshaled = NULL;

}
// System.Void Main::OnGUI()
extern "C"  void Main_OnGUI_m4007704720 (Main_t2809994845 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Main_OnGUI_m4007704720_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Rect_t3681755626  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Rect__ctor_m1220545469(&L_0, (10.0f), (50.0f), (400.0f), (100.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t4082743951_il2cpp_TypeInfo_var);
		bool L_1 = GUI_Button_m3054448581(NULL /*static, unused*/, L_0, _stringLiteral3551956756, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		Main__mkInit_m55404085(NULL /*static, unused*/, 1, 1, _stringLiteral378561963, /*hidden argument*/NULL);
	}

IL_0034:
	{
		Rect_t3681755626  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Rect__ctor_m1220545469(&L_2, (10.0f), (200.0f), (400.0f), (100.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t4082743951_il2cpp_TypeInfo_var);
		bool L_3 = GUI_Button_m3054448581(NULL /*static, unused*/, L_2, _stringLiteral2302264462, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0061;
		}
	}
	{
		Main__mkLogin_m1997568440(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0061:
	{
		Rect_t3681755626  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Rect__ctor_m1220545469(&L_4, (10.0f), (350.0f), (400.0f), (100.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t4082743951_il2cpp_TypeInfo_var);
		bool L_5 = GUI_Button_m3054448581(NULL /*static, unused*/, L_4, _stringLiteral3097103285, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_008e;
		}
	}
	{
		Main__mkCenter_m3590336968(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_008e:
	{
		Rect_t3681755626  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Rect__ctor_m1220545469(&L_6, (10.0f), (500.0f), (400.0f), (100.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t4082743951_il2cpp_TypeInfo_var);
		bool L_7 = GUI_Button_m3054448581(NULL /*static, unused*/, L_6, _stringLiteral1380667750, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00bb;
		}
	}
	{
		Main__mkLogout_m2595865591(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_00bb:
	{
		Rect_t3681755626  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Rect__ctor_m1220545469(&L_8, (10.0f), (650.0f), (400.0f), (100.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t4082743951_il2cpp_TypeInfo_var);
		bool L_9 = GUI_Button_m3054448581(NULL /*static, unused*/, L_8, _stringLiteral206496392, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_10 = Guid_NewGuid_m3493657620(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11 = Guid_ToString_m3927110175((&V_0), /*hidden argument*/NULL);
		Main__mkPay_m3536722190(NULL /*static, unused*/, 1, L_11, _stringLiteral2711389881, _stringLiteral4216257297, _stringLiteral597452677, _stringLiteral2788004037, _stringLiteral1902903031, _stringLiteral1902903031, _stringLiteral3758696738, /*hidden argument*/NULL);
	}

IL_011f:
	{
		return;
	}
}
// System.Void Main::logoutBlock(System.String)
extern "C"  void Main_logoutBlock_m1015760133 (Main_t2809994845 * __this, String_t* ___nilStr0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Main_logoutBlock_m1015760133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_LogWarning_m2503577968(NULL /*static, unused*/, _stringLiteral2699980497, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Main::createOrderBlock(System.Int32)
extern "C"  void Main_createOrderBlock_m1607900130 (Main_t2809994845 * __this, int32_t ___payCode0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Main_createOrderBlock_m1607900130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___payCode0;
		int32_t L_1 = L_0;
		Il2CppObject * L_2 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral1050471845, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Main::payViewCloseBlock(System.String)
extern "C"  void Main_payViewCloseBlock_m3438110204 (Main_t2809994845 * __this, String_t* ___nilStr0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Main_payViewCloseBlock_m3438110204_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral1756285450, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Main::loginSuccessBlock(System.String)
extern "C"  void Main_loginSuccessBlock_m2107427611 (Main_t2809994845 * __this, String_t* ___userString0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Main_loginSuccessBlock_m2107427611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___userString0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral2078187019, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		Main__mkReportRole_m3080130354(NULL /*static, unused*/, 1, _stringLiteral2827728186, _stringLiteral3533551521, _stringLiteral3175982921, _stringLiteral3486296438, _stringLiteral1291308077, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Main::Start()
extern "C"  void Main_Start_m2091519880 (Main_t2809994845 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Main::Update()
extern "C"  void Main_Update_m2467676297 (Main_t2809994845 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
