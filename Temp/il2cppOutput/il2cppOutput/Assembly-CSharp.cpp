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
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// GameController
struct GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3;
// InputNumController
struct InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE;
// MenuController
struct MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Int32[]>
struct List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t053DAB6E2110E276A0339D73497193F464BC1F82;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_tDDCC3FF04B4444A45BC27D94CC0369A8CF06DBF9;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.RectOffset
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0916919DD333A1D8DD5832B909F9B98FF5A5D5D9;
IL2CPP_EXTERN_C String_t* _stringLiteral10F203C0EF2710177637945CCB3060D89475D6D0;
IL2CPP_EXTERN_C String_t* _stringLiteral259C2C46E100F5801C9F44B9B5A5BBE9F0C49557;
IL2CPP_EXTERN_C String_t* _stringLiteral29F5EC735DE6FF16D62734828C85987CAC2D6441;
IL2CPP_EXTERN_C String_t* _stringLiteral33D7C9F201F5CD84F3B4F0E32AFCEA1F7586AC53;
IL2CPP_EXTERN_C String_t* _stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9;
IL2CPP_EXTERN_C String_t* _stringLiteral4C1FDEFFAFC7C5174F48FED895B4D352DC6F4ED7;
IL2CPP_EXTERN_C String_t* _stringLiteral4C55231C2BF3629CA3EFC827E8CD1653888101E4;
IL2CPP_EXTERN_C String_t* _stringLiteral515BAE830DA2CA37394E7BEF179BD898B2EB920F;
IL2CPP_EXTERN_C String_t* _stringLiteral5619BF2335B90EC96C1A84C336195B785200DFAD;
IL2CPP_EXTERN_C String_t* _stringLiteral58AC090C24B71EDF1210F305FE31E5FC7AA90FAD;
IL2CPP_EXTERN_C String_t* _stringLiteral58B7DCBB4A37BC3BAF2463A99033B98291CE7ADF;
IL2CPP_EXTERN_C String_t* _stringLiteral662FAE5F621ABDAD32655F00103D88D3FC45F2BB;
IL2CPP_EXTERN_C String_t* _stringLiteral66BCA5A243735E66B85A3C238149DF70CC3DFE15;
IL2CPP_EXTERN_C String_t* _stringLiteral6867932AA2D84CB7AC36C2F748AB646C9B0C3B43;
IL2CPP_EXTERN_C String_t* _stringLiteral6A958F3B2E228443C9098B8D679B4275E68DFEF9;
IL2CPP_EXTERN_C String_t* _stringLiteral6D9490B3C03678F86EE4192BDCC37143951C2852;
IL2CPP_EXTERN_C String_t* _stringLiteral79363F7261D1C21983552D3182E51FAE709B9027;
IL2CPP_EXTERN_C String_t* _stringLiteral7AAB1BD826EFE98BA8BA11366CC73F532746F1F6;
IL2CPP_EXTERN_C String_t* _stringLiteral7EC7381DF7156ED536F20E154AD81EF2651DAFF7;
IL2CPP_EXTERN_C String_t* _stringLiteral8DF6BE46FC07D973C70580C412430566B4D624A8;
IL2CPP_EXTERN_C String_t* _stringLiteralB2FB4F621A7A2E232A5D775DD3F4D4C63C4EC624;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C81539D6F8C9AF4A093386F5FE733E277F4DF9;
IL2CPP_EXTERN_C String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
IL2CPP_EXTERN_C String_t* _stringLiteralBE69161104C06C43A8581EC0A5ACF835BB5DFA6E;
IL2CPP_EXTERN_C String_t* _stringLiteralBFA50C7A3838FC883B8F4FD701B280E77A3952EA;
IL2CPP_EXTERN_C String_t* _stringLiteralC991E3D61C93CB2CB59B802FAD78E6D0BEDC79CB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralECA60083F98AFD354B9E61F67A7B760B4D70F895;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mCA8E2D4D3F45BEBE5BF1DFA221CBB794D1D6A4E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF3BD8F032D5C1FB7BC4D8E18A1358A168FE0C40D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m275CA0DC5737E7EF9DBEAC629F8DE280CFFA96D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m7D85EC94D4E3697C814E4F4DA9C64BACBB272CBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m369DBFFEBB963F77D8DDA5D86E524581A20B0889_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6744E0AD327AE2A74FE88E47F83C4EB1945594FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MenuController_U3CInitU3Eb__5_0_mA2D49E59870CE7A95674EB1D3519AF16909A8CF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t GameController_ActiveMyNumberTexts_m4D44CB6B8F99492586E1031D26EB751077D82B98_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_BackToTitleBtn_m6E83C90D65D7F3A874565885389DDC5A9BB5CE1B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_CheckHitBlow_m48888F6A47F3FCB54DB05CFDF1E5778B937DF47A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_CheckWinOrLose_mBC6ADBCE89D0F96677DFD8A663E225220CDA28AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_GetCheckNumList_m5983B6D559B1FBE2FE6A8542C7D68EF0E33B9337_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_Init_m950DD1611CC62F4FD4B509BFDCC7CBCFFEA403D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_MakeScoreGrid_m0713642AC421EBD7A27DF5DCD4642B74DB0A1FF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_PlayAI_m42348E105C03388DE95DA26D7514D0451F9710B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_SetAINumber_mD7EC5236C9DAD9C5A532C639DC3430F93289D2A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_Start_m229BE9A914ADF299ACFF1EFD5F15F27FF146D3C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_TextsToIntArray_m172BC13F3A7E134E61E1EB9C9F45CDEAA312DAF9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_Update_m7D73FA9AB337123D2EB1CB806C756731D1B9B6F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InputNumController_Start_mDE43FBFFBAF8EC2494218CE223DBEA89F136B4F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InputNumController_pushCheckBtn_m99D865BB47C58423F2C357D595BF41FF8B039CF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InputNumController_pushDeleteBtn_mFF0BBAA2D78AF8D2AAB9F592F7C2AC1461DCC2F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InputNumController_pushNumber_m575E11EAC945C00ECD40FFB03BE114A1081D516E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MenuController_Init_m2B4D5E5B8FA39F98AA4ADDA7F61E180D714B49D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MenuController_Update_m5C9652645E5A96F9983D8F4E4936E951DEC509F8_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32[]>
struct  List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC, ____items_1)); }
	inline Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* get__items_1() const { return ____items_1; }
	inline Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03__padding[1];
	};

public:
};


// UnityEngine.Events.UnityEvent
struct  UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.TextAnchor
struct  TextAnchor_tEC19034D476659A5E05366C63564F34DD30E7C57 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tEC19034D476659A5E05366C63564F34DD30E7C57, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button_ButtonClickedEvent
struct  ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB  : public UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F
{
public:

public:
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.GridLayoutGroup_Axis
struct  Axis_tD4645F3B274E7AE7793C038A2BA2E68C6F0F02F0 
{
public:
	// System.Int32 UnityEngine.UI.GridLayoutGroup_Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_tD4645F3B274E7AE7793C038A2BA2E68C6F0F02F0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.GridLayoutGroup_Constraint
struct  Constraint_tF471E55525B89D1E7C938CC0AF7515709494C59D 
{
public:
	// System.Int32 UnityEngine.UI.GridLayoutGroup_Constraint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Constraint_tF471E55525B89D1E7C938CC0AF7515709494C59D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.GridLayoutGroup_Corner
struct  Corner_tD61F36EC56D401A65DA06BE1A21689319201D18E 
{
public:
	// System.Int32 UnityEngine.UI.GridLayoutGroup_Corner::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Corner_tD61F36EC56D401A65DA06BE1A21689319201D18E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation_Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable_Transition
struct  Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct  UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// GameController
struct  GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text[] GameController::numTexts
	TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* ___numTexts_4;
	// InputNumController GameController::numController
	InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * ___numController_5;
	// UnityEngine.GameObject GameController::inputNumberObj
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___inputNumberObj_6;
	// UnityEngine.GameObject GameController::scoresObj
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___scoresObj_7;
	// UnityEngine.UI.GridLayoutGroup GameController::myScoreNumGrid
	GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8 * ___myScoreNumGrid_8;
	// UnityEngine.UI.GridLayoutGroup GameController::myScoreHitBlowGrid
	GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8 * ___myScoreHitBlowGrid_9;
	// UnityEngine.UI.GridLayoutGroup GameController::rivalScoreNumGrid
	GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8 * ___rivalScoreNumGrid_10;
	// UnityEngine.UI.GridLayoutGroup GameController::rivalScoreHitBlowGrid
	GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8 * ___rivalScoreHitBlowGrid_11;
	// UnityEngine.GameObject GameController::numObj
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___numObj_12;
	// UnityEngine.GameObject GameController::hitObj
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___hitObj_13;
	// UnityEngine.GameObject GameController::blowObj
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___blowObj_14;
	// UnityEngine.GameObject GameController::resultObj
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___resultObj_15;
	// UnityEngine.UI.Text GameController::resultText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___resultText_16;
	// UnityEngine.UI.Text[] GameController::myNums
	TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* ___myNums_17;
	// System.Int32[] GameController::rivalNums
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___rivalNums_18;
	// System.Int32 GameController::turnSize
	int32_t ___turnSize_19;
	// System.Int32 GameController::gameTurn
	int32_t ___gameTurn_20;
	// UnityEngine.UI.Text[] GameController::myScores
	TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* ___myScores_21;
	// UnityEngine.UI.Text[] GameController::myHits
	TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* ___myHits_22;
	// UnityEngine.UI.Text[] GameController::myBlows
	TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* ___myBlows_23;
	// UnityEngine.UI.Text[] GameController::rivalScores
	TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* ___rivalScores_24;
	// UnityEngine.UI.Text[] GameController::rivalHits
	TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* ___rivalHits_25;
	// UnityEngine.UI.Text[] GameController::rivalBlows
	TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* ___rivalBlows_26;
	// System.Boolean GameController::isSetUp
	bool ___isSetUp_27;
	// System.Collections.Generic.List`1<System.Int32[]> GameController::rivalInputtedList
	List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC * ___rivalInputtedList_28;

public:
	inline static int32_t get_offset_of_numTexts_4() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___numTexts_4)); }
	inline TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* get_numTexts_4() const { return ___numTexts_4; }
	inline TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188** get_address_of_numTexts_4() { return &___numTexts_4; }
	inline void set_numTexts_4(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* value)
	{
		___numTexts_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numTexts_4), (void*)value);
	}

	inline static int32_t get_offset_of_numController_5() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___numController_5)); }
	inline InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * get_numController_5() const { return ___numController_5; }
	inline InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE ** get_address_of_numController_5() { return &___numController_5; }
	inline void set_numController_5(InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * value)
	{
		___numController_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numController_5), (void*)value);
	}

	inline static int32_t get_offset_of_inputNumberObj_6() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___inputNumberObj_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_inputNumberObj_6() const { return ___inputNumberObj_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_inputNumberObj_6() { return &___inputNumberObj_6; }
	inline void set_inputNumberObj_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___inputNumberObj_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputNumberObj_6), (void*)value);
	}

	inline static int32_t get_offset_of_scoresObj_7() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___scoresObj_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_scoresObj_7() const { return ___scoresObj_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_scoresObj_7() { return &___scoresObj_7; }
	inline void set_scoresObj_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___scoresObj_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoresObj_7), (void*)value);
	}

	inline static int32_t get_offset_of_myScoreNumGrid_8() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___myScoreNumGrid_8)); }
	inline GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8 * get_myScoreNumGrid_8() const { return ___myScoreNumGrid_8; }
	inline GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8 ** get_address_of_myScoreNumGrid_8() { return &___myScoreNumGrid_8; }
	inline void set_myScoreNumGrid_8(GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8 * value)
	{
		___myScoreNumGrid_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myScoreNumGrid_8), (void*)value);
	}

	inline static int32_t get_offset_of_myScoreHitBlowGrid_9() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___myScoreHitBlowGrid_9)); }
	inline GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8 * get_myScoreHitBlowGrid_9() const { return ___myScoreHitBlowGrid_9; }
	inline GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8 ** get_address_of_myScoreHitBlowGrid_9() { return &___myScoreHitBlowGrid_9; }
	inline void set_myScoreHitBlowGrid_9(GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8 * value)
	{
		___myScoreHitBlowGrid_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myScoreHitBlowGrid_9), (void*)value);
	}

	inline static int32_t get_offset_of_rivalScoreNumGrid_10() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___rivalScoreNumGrid_10)); }
	inline GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8 * get_rivalScoreNumGrid_10() const { return ___rivalScoreNumGrid_10; }
	inline GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8 ** get_address_of_rivalScoreNumGrid_10() { return &___rivalScoreNumGrid_10; }
	inline void set_rivalScoreNumGrid_10(GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8 * value)
	{
		___rivalScoreNumGrid_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rivalScoreNumGrid_10), (void*)value);
	}

	inline static int32_t get_offset_of_rivalScoreHitBlowGrid_11() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___rivalScoreHitBlowGrid_11)); }
	inline GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8 * get_rivalScoreHitBlowGrid_11() const { return ___rivalScoreHitBlowGrid_11; }
	inline GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8 ** get_address_of_rivalScoreHitBlowGrid_11() { return &___rivalScoreHitBlowGrid_11; }
	inline void set_rivalScoreHitBlowGrid_11(GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8 * value)
	{
		___rivalScoreHitBlowGrid_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rivalScoreHitBlowGrid_11), (void*)value);
	}

	inline static int32_t get_offset_of_numObj_12() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___numObj_12)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_numObj_12() const { return ___numObj_12; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_numObj_12() { return &___numObj_12; }
	inline void set_numObj_12(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___numObj_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numObj_12), (void*)value);
	}

	inline static int32_t get_offset_of_hitObj_13() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___hitObj_13)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_hitObj_13() const { return ___hitObj_13; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_hitObj_13() { return &___hitObj_13; }
	inline void set_hitObj_13(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___hitObj_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitObj_13), (void*)value);
	}

	inline static int32_t get_offset_of_blowObj_14() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___blowObj_14)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_blowObj_14() const { return ___blowObj_14; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_blowObj_14() { return &___blowObj_14; }
	inline void set_blowObj_14(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___blowObj_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blowObj_14), (void*)value);
	}

	inline static int32_t get_offset_of_resultObj_15() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___resultObj_15)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_resultObj_15() const { return ___resultObj_15; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_resultObj_15() { return &___resultObj_15; }
	inline void set_resultObj_15(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___resultObj_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultObj_15), (void*)value);
	}

	inline static int32_t get_offset_of_resultText_16() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___resultText_16)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_resultText_16() const { return ___resultText_16; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_resultText_16() { return &___resultText_16; }
	inline void set_resultText_16(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___resultText_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultText_16), (void*)value);
	}

	inline static int32_t get_offset_of_myNums_17() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___myNums_17)); }
	inline TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* get_myNums_17() const { return ___myNums_17; }
	inline TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188** get_address_of_myNums_17() { return &___myNums_17; }
	inline void set_myNums_17(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* value)
	{
		___myNums_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myNums_17), (void*)value);
	}

	inline static int32_t get_offset_of_rivalNums_18() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___rivalNums_18)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_rivalNums_18() const { return ___rivalNums_18; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_rivalNums_18() { return &___rivalNums_18; }
	inline void set_rivalNums_18(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___rivalNums_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rivalNums_18), (void*)value);
	}

	inline static int32_t get_offset_of_turnSize_19() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___turnSize_19)); }
	inline int32_t get_turnSize_19() const { return ___turnSize_19; }
	inline int32_t* get_address_of_turnSize_19() { return &___turnSize_19; }
	inline void set_turnSize_19(int32_t value)
	{
		___turnSize_19 = value;
	}

	inline static int32_t get_offset_of_gameTurn_20() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___gameTurn_20)); }
	inline int32_t get_gameTurn_20() const { return ___gameTurn_20; }
	inline int32_t* get_address_of_gameTurn_20() { return &___gameTurn_20; }
	inline void set_gameTurn_20(int32_t value)
	{
		___gameTurn_20 = value;
	}

	inline static int32_t get_offset_of_myScores_21() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___myScores_21)); }
	inline TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* get_myScores_21() const { return ___myScores_21; }
	inline TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188** get_address_of_myScores_21() { return &___myScores_21; }
	inline void set_myScores_21(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* value)
	{
		___myScores_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myScores_21), (void*)value);
	}

	inline static int32_t get_offset_of_myHits_22() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___myHits_22)); }
	inline TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* get_myHits_22() const { return ___myHits_22; }
	inline TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188** get_address_of_myHits_22() { return &___myHits_22; }
	inline void set_myHits_22(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* value)
	{
		___myHits_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myHits_22), (void*)value);
	}

	inline static int32_t get_offset_of_myBlows_23() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___myBlows_23)); }
	inline TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* get_myBlows_23() const { return ___myBlows_23; }
	inline TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188** get_address_of_myBlows_23() { return &___myBlows_23; }
	inline void set_myBlows_23(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* value)
	{
		___myBlows_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myBlows_23), (void*)value);
	}

	inline static int32_t get_offset_of_rivalScores_24() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___rivalScores_24)); }
	inline TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* get_rivalScores_24() const { return ___rivalScores_24; }
	inline TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188** get_address_of_rivalScores_24() { return &___rivalScores_24; }
	inline void set_rivalScores_24(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* value)
	{
		___rivalScores_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rivalScores_24), (void*)value);
	}

	inline static int32_t get_offset_of_rivalHits_25() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___rivalHits_25)); }
	inline TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* get_rivalHits_25() const { return ___rivalHits_25; }
	inline TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188** get_address_of_rivalHits_25() { return &___rivalHits_25; }
	inline void set_rivalHits_25(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* value)
	{
		___rivalHits_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rivalHits_25), (void*)value);
	}

	inline static int32_t get_offset_of_rivalBlows_26() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___rivalBlows_26)); }
	inline TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* get_rivalBlows_26() const { return ___rivalBlows_26; }
	inline TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188** get_address_of_rivalBlows_26() { return &___rivalBlows_26; }
	inline void set_rivalBlows_26(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* value)
	{
		___rivalBlows_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rivalBlows_26), (void*)value);
	}

	inline static int32_t get_offset_of_isSetUp_27() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___isSetUp_27)); }
	inline bool get_isSetUp_27() const { return ___isSetUp_27; }
	inline bool* get_address_of_isSetUp_27() { return &___isSetUp_27; }
	inline void set_isSetUp_27(bool value)
	{
		___isSetUp_27 = value;
	}

	inline static int32_t get_offset_of_rivalInputtedList_28() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___rivalInputtedList_28)); }
	inline List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC * get_rivalInputtedList_28() const { return ___rivalInputtedList_28; }
	inline List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC ** get_address_of_rivalInputtedList_28() { return &___rivalInputtedList_28; }
	inline void set_rivalInputtedList_28(List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC * value)
	{
		___rivalInputtedList_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rivalInputtedList_28), (void*)value);
	}
};

struct GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_StaticFields
{
public:
	// UnityEngine.UI.Text[] GameController::myInputNumber
	TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* ___myInputNumber_29;

public:
	inline static int32_t get_offset_of_myInputNumber_29() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_StaticFields, ___myInputNumber_29)); }
	inline TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* get_myInputNumber_29() const { return ___myInputNumber_29; }
	inline TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188** get_address_of_myInputNumber_29() { return &___myInputNumber_29; }
	inline void set_myInputNumber_29(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* value)
	{
		___myInputNumber_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myInputNumber_29), (void*)value);
	}
};


// InputNumController
struct  InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text[] InputNumController::numTexts
	TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* ___numTexts_4;
	// System.Int32 InputNumController::numCnt
	int32_t ___numCnt_5;
	// System.Boolean InputNumController::<IsInputNum>k__BackingField
	bool ___U3CIsInputNumU3Ek__BackingField_6;
	// System.Boolean InputNumController::<IsReadyGame>k__BackingField
	bool ___U3CIsReadyGameU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_numTexts_4() { return static_cast<int32_t>(offsetof(InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE, ___numTexts_4)); }
	inline TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* get_numTexts_4() const { return ___numTexts_4; }
	inline TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188** get_address_of_numTexts_4() { return &___numTexts_4; }
	inline void set_numTexts_4(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* value)
	{
		___numTexts_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numTexts_4), (void*)value);
	}

	inline static int32_t get_offset_of_numCnt_5() { return static_cast<int32_t>(offsetof(InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE, ___numCnt_5)); }
	inline int32_t get_numCnt_5() const { return ___numCnt_5; }
	inline int32_t* get_address_of_numCnt_5() { return &___numCnt_5; }
	inline void set_numCnt_5(int32_t value)
	{
		___numCnt_5 = value;
	}

	inline static int32_t get_offset_of_U3CIsInputNumU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE, ___U3CIsInputNumU3Ek__BackingField_6)); }
	inline bool get_U3CIsInputNumU3Ek__BackingField_6() const { return ___U3CIsInputNumU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsInputNumU3Ek__BackingField_6() { return &___U3CIsInputNumU3Ek__BackingField_6; }
	inline void set_U3CIsInputNumU3Ek__BackingField_6(bool value)
	{
		___U3CIsInputNumU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsReadyGameU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE, ___U3CIsReadyGameU3Ek__BackingField_7)); }
	inline bool get_U3CIsReadyGameU3Ek__BackingField_7() const { return ___U3CIsReadyGameU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsReadyGameU3Ek__BackingField_7() { return &___U3CIsReadyGameU3Ek__BackingField_7; }
	inline void set_U3CIsReadyGameU3Ek__BackingField_7(bool value)
	{
		___U3CIsReadyGameU3Ek__BackingField_7 = value;
	}
};


// MenuController
struct  MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject MenuController::titleTextObj
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___titleTextObj_4;
	// UnityEngine.UI.Button MenuController::vsCpuButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___vsCpuButton_5;
	// InputNumController MenuController::numController
	InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * ___numController_6;

public:
	inline static int32_t get_offset_of_titleTextObj_4() { return static_cast<int32_t>(offsetof(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1, ___titleTextObj_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_titleTextObj_4() const { return ___titleTextObj_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_titleTextObj_4() { return &___titleTextObj_4; }
	inline void set_titleTextObj_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___titleTextObj_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___titleTextObj_4), (void*)value);
	}

	inline static int32_t get_offset_of_vsCpuButton_5() { return static_cast<int32_t>(offsetof(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1, ___vsCpuButton_5)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_vsCpuButton_5() const { return ___vsCpuButton_5; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_vsCpuButton_5() { return &___vsCpuButton_5; }
	inline void set_vsCpuButton_5(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___vsCpuButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vsCpuButton_5), (void*)value);
	}

	inline static int32_t get_offset_of_numController_6() { return static_cast<int32_t>(offsetof(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1, ___numController_6)); }
	inline InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * get_numController_6() const { return ___numController_6; }
	inline InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE ** get_address_of_numController_6() { return &___numController_6; }
	inline void set_numController_6(InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * value)
	{
		___numController_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numController_6), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.LayoutGroup
struct  LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_tDDCC3FF04B4444A45BC27D94CC0369A8CF06DBF9 * ___m_RectChildren_11;

public:
	inline static int32_t get_offset_of_m_Padding_4() { return static_cast<int32_t>(offsetof(LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4, ___m_Padding_4)); }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * get_m_Padding_4() const { return ___m_Padding_4; }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A ** get_address_of_m_Padding_4() { return &___m_Padding_4; }
	inline void set_m_Padding_4(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * value)
	{
		___m_Padding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildAlignment_5() { return static_cast<int32_t>(offsetof(LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4, ___m_ChildAlignment_5)); }
	inline int32_t get_m_ChildAlignment_5() const { return ___m_ChildAlignment_5; }
	inline int32_t* get_address_of_m_ChildAlignment_5() { return &___m_ChildAlignment_5; }
	inline void set_m_ChildAlignment_5(int32_t value)
	{
		___m_ChildAlignment_5 = value;
	}

	inline static int32_t get_offset_of_m_Rect_6() { return static_cast<int32_t>(offsetof(LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4, ___m_Rect_6)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_Rect_6() const { return ___m_Rect_6; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_Rect_6() { return &___m_Rect_6; }
	inline void set_m_Rect_6(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_Rect_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rect_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tracker_7() { return static_cast<int32_t>(offsetof(LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4, ___m_Tracker_7)); }
	inline DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  get_m_Tracker_7() const { return ___m_Tracker_7; }
	inline DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 * get_address_of_m_Tracker_7() { return &___m_Tracker_7; }
	inline void set_m_Tracker_7(DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  value)
	{
		___m_Tracker_7 = value;
	}

	inline static int32_t get_offset_of_m_TotalMinSize_8() { return static_cast<int32_t>(offsetof(LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4, ___m_TotalMinSize_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_TotalMinSize_8() const { return ___m_TotalMinSize_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_TotalMinSize_8() { return &___m_TotalMinSize_8; }
	inline void set_m_TotalMinSize_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_TotalMinSize_8 = value;
	}

	inline static int32_t get_offset_of_m_TotalPreferredSize_9() { return static_cast<int32_t>(offsetof(LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4, ___m_TotalPreferredSize_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_TotalPreferredSize_9() const { return ___m_TotalPreferredSize_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_TotalPreferredSize_9() { return &___m_TotalPreferredSize_9; }
	inline void set_m_TotalPreferredSize_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_TotalPreferredSize_9 = value;
	}

	inline static int32_t get_offset_of_m_TotalFlexibleSize_10() { return static_cast<int32_t>(offsetof(LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4, ___m_TotalFlexibleSize_10)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_TotalFlexibleSize_10() const { return ___m_TotalFlexibleSize_10; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_TotalFlexibleSize_10() { return &___m_TotalFlexibleSize_10; }
	inline void set_m_TotalFlexibleSize_10(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_TotalFlexibleSize_10 = value;
	}

	inline static int32_t get_offset_of_m_RectChildren_11() { return static_cast<int32_t>(offsetof(LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4, ___m_RectChildren_11)); }
	inline List_1_tDDCC3FF04B4444A45BC27D94CC0369A8CF06DBF9 * get_m_RectChildren_11() const { return ___m_RectChildren_11; }
	inline List_1_tDDCC3FF04B4444A45BC27D94CC0369A8CF06DBF9 ** get_address_of_m_RectChildren_11() { return &___m_RectChildren_11; }
	inline void set_m_RectChildren_11(List_1_tDDCC3FF04B4444A45BC27D94CC0369A8CF06DBF9 * value)
	{
		___m_RectChildren_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectChildren_11), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_7;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_7)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_9)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_10)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_13)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_19)); }
	inline List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.UI.Button_ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B, ___m_OnClick_20)); }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.GridLayoutGroup
struct  GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8  : public LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4
{
public:
	// UnityEngine.UI.GridLayoutGroup_Corner UnityEngine.UI.GridLayoutGroup::m_StartCorner
	int32_t ___m_StartCorner_12;
	// UnityEngine.UI.GridLayoutGroup_Axis UnityEngine.UI.GridLayoutGroup::m_StartAxis
	int32_t ___m_StartAxis_13;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_CellSize
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_CellSize_14;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_Spacing
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Spacing_15;
	// UnityEngine.UI.GridLayoutGroup_Constraint UnityEngine.UI.GridLayoutGroup::m_Constraint
	int32_t ___m_Constraint_16;
	// System.Int32 UnityEngine.UI.GridLayoutGroup::m_ConstraintCount
	int32_t ___m_ConstraintCount_17;

public:
	inline static int32_t get_offset_of_m_StartCorner_12() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8, ___m_StartCorner_12)); }
	inline int32_t get_m_StartCorner_12() const { return ___m_StartCorner_12; }
	inline int32_t* get_address_of_m_StartCorner_12() { return &___m_StartCorner_12; }
	inline void set_m_StartCorner_12(int32_t value)
	{
		___m_StartCorner_12 = value;
	}

	inline static int32_t get_offset_of_m_StartAxis_13() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8, ___m_StartAxis_13)); }
	inline int32_t get_m_StartAxis_13() const { return ___m_StartAxis_13; }
	inline int32_t* get_address_of_m_StartAxis_13() { return &___m_StartAxis_13; }
	inline void set_m_StartAxis_13(int32_t value)
	{
		___m_StartAxis_13 = value;
	}

	inline static int32_t get_offset_of_m_CellSize_14() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8, ___m_CellSize_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_CellSize_14() const { return ___m_CellSize_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_CellSize_14() { return &___m_CellSize_14; }
	inline void set_m_CellSize_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_CellSize_14 = value;
	}

	inline static int32_t get_offset_of_m_Spacing_15() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8, ___m_Spacing_15)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Spacing_15() const { return ___m_Spacing_15; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Spacing_15() { return &___m_Spacing_15; }
	inline void set_m_Spacing_15(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Spacing_15 = value;
	}

	inline static int32_t get_offset_of_m_Constraint_16() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8, ___m_Constraint_16)); }
	inline int32_t get_m_Constraint_16() const { return ___m_Constraint_16; }
	inline int32_t* get_address_of_m_Constraint_16() { return &___m_Constraint_16; }
	inline void set_m_Constraint_16(int32_t value)
	{
		___m_Constraint_16 = value;
	}

	inline static int32_t get_offset_of_m_ConstraintCount_17() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8, ___m_ConstraintCount_17)); }
	inline int32_t get_m_ConstraintCount_17() const { return ___m_ConstraintCount_17; }
	inline int32_t* get_address_of_m_ConstraintCount_17() { return &___m_ConstraintCount_17; }
	inline void set_m_ConstraintCount_17(int32_t value)
	{
		___m_ConstraintCount_17 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_35;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_38;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_41;

public:
	inline static int32_t get_offset_of_m_FontData_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_35)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_35() const { return ___m_FontData_35; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_35() { return &___m_FontData_35; }
	inline void set_m_FontData_35(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_36)); }
	inline String_t* get_m_Text_36() const { return ___m_Text_36; }
	inline String_t** get_address_of_m_Text_36() { return &___m_Text_36; }
	inline void set_m_Text_36(String_t* value)
	{
		___m_Text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_37() const { return ___m_TextCache_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_37() { return &___m_TextCache_37; }
	inline void set_m_TextCache_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_38)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_38() const { return ___m_TextCacheForLayout_38; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_38() { return &___m_TextCacheForLayout_38; }
	inline void set_m_TextCacheForLayout_38(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_40)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_40() const { return ___m_DisableFontTextureRebuiltCallback_40; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_40() { return &___m_DisableFontTextureRebuiltCallback_40; }
	inline void set_m_DisableFontTextureRebuiltCallback_40(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_40 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_41() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_41)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_41() const { return ___m_TempVerts_41; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_41() { return &___m_TempVerts_41; }
	inline void set_m_TempVerts_41(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_41), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_39;

public:
	inline static int32_t get_offset_of_s_DefaultText_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_39)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_39() const { return ___s_DefaultText_39; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_39() { return &___s_DefaultText_39; }
	inline void set_s_DefaultText_39(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_39), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.UI.Text[]
struct TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * m_Items[1];

public:
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m765EEDB3D86CE4EADC667B84C18E793D14144E1D_gshared (RuntimeObject * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mF2869D54987BDCEE9F39FF2F62D1FB1016744718_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m275CA0DC5737E7EF9DBEAC629F8DE280CFFA96D6_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m369DBFFEBB963F77D8DDA5D86E524581A20B0889_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method);

// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301 (bool* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void GameController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Init_m950DD1611CC62F4FD4B509BFDCC7CBCFFEA403D4 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method);
// System.Void GameController::MakeScoreGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_MakeScoreGrid_m0713642AC421EBD7A27DF5DCD4642B74DB0A1FF4 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method);
// System.Boolean InputNumController::get_IsInputNum()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool InputNumController_get_IsInputNum_mA5F35A731012BEBC0A45328C60045C121D06DACC_inline (InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * __this, const RuntimeMethod* method);
// System.Void InputNumController::set_IsInputNum(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void InputNumController_set_IsInputNum_m849EE1AB49ACD7F3357403EA9B00E5BC01AC49A4_inline (InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * __this, bool ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32[] GameController::TextsToIntArray(UnityEngine.UI.Text[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* GameController_TextsToIntArray_m172BC13F3A7E134E61E1EB9C9F45CDEAA312DAF9 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* ___texts0, int32_t ___len1, const RuntimeMethod* method);
// System.Void GameController::CheckHitBlow(System.Int32[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_CheckHitBlow_m48888F6A47F3FCB54DB05CFDF1E5778B937DF47A (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___numArray0, bool ___isPlayer1, const RuntimeMethod* method);
// System.Void GameController::ActiveMyNumberTexts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_ActiveMyNumberTexts_m4D44CB6B8F99492586E1031D26EB751077D82B98 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, bool ___acitive0, const RuntimeMethod* method);
// System.Void GameController::PlayAI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_PlayAI_m42348E105C03388DE95DA26D7514D0451F9710B3 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method);
// System.Void GameController::CheckWinOrLose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_CheckWinOrLose_mBC6ADBCE89D0F96677DFD8A663E225220CDA28AE (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32[]>::.ctor()
inline void List_1__ctor_m6744E0AD327AE2A74FE88E47F83C4EB1945594FE (List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void GameController::SetAINumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SetAINumber_mD7EC5236C9DAD9C5A532C639DC3430F93289D2A0 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m765EEDB3D86CE4EADC667B84C18E793D14144E1D_gshared)(___original0, ___parent1, method);
}
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * GameObject_GetComponentInChildren_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mCA8E2D4D3F45BEBE5BF1DFA221CBB794D1D6A4E4 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mF2869D54987BDCEE9F39FF2F62D1FB1016744718_gshared)(__this, method);
}
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA (String_t* ___s0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Int32> GameController::GetCheckNumList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * GameController_GetCheckNumList_m5983B6D559B1FBE2FE6A8542C7D68EF0E33B9337 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780 (int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
inline bool List_1_Contains_m275CA0DC5737E7EF9DBEAC629F8DE280CFFA96D6 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_Contains_m275CA0DC5737E7EF9DBEAC629F8DE280CFFA96D6_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(!0)
inline bool List_1_Remove_m369DBFFEBB963F77D8DDA5D86E524581A20B0889 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_Remove_m369DBFFEBB963F77D8DDA5D86E524581A20B0889_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Int32[]>::Contains(!0)
inline bool List_1_Contains_m7D85EC94D4E3697C814E4F4DA9C64BACBB272CBD (List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC * __this, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC *, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*, const RuntimeMethod*))List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32[]>::Add(!0)
inline void List_1_Add_mF3BD8F032D5C1FB7BC4D8E18A1358A168FE0C40D (List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC * __this, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC *, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared)(__this, ___item0, method);
}
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mFC850AC783E5EA05D6154976385DFECC251CDFB9 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void InputNumController::set_IsReadyGame(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void InputNumController_set_IsReadyGame_m414ADD06CE7D0DB1A35196A06666FA5DF5FB91F4_inline (InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void MenuController::Init(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_Init_m2B4D5E5B8FA39F98AA4ADDA7F61E180D714B49D6 (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, bool ___active0, const RuntimeMethod* method);
// System.Boolean InputNumController::get_IsReadyGame()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool InputNumController_get_IsReadyGame_m6C7417319ED12AB3CC36B6C7BA6AB0817A629B09_inline (InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___call0, const RuntimeMethod* method);
// System.Void MenuController::pushVsCpuBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_pushVsCpuBtn_m5F879A820C52E75ACF16E739635EA0E4C6A3630F (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Start_m229BE9A914ADF299ACFF1EFD5F15F27FF146D3C0 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Start_m229BE9A914ADF299ACFF1EFD5F15F27FF146D3C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Start!!!!!!: " + isSetUp);
		bool* L_0 = __this->get_address_of_isSetUp_27();
		String_t* L_1 = Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301((bool*)L_0, /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral5619BF2335B90EC96C1A84C336195B785200DFAD, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_2, /*hidden argument*/NULL);
		// if (isSetUp == false)
		bool L_3 = __this->get_isSetUp_27();
		if (L_3)
		{
			goto IL_0035;
		}
	}
	{
		// Init();
		GameController_Init_m950DD1611CC62F4FD4B509BFDCC7CBCFFEA403D4(__this, /*hidden argument*/NULL);
		// MakeScoreGrid();
		GameController_MakeScoreGrid_m0713642AC421EBD7A27DF5DCD4642B74DB0A1FF4(__this, /*hidden argument*/NULL);
		// isSetUp = true;
		__this->set_isSetUp_27((bool)1);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void GameController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Update_m7D73FA9AB337123D2EB1CB806C756731D1B9B6F3 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Update_m7D73FA9AB337123D2EB1CB806C756731D1B9B6F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (numController.IsInputNum == true)
		InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * L_0 = __this->get_numController_5();
		NullCheck(L_0);
		bool L_1 = InputNumController_get_IsInputNum_mA5F35A731012BEBC0A45328C60045C121D06DACC_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00d3;
		}
	}
	{
		// Debug.Log("Number Inputed!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral58B7DCBB4A37BC3BAF2463A99033B98291CE7ADF, /*hidden argument*/NULL);
		// gameTurn++;
		int32_t L_2 = __this->get_gameTurn_20();
		__this->set_gameTurn_20(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		// numController.IsInputNum = false;
		InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * L_3 = __this->get_numController_5();
		NullCheck(L_3);
		InputNumController_set_IsInputNum_m849EE1AB49ACD7F3357403EA9B00E5BC01AC49A4_inline(L_3, (bool)0, /*hidden argument*/NULL);
		// myScores[gameTurn].text = myInputNumber[0].text + " " + myInputNumber[1].text + " " + myInputNumber[2].text;
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_4 = __this->get_myScores_21();
		int32_t L_5 = __this->get_gameTurn_20();
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = L_8;
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_10 = ((GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_il2cpp_TypeInfo_var))->get_myInputNumber_29();
		NullCheck(L_10);
		int32_t L_11 = 0;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_12);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_13);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = L_9;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = L_14;
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_16 = ((GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_il2cpp_TypeInfo_var))->get_myInputNumber_29();
		NullCheck(L_16);
		int32_t L_17 = 1;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_18);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_19);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_19);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = L_15;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_21 = L_20;
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_22 = ((GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_il2cpp_TypeInfo_var))->get_myInputNumber_29();
		NullCheck(L_22);
		int32_t L_23 = 2;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_24);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_25);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_25);
		String_t* L_26 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_21, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_26);
		// inputNumberObj.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_27 = __this->get_inputNumberObj_6();
		NullCheck(L_27);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_27, (bool)0, /*hidden argument*/NULL);
		// scoresObj.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = __this->get_scoresObj_7();
		NullCheck(L_28);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_28, (bool)1, /*hidden argument*/NULL);
		// isSetUp = true;
		__this->set_isSetUp_27((bool)1);
		// CheckHitBlow(TextsToIntArray(myInputNumber), true);
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_29 = ((GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_il2cpp_TypeInfo_var))->get_myInputNumber_29();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_30 = GameController_TextsToIntArray_m172BC13F3A7E134E61E1EB9C9F45CDEAA312DAF9(__this, L_29, 3, /*hidden argument*/NULL);
		GameController_CheckHitBlow_m48888F6A47F3FCB54DB05CFDF1E5778B937DF47A(__this, L_30, (bool)1, /*hidden argument*/NULL);
		// ActiveMyNumberTexts(true);
		GameController_ActiveMyNumberTexts_m4D44CB6B8F99492586E1031D26EB751077D82B98(__this, (bool)1, /*hidden argument*/NULL);
		// PlayAI();
		GameController_PlayAI_m42348E105C03388DE95DA26D7514D0451F9710B3(__this, /*hidden argument*/NULL);
		// CheckWinOrLose();
		GameController_CheckWinOrLose_mBC6ADBCE89D0F96677DFD8A663E225220CDA28AE(__this, /*hidden argument*/NULL);
	}

IL_00d3:
	{
		// }
		return;
	}
}
// System.Void GameController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Init_m950DD1611CC62F4FD4B509BFDCC7CBCFFEA403D4 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Init_m950DD1611CC62F4FD4B509BFDCC7CBCFFEA403D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// myNums = new Text[3];
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_0 = (TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188*)(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188*)SZArrayNew(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_myNums_17(L_0);
		// for (var i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_002d;
	}

IL_0010:
	{
		// numTexts[i].text = myInputNumber[i].text;
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_1 = __this->get_numTexts_4();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_5 = ((GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_il2cpp_TypeInfo_var))->get_myInputNumber_29();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_8);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_9);
		// for (var i = 0; i < 3; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002d:
	{
		// for (var i = 0; i < 3; i++)
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) < ((int32_t)3)))
		{
			goto IL_0010;
		}
	}
	{
		// myNums = myInputNumber;
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_12 = ((GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_il2cpp_TypeInfo_var))->get_myInputNumber_29();
		__this->set_myNums_17(L_12);
		// rivalNums = new int[3];
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_13 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_rivalNums_18(L_13);
		// numController.IsInputNum = false;
		InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * L_14 = __this->get_numController_5();
		NullCheck(L_14);
		InputNumController_set_IsInputNum_m849EE1AB49ACD7F3357403EA9B00E5BC01AC49A4_inline(L_14, (bool)0, /*hidden argument*/NULL);
		// turnSize = 10;
		__this->set_turnSize_19(((int32_t)10));
		// gameTurn = 0;
		__this->set_gameTurn_20(0);
		// myScores = new Text[turnSize];
		int32_t L_15 = __this->get_turnSize_19();
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_16 = (TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188*)(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188*)SZArrayNew(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188_il2cpp_TypeInfo_var, (uint32_t)L_15);
		__this->set_myScores_21(L_16);
		// myHits = new Text[turnSize];
		int32_t L_17 = __this->get_turnSize_19();
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_18 = (TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188*)(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188*)SZArrayNew(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188_il2cpp_TypeInfo_var, (uint32_t)L_17);
		__this->set_myHits_22(L_18);
		// myBlows = new Text[turnSize];
		int32_t L_19 = __this->get_turnSize_19();
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_20 = (TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188*)(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188*)SZArrayNew(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188_il2cpp_TypeInfo_var, (uint32_t)L_19);
		__this->set_myBlows_23(L_20);
		// rivalScores = new Text[turnSize];
		int32_t L_21 = __this->get_turnSize_19();
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_22 = (TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188*)(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188*)SZArrayNew(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188_il2cpp_TypeInfo_var, (uint32_t)L_21);
		__this->set_rivalScores_24(L_22);
		// rivalHits = new Text[turnSize];
		int32_t L_23 = __this->get_turnSize_19();
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_24 = (TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188*)(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188*)SZArrayNew(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188_il2cpp_TypeInfo_var, (uint32_t)L_23);
		__this->set_rivalHits_25(L_24);
		// rivalBlows = new Text[turnSize];
		int32_t L_25 = __this->get_turnSize_19();
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_26 = (TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188*)(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188*)SZArrayNew(TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188_il2cpp_TypeInfo_var, (uint32_t)L_25);
		__this->set_rivalBlows_26(L_26);
		// rivalInputtedList = new List<int[]>();
		List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC * L_27 = (List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC *)il2cpp_codegen_object_new(List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC_il2cpp_TypeInfo_var);
		List_1__ctor_m6744E0AD327AE2A74FE88E47F83C4EB1945594FE(L_27, /*hidden argument*/List_1__ctor_m6744E0AD327AE2A74FE88E47F83C4EB1945594FE_RuntimeMethod_var);
		__this->set_rivalInputtedList_28(L_27);
		// resultObj.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = __this->get_resultObj_15();
		NullCheck(L_28);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_28, (bool)0, /*hidden argument*/NULL);
		// SetAINumber();
		GameController_SetAINumber_mD7EC5236C9DAD9C5A532C639DC3430F93289D2A0(__this, /*hidden argument*/NULL);
		// Debug.Log("Init! GameScene");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral6867932AA2D84CB7AC36C2F748AB646C9B0C3B43, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::MakeScoreGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_MakeScoreGrid_m0713642AC421EBD7A27DF5DCD4642B74DB0A1FF4 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_MakeScoreGrid_m0713642AC421EBD7A27DF5DCD4642B74DB0A1FF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// for (var i = 0; i < turnSize; i++)
		V_1 = 0;
		goto IL_00a4;
	}

IL_0007:
	{
		// obj = Instantiate(numObj, myScoreNumGrid.transform).GetComponentInChildren<Text>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_numObj_12();
		GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8 * L_1 = __this->get_myScoreNumGrid_8();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0(L_0, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		NullCheck(L_3);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = GameObject_GetComponentInChildren_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mCA8E2D4D3F45BEBE5BF1DFA221CBB794D1D6A4E4(L_3, /*hidden argument*/GameObject_GetComponentInChildren_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mCA8E2D4D3F45BEBE5BF1DFA221CBB794D1D6A4E4_RuntimeMethod_var);
		V_0 = L_4;
		// if (i != 0)
		int32_t L_5 = V_1;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// obj.text = "???";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_6 = V_0;
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteral4C1FDEFFAFC7C5174F48FED895B4D352DC6F4ED7);
	}

IL_0031:
	{
		// myScores[i] = obj;
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_7 = __this->get_myScores_21();
		int32_t L_8 = V_1;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_9 = V_0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 *)L_9);
		// obj = Instantiate(hitObj, myScoreHitBlowGrid.transform).GetComponentInChildren<Text>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = __this->get_hitObj_13();
		GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8 * L_11 = __this->get_myScoreHitBlowGrid_9();
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0(L_10, L_12, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		NullCheck(L_13);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_14 = GameObject_GetComponentInChildren_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mCA8E2D4D3F45BEBE5BF1DFA221CBB794D1D6A4E4(L_13, /*hidden argument*/GameObject_GetComponentInChildren_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mCA8E2D4D3F45BEBE5BF1DFA221CBB794D1D6A4E4_RuntimeMethod_var);
		V_0 = L_14;
		// if (i != 0)
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0064;
		}
	}
	{
		// obj.text = "";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_16 = V_0;
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_0064:
	{
		// myHits[i] = obj;
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_17 = __this->get_myHits_22();
		int32_t L_18 = V_1;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_19 = V_0;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 *)L_19);
		// obj = Instantiate(blowObj, myScoreHitBlowGrid.transform).GetComponentInChildren<Text>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = __this->get_blowObj_14();
		GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8 * L_21 = __this->get_myScoreHitBlowGrid_9();
		NullCheck(L_21);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0(L_20, L_22, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		NullCheck(L_23);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_24 = GameObject_GetComponentInChildren_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mCA8E2D4D3F45BEBE5BF1DFA221CBB794D1D6A4E4(L_23, /*hidden argument*/GameObject_GetComponentInChildren_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mCA8E2D4D3F45BEBE5BF1DFA221CBB794D1D6A4E4_RuntimeMethod_var);
		V_0 = L_24;
		// if (i != 0)
		int32_t L_25 = V_1;
		if (!L_25)
		{
			goto IL_0097;
		}
	}
	{
		// obj.text = "";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_26 = V_0;
		NullCheck(L_26);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_0097:
	{
		// myBlows[i] = obj;
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_27 = __this->get_myBlows_23();
		int32_t L_28 = V_1;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_29 = V_0;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_29);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 *)L_29);
		// for (var i = 0; i < turnSize; i++)
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00a4:
	{
		// for (var i = 0; i < turnSize; i++)
		int32_t L_31 = V_1;
		int32_t L_32 = __this->get_turnSize_19();
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0007;
		}
	}
	{
		// for (var i = 0; i < turnSize; i++)
		V_2 = 0;
		goto IL_0161;
	}

IL_00b7:
	{
		// obj = Instantiate(numObj, rivalScoreNumGrid.transform).GetComponentInChildren<Text>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_33 = __this->get_numObj_12();
		GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8 * L_34 = __this->get_rivalScoreNumGrid_10();
		NullCheck(L_34);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_36 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0(L_33, L_35, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		NullCheck(L_36);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_37 = GameObject_GetComponentInChildren_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mCA8E2D4D3F45BEBE5BF1DFA221CBB794D1D6A4E4(L_36, /*hidden argument*/GameObject_GetComponentInChildren_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mCA8E2D4D3F45BEBE5BF1DFA221CBB794D1D6A4E4_RuntimeMethod_var);
		V_0 = L_37;
		// if (i != 0)
		int32_t L_38 = V_2;
		if (!L_38)
		{
			goto IL_00e3;
		}
	}
	{
		// obj.text = "???";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_39 = V_0;
		NullCheck(L_39);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_39, _stringLiteral4C1FDEFFAFC7C5174F48FED895B4D352DC6F4ED7);
		goto IL_00ee;
	}

IL_00e3:
	{
		// obj.text = "Rival Score";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_40 = V_0;
		NullCheck(L_40);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_40, _stringLiteral66BCA5A243735E66B85A3C238149DF70CC3DFE15);
	}

IL_00ee:
	{
		// rivalScores[i] = obj;
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_41 = __this->get_rivalScores_24();
		int32_t L_42 = V_2;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_43 = V_0;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_43);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 *)L_43);
		// obj = Instantiate(hitObj, rivalScoreHitBlowGrid.transform).GetComponentInChildren<Text>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = __this->get_hitObj_13();
		GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8 * L_45 = __this->get_rivalScoreHitBlowGrid_11();
		NullCheck(L_45);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_46 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_45, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_47 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0(L_44, L_46, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		NullCheck(L_47);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_48 = GameObject_GetComponentInChildren_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mCA8E2D4D3F45BEBE5BF1DFA221CBB794D1D6A4E4(L_47, /*hidden argument*/GameObject_GetComponentInChildren_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mCA8E2D4D3F45BEBE5BF1DFA221CBB794D1D6A4E4_RuntimeMethod_var);
		V_0 = L_48;
		// if (i != 0)
		int32_t L_49 = V_2;
		if (!L_49)
		{
			goto IL_0121;
		}
	}
	{
		// obj.text = "";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_50 = V_0;
		NullCheck(L_50);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_50, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_0121:
	{
		// rivalHits[i] = obj;
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_51 = __this->get_rivalHits_25();
		int32_t L_52 = V_2;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_53 = V_0;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_53);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 *)L_53);
		// obj = Instantiate(blowObj, rivalScoreHitBlowGrid.transform).GetComponentInChildren<Text>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_54 = __this->get_blowObj_14();
		GridLayoutGroup_t1C70294BD2567FD584672222A8BFD5A0DF1CA2A8 * L_55 = __this->get_rivalScoreHitBlowGrid_11();
		NullCheck(L_55);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_56 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_55, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_57 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0(L_54, L_56, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		NullCheck(L_57);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_58 = GameObject_GetComponentInChildren_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mCA8E2D4D3F45BEBE5BF1DFA221CBB794D1D6A4E4(L_57, /*hidden argument*/GameObject_GetComponentInChildren_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mCA8E2D4D3F45BEBE5BF1DFA221CBB794D1D6A4E4_RuntimeMethod_var);
		V_0 = L_58;
		// if (i != 0)
		int32_t L_59 = V_2;
		if (!L_59)
		{
			goto IL_0154;
		}
	}
	{
		// obj.text = "";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_60 = V_0;
		NullCheck(L_60);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_60, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_0154:
	{
		// rivalBlows[i] = obj;
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_61 = __this->get_rivalBlows_26();
		int32_t L_62 = V_2;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_63 = V_0;
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_63);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 *)L_63);
		// for (var i = 0; i < turnSize; i++)
		int32_t L_64 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_0161:
	{
		// for (var i = 0; i < turnSize; i++)
		int32_t L_65 = V_2;
		int32_t L_66 = __this->get_turnSize_19();
		if ((((int32_t)L_65) < ((int32_t)L_66)))
		{
			goto IL_00b7;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameController::PushInputNumBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_PushInputNumBtn_m4167104856390370BEC6831AABC5735320735009 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	{
		// inputNumberObj.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_inputNumberObj_6();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)1, /*hidden argument*/NULL);
		// scoresObj.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_scoresObj_7();
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)0, /*hidden argument*/NULL);
		// ActiveMyNumberTexts(false);
		GameController_ActiveMyNumberTexts_m4D44CB6B8F99492586E1031D26EB751077D82B98(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::ActiveMyNumberTexts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_ActiveMyNumberTexts_m4D44CB6B8F99492586E1031D26EB751077D82B98 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, bool ___acitive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_ActiveMyNumberTexts_m4D44CB6B8F99492586E1031D26EB751077D82B98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (acitive)
		bool L_0 = ___acitive0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// for (var i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_0025;
	}

IL_0007:
	{
		// numTexts[i].text = myNums[i].text;
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_1 = __this->get_numTexts_4();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_5 = __this->get_myNums_17();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_8);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_9);
		// for (var i = 0; i < 3; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0025:
	{
		// for (var i = 0; i < 3; i++)
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) < ((int32_t)3)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}

IL_002a:
	{
		// for (var i = 0; i < 3; i++)
		V_1 = 0;
		goto IL_0044;
	}

IL_002e:
	{
		// numTexts[i].text = "-";
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_12 = __this->get_numTexts_4();
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, _stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9);
		// for (var i = 0; i < 3; i++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0044:
	{
		// for (var i = 0; i < 3; i++)
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) < ((int32_t)3)))
		{
			goto IL_002e;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32[] GameController::TextsToIntArray(UnityEngine.UI.Text[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* GameController_TextsToIntArray_m172BC13F3A7E134E61E1EB9C9F45CDEAA312DAF9 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* ___texts0, int32_t ___len1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_TextsToIntArray_m172BC13F3A7E134E61E1EB9C9F45CDEAA312DAF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var array = new int[len];
		int32_t L_0 = ___len1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// for (var i = 0; i < len; i++)
		V_1 = 0;
		goto IL_001f;
	}

IL_000b:
	{
		// array[i] = int.Parse(texts[i].text);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = V_0;
		int32_t L_3 = V_1;
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_4 = ___texts0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_7);
		int32_t L_9 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_9);
		// for (var i = 0; i < len; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_001f:
	{
		// for (var i = 0; i < len; i++)
		int32_t L_11 = V_1;
		int32_t L_12 = ___len1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000b;
		}
	}
	{
		// return array;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_13 = V_0;
		return L_13;
	}
}
// System.Void GameController::CheckHitBlow(System.Int32[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_CheckHitBlow_m48888F6A47F3FCB54DB05CFDF1E5778B937DF47A (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___numArray0, bool ___isPlayer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_CheckHitBlow_m48888F6A47F3FCB54DB05CFDF1E5778B937DF47A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// var hitCnt = 0;
		V_0 = 0;
		// var blowCnt = 0;
		V_1 = 0;
		// if (isPlayer)
		bool L_0 = ___isPlayer1;
		if (!L_0)
		{
			goto IL_00b4;
		}
	}
	{
		// Debug.Log("playerCheck: " + numArray[0] + numArray[1] + numArray[2]);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral33D7C9F201F5CD84F3B4F0E32AFCEA1F7586AC53);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral33D7C9F201F5CD84F3B4F0E32AFCEA1F7586AC53);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_2;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = ___numArray0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		int32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_8);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_3;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_10 = ___numArray0;
		NullCheck(L_10);
		int32_t L_11 = 1;
		int32_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_14);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_14);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_9;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_16 = ___numArray0;
		NullCheck(L_16);
		int32_t L_17 = 2;
		int32_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_20);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_20);
		String_t* L_21 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_21, /*hidden argument*/NULL);
		// for (var i = 0; i < 3; i++)
		V_2 = 0;
		goto IL_007d;
	}

IL_0047:
	{
		// if (numArray[i] == rivalNums[i])
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_22 = ___numArray0;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_26 = __this->get_rivalNums_18();
		int32_t L_27 = V_2;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if ((!(((uint32_t)L_25) == ((uint32_t)L_29))))
		{
			goto IL_0058;
		}
	}
	{
		// hitCnt++;
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_0058:
	{
		// for (var j = 0; j < 3; j++)
		V_3 = 0;
		goto IL_0075;
	}

IL_005c:
	{
		// if (i != j && numArray[i] == rivalNums[j])
		int32_t L_31 = V_2;
		int32_t L_32 = V_3;
		if ((((int32_t)L_31) == ((int32_t)L_32)))
		{
			goto IL_0071;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_33 = ___numArray0;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_37 = __this->get_rivalNums_18();
		int32_t L_38 = V_3;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		int32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_40))))
		{
			goto IL_0071;
		}
	}
	{
		// blowCnt++;
		int32_t L_41 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_0071:
	{
		// for (var j = 0; j < 3; j++)
		int32_t L_42 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_0075:
	{
		// for (var j = 0; j < 3; j++)
		int32_t L_43 = V_3;
		if ((((int32_t)L_43) < ((int32_t)3)))
		{
			goto IL_005c;
		}
	}
	{
		// for (var i = 0; i < 3; i++)
		int32_t L_44 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_007d:
	{
		// for (var i = 0; i < 3; i++)
		int32_t L_45 = V_2;
		if ((((int32_t)L_45) < ((int32_t)3)))
		{
			goto IL_0047;
		}
	}
	{
		// myHits[gameTurn].text = hitCnt.ToString();
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_46 = __this->get_myHits_22();
		int32_t L_47 = __this->get_gameTurn_20();
		NullCheck(L_46);
		int32_t L_48 = L_47;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		String_t* L_50 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_49);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_49, L_50);
		// myBlows[gameTurn].text = blowCnt.ToString();
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_51 = __this->get_myBlows_23();
		int32_t L_52 = __this->get_gameTurn_20();
		NullCheck(L_51);
		int32_t L_53 = L_52;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		String_t* L_55 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_54);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_54, L_55);
		// }
		return;
	}

IL_00b4:
	{
		// Debug.Log("AICheck: " + numArray[0] + numArray[1] + numArray[2]);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_56 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_57 = L_56;
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, _stringLiteral7EC7381DF7156ED536F20E154AD81EF2651DAFF7);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral7EC7381DF7156ED536F20E154AD81EF2651DAFF7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_58 = L_57;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_59 = ___numArray0;
		NullCheck(L_59);
		int32_t L_60 = 0;
		int32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		int32_t L_62 = L_61;
		RuntimeObject * L_63 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_62);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_63);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_63);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_64 = L_58;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_65 = ___numArray0;
		NullCheck(L_65);
		int32_t L_66 = 1;
		int32_t L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		int32_t L_68 = L_67;
		RuntimeObject * L_69 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_68);
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_69);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_69);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_70 = L_64;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_71 = ___numArray0;
		NullCheck(L_71);
		int32_t L_72 = 2;
		int32_t L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		int32_t L_74 = L_73;
		RuntimeObject * L_75 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_74);
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_75);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_75);
		String_t* L_76 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_70, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_76, /*hidden argument*/NULL);
		// var playerNums = TextsToIntArray(myNums);
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_77 = __this->get_myNums_17();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_78 = GameController_TextsToIntArray_m172BC13F3A7E134E61E1EB9C9F45CDEAA312DAF9(__this, L_77, 3, /*hidden argument*/NULL);
		V_4 = L_78;
		// for (var i = 0; i < 3; i++)
		V_5 = 0;
		goto IL_013b;
	}

IL_0101:
	{
		// if (numArray[i] == playerNums[i])
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_79 = ___numArray0;
		int32_t L_80 = V_5;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		int32_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_83 = V_4;
		int32_t L_84 = V_5;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		int32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		if ((!(((uint32_t)L_82) == ((uint32_t)L_86))))
		{
			goto IL_0110;
		}
	}
	{
		// hitCnt++;
		int32_t L_87 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1));
	}

IL_0110:
	{
		// for (var j = 0; j < 3; j++)
		V_6 = 0;
		goto IL_0130;
	}

IL_0115:
	{
		// if (i != j && numArray[i] == playerNums[j])
		int32_t L_88 = V_5;
		int32_t L_89 = V_6;
		if ((((int32_t)L_88) == ((int32_t)L_89)))
		{
			goto IL_012a;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_90 = ___numArray0;
		int32_t L_91 = V_5;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		int32_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_94 = V_4;
		int32_t L_95 = V_6;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		int32_t L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		if ((!(((uint32_t)L_93) == ((uint32_t)L_97))))
		{
			goto IL_012a;
		}
	}
	{
		// blowCnt++;
		int32_t L_98 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
	}

IL_012a:
	{
		// for (var j = 0; j < 3; j++)
		int32_t L_99 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)1));
	}

IL_0130:
	{
		// for (var j = 0; j < 3; j++)
		int32_t L_100 = V_6;
		if ((((int32_t)L_100) < ((int32_t)3)))
		{
			goto IL_0115;
		}
	}
	{
		// for (var i = 0; i < 3; i++)
		int32_t L_101 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1));
	}

IL_013b:
	{
		// for (var i = 0; i < 3; i++)
		int32_t L_102 = V_5;
		if ((((int32_t)L_102) < ((int32_t)3)))
		{
			goto IL_0101;
		}
	}
	{
		// rivalHits[gameTurn].text = hitCnt.ToString();
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_103 = __this->get_rivalHits_25();
		int32_t L_104 = __this->get_gameTurn_20();
		NullCheck(L_103);
		int32_t L_105 = L_104;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		String_t* L_107 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_106);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_106, L_107);
		// rivalBlows[gameTurn].text = blowCnt.ToString();
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_108 = __this->get_rivalBlows_26();
		int32_t L_109 = __this->get_gameTurn_20();
		NullCheck(L_108);
		int32_t L_110 = L_109;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		String_t* L_112 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_111);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_111, L_112);
		// }
		return;
	}
}
// System.Void GameController::SetAINumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SetAINumber_mD7EC5236C9DAD9C5A532C639DC3430F93289D2A0 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_SetAINumber_mD7EC5236C9DAD9C5A532C639DC3430F93289D2A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// var checkList = GetCheckNumList();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = GameController_GetCheckNumList_m5983B6D559B1FBE2FE6A8542C7D68EF0E33B9337(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// for (var i = 0; i < 3; i++)
		V_1 = 0;
		goto IL_003d;
	}

IL_000b:
	{
		// var r = Random.Range(0, 10);
		int32_t L_1 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, ((int32_t)10), /*hidden argument*/NULL);
		V_2 = L_1;
		goto IL_001f;
	}

IL_0016:
	{
		// r = Random.Range(0, 10);
		int32_t L_2 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, ((int32_t)10), /*hidden argument*/NULL);
		V_2 = L_2;
	}

IL_001f:
	{
		// while (!checkList.Contains(r))
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_3 = V_0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		bool L_5 = List_1_Contains_m275CA0DC5737E7EF9DBEAC629F8DE280CFFA96D6(L_3, L_4, /*hidden argument*/List_1_Contains_m275CA0DC5737E7EF9DBEAC629F8DE280CFFA96D6_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0016;
		}
	}
	{
		// checkList.Remove(r);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_6 = V_0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		List_1_Remove_m369DBFFEBB963F77D8DDA5D86E524581A20B0889(L_6, L_7, /*hidden argument*/List_1_Remove_m369DBFFEBB963F77D8DDA5D86E524581A20B0889_RuntimeMethod_var);
		// rivalNums[i] = r;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_8 = __this->get_rivalNums_18();
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int32_t)L_10);
		// for (var i = 0; i < 3; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003d:
	{
		// for (var i = 0; i < 3; i++)
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) < ((int32_t)3)))
		{
			goto IL_000b;
		}
	}
	{
		// Debug.Log("Set AI Number: " + rivalNums[0] + rivalNums[1] + rivalNums[2]);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral10F203C0EF2710177637945CCB3060D89475D6D0);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral10F203C0EF2710177637945CCB3060D89475D6D0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_14;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_16 = __this->get_rivalNums_18();
		NullCheck(L_16);
		int32_t L_17 = 0;
		int32_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_20);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_20);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = L_15;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_22 = __this->get_rivalNums_18();
		NullCheck(L_22);
		int32_t L_23 = 1;
		int32_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		int32_t L_25 = L_24;
		RuntimeObject * L_26 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_26);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_26);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = L_21;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_28 = __this->get_rivalNums_18();
		NullCheck(L_28);
		int32_t L_29 = 2;
		int32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_32);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_32);
		String_t* L_33 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_33, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::PlayAI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_PlayAI_m42348E105C03388DE95DA26D7514D0451F9710B3 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_PlayAI_m42348E105C03388DE95DA26D7514D0451F9710B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_0 = NULL;
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;

IL_0000:
	{
		// var checkList = GetCheckNumList();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = GameController_GetCheckNumList_m5983B6D559B1FBE2FE6A8542C7D68EF0E33B9337(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		// inputNumArray = new int[3];
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		V_0 = L_1;
		// for (var i = 0; i < 3; i++)
		V_2 = 0;
		goto IL_003f;
	}

IL_0012:
	{
		// var r = Random.Range(0, 10);
		int32_t L_2 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, ((int32_t)10), /*hidden argument*/NULL);
		V_3 = L_2;
		goto IL_0026;
	}

IL_001d:
	{
		// r = Random.Range(0, 10);
		int32_t L_3 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, ((int32_t)10), /*hidden argument*/NULL);
		V_3 = L_3;
	}

IL_0026:
	{
		// while (!checkList.Contains(r))
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_4 = V_1;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		bool L_6 = List_1_Contains_m275CA0DC5737E7EF9DBEAC629F8DE280CFFA96D6(L_4, L_5, /*hidden argument*/List_1_Contains_m275CA0DC5737E7EF9DBEAC629F8DE280CFFA96D6_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_001d;
		}
	}
	{
		// checkList.Remove(r);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_7 = V_1;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		List_1_Remove_m369DBFFEBB963F77D8DDA5D86E524581A20B0889(L_7, L_8, /*hidden argument*/List_1_Remove_m369DBFFEBB963F77D8DDA5D86E524581A20B0889_RuntimeMethod_var);
		// inputNumArray[i] = r;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_9 = V_0;
		int32_t L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (int32_t)L_11);
		// for (var i = 0; i < 3; i++)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_003f:
	{
		// for (var i = 0; i < 3; i++)
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)3)))
		{
			goto IL_0012;
		}
	}
	{
		// } while (rivalInputtedList.Contains(inputNumArray));
		List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC * L_14 = __this->get_rivalInputtedList_28();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_15 = V_0;
		NullCheck(L_14);
		bool L_16 = List_1_Contains_m7D85EC94D4E3697C814E4F4DA9C64BACBB272CBD(L_14, L_15, /*hidden argument*/List_1_Contains_m7D85EC94D4E3697C814E4F4DA9C64BACBB272CBD_RuntimeMethod_var);
		if (L_16)
		{
			goto IL_0000;
		}
	}
	{
		// rivalInputtedList.Add(inputNumArray);
		List_1_t1E44BF94D40CDBF9820E7ABAB659E6B9FEA82EDC * L_17 = __this->get_rivalInputtedList_28();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_18 = V_0;
		NullCheck(L_17);
		List_1_Add_mF3BD8F032D5C1FB7BC4D8E18A1358A168FE0C40D(L_17, L_18, /*hidden argument*/List_1_Add_mF3BD8F032D5C1FB7BC4D8E18A1358A168FE0C40D_RuntimeMethod_var);
		// rivalScores[gameTurn].text
		//     = string.Format("{0} {1} {2}", inputNumArray[0], inputNumArray[1], inputNumArray[2]);
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_19 = __this->get_rivalScores_24();
		int32_t L_20 = __this->get_gameTurn_20();
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24 = 0;
		int32_t L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_26);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = 1;
		int32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_31);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34 = 2;
		int32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		int32_t L_36 = L_35;
		RuntimeObject * L_37 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_36);
		String_t* L_38 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteralBE69161104C06C43A8581EC0A5ACF835BB5DFA6E, L_27, L_32, L_37, /*hidden argument*/NULL);
		NullCheck(L_22);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, L_38);
		// CheckHitBlow(inputNumArray, false);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_39 = V_0;
		GameController_CheckHitBlow_m48888F6A47F3FCB54DB05CFDF1E5778B937DF47A(__this, L_39, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.Int32> GameController::GetCheckNumList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * GameController_GetCheckNumList_m5983B6D559B1FBE2FE6A8542C7D68EF0E33B9337 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_GetCheckNumList_m5983B6D559B1FBE2FE6A8542C7D68EF0E33B9337_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var list = new List<int>();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_0, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		V_0 = L_0;
		// for (var i = 0; i < 10; i++)
		V_1 = 0;
		goto IL_0015;
	}

IL_000a:
	{
		// list.Add(i);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_1, L_2, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// for (var i = 0; i < 10; i++)
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0015:
	{
		// for (var i = 0; i < 10; i++)
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)10))))
		{
			goto IL_000a;
		}
	}
	{
		// return list;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_5 = V_0;
		return L_5;
	}
}
// System.Void GameController::CheckWinOrLose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_CheckWinOrLose_mBC6ADBCE89D0F96677DFD8A663E225220CDA28AE (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_CheckWinOrLose_mBC6ADBCE89D0F96677DFD8A663E225220CDA28AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// Debug.Log("gameTurn: " + gameTurn);
		int32_t L_0 = __this->get_gameTurn_20();
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralC991E3D61C93CB2CB59B802FAD78E6D0BEDC79CB, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_3, /*hidden argument*/NULL);
		// var myHit = int.Parse(myHits[gameTurn].text);
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_4 = __this->get_myHits_22();
		int32_t L_5 = __this->get_gameTurn_20();
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_7);
		int32_t L_9 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// var rivalHit = int.Parse(rivalHits[gameTurn].text);
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_10 = __this->get_rivalHits_25();
		int32_t L_11 = __this->get_gameTurn_20();
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_13);
		int32_t L_15 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		// if (myHit == 3 || rivalHit == 3)
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)3)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_00c0;
		}
	}

IL_0052:
	{
		// resultObj.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = __this->get_resultObj_15();
		NullCheck(L_18);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_18, (bool)1, /*hidden argument*/NULL);
		// if (myHit == 3 && rivalHit == 3)
		int32_t L_19 = V_0;
		if ((!(((uint32_t)L_19) == ((uint32_t)3))))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_20 = V_1;
		if ((!(((uint32_t)L_20) == ((uint32_t)3))))
		{
			goto IL_0082;
		}
	}
	{
		// Debug.Log("Draw");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralBFA50C7A3838FC883B8F4FD701B280E77A3952EA, /*hidden argument*/NULL);
		// resultText.text = "DRAW";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_21 = __this->get_resultText_16();
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, _stringLiteral7AAB1BD826EFE98BA8BA11366CC73F532746F1F6);
		// }
		goto IL_00c0;
	}

IL_0082:
	{
		// else if (myHit == 3)
		int32_t L_22 = V_0;
		if ((!(((uint32_t)L_22) == ((uint32_t)3))))
		{
			goto IL_00a2;
		}
	}
	{
		// Debug.Log("player win");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral58AC090C24B71EDF1210F305FE31E5FC7AA90FAD, /*hidden argument*/NULL);
		// resultText.text = "WIN";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_23 = __this->get_resultText_16();
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, _stringLiteral662FAE5F621ABDAD32655F00103D88D3FC45F2BB);
		// }
		goto IL_00c0;
	}

IL_00a2:
	{
		// else if (rivalHit == 3)
		int32_t L_24 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)3))))
		{
			goto IL_00c0;
		}
	}
	{
		// Debug.Log("rival win");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral515BAE830DA2CA37394E7BEF179BD898B2EB920F, /*hidden argument*/NULL);
		// resultText.text = "LOSE";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_25 = __this->get_resultText_16();
		NullCheck(L_25);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, _stringLiteral8DF6BE46FC07D973C70580C412430566B4D624A8);
	}

IL_00c0:
	{
		// if (gameTurn == turnSize-1)
		int32_t L_26 = __this->get_gameTurn_20();
		int32_t L_27 = __this->get_turnSize_19();
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1))))))
		{
			goto IL_00f6;
		}
	}
	{
		// resultObj.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = __this->get_resultObj_15();
		NullCheck(L_28);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_28, (bool)1, /*hidden argument*/NULL);
		// Debug.Log("Turn over");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral0916919DD333A1D8DD5832B909F9B98FF5A5D5D9, /*hidden argument*/NULL);
		// resultText.text = "DRAW";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_29 = __this->get_resultText_16();
		NullCheck(L_29);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, _stringLiteral7AAB1BD826EFE98BA8BA11366CC73F532746F1F6);
	}

IL_00f6:
	{
		// }
		return;
	}
}
// System.Void GameController::BackToTitleBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_BackToTitleBtn_m6E83C90D65D7F3A874565885389DDC5A9BB5CE1B (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_BackToTitleBtn_m6E83C90D65D7F3A874565885389DDC5A9BB5CE1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Init();
		GameController_Init_m950DD1611CC62F4FD4B509BFDCC7CBCFFEA403D4(__this, /*hidden argument*/NULL);
		// SceneManager.LoadScene("MenuScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mFC850AC783E5EA05D6154976385DFECC251CDFB9(_stringLiteral79363F7261D1C21983552D3182E51FAE709B9027, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController__ctor_m839A9CFB9635B009C1DA139BEAD0E38467E57464 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean InputNumController::get_IsInputNum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputNumController_get_IsInputNum_mA5F35A731012BEBC0A45328C60045C121D06DACC (InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * __this, const RuntimeMethod* method)
{
	{
		// public bool IsInputNum { get; set; } = false;
		bool L_0 = __this->get_U3CIsInputNumU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void InputNumController::set_IsInputNum(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputNumController_set_IsInputNum_m849EE1AB49ACD7F3357403EA9B00E5BC01AC49A4 (InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsInputNum { get; set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsInputNumU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Boolean InputNumController::get_IsReadyGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputNumController_get_IsReadyGame_m6C7417319ED12AB3CC36B6C7BA6AB0817A629B09 (InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * __this, const RuntimeMethod* method)
{
	{
		// public bool IsReadyGame { get; private set; } = false;
		bool L_0 = __this->get_U3CIsReadyGameU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void InputNumController::set_IsReadyGame(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputNumController_set_IsReadyGame_m414ADD06CE7D0DB1A35196A06666FA5DF5FB91F4 (InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsReadyGame { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsReadyGameU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void InputNumController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputNumController_Start_mDE43FBFFBAF8EC2494218CE223DBEA89F136B4F3 (InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputNumController_Start_mDE43FBFFBAF8EC2494218CE223DBEA89F136B4F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("InputNumController Start!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral259C2C46E100F5801C9F44B9B5A5BBE9F0C49557, /*hidden argument*/NULL);
		// numCnt = 0;
		__this->set_numCnt_5(0);
		// }
		return;
	}
}
// System.Void InputNumController::pushDeleteBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputNumController_pushDeleteBtn_mFF0BBAA2D78AF8D2AAB9F592F7C2AC1461DCC2F9 (InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputNumController_pushDeleteBtn_mFF0BBAA2D78AF8D2AAB9F592F7C2AC1461DCC2F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (numCnt == 0) return;
		int32_t L_0 = __this->get_numCnt_5();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (numCnt == 0) return;
		return;
	}

IL_0009:
	{
		// numCnt--;
		int32_t L_1 = __this->get_numCnt_5();
		__this->set_numCnt_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)));
		// numTexts[numCnt].text = "-";
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_2 = __this->get_numTexts_4();
		int32_t L_3 = __this->get_numCnt_5();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9);
		// Debug.Log("delte num");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral4C55231C2BF3629CA3EFC827E8CD1653888101E4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InputNumController::pushCheckBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputNumController_pushCheckBtn_m99D865BB47C58423F2C357D595BF41FF8B039CF7 (InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputNumController_pushCheckBtn_m99D865BB47C58423F2C357D595BF41FF8B039CF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (numCnt != 3) return;
		int32_t L_0 = __this->get_numCnt_5();
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_000a;
		}
	}
	{
		// if (numCnt != 3) return;
		return;
	}

IL_000a:
	{
		// GameController.myInputNumber = numTexts;
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_1 = __this->get_numTexts_4();
		((GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_il2cpp_TypeInfo_var))->set_myInputNumber_29(L_1);
		// IsInputNum = true;
		InputNumController_set_IsInputNum_m849EE1AB49ACD7F3357403EA9B00E5BC01AC49A4_inline(__this, (bool)1, /*hidden argument*/NULL);
		// IsReadyGame = true;
		InputNumController_set_IsReadyGame_m414ADD06CE7D0DB1A35196A06666FA5DF5FB91F4_inline(__this, (bool)1, /*hidden argument*/NULL);
		// numCnt = 0;
		__this->set_numCnt_5(0);
		// Debug.Log("push Check!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralECA60083F98AFD354B9E61F67A7B760B4D70F895, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InputNumController::pushNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputNumController_pushNumber_m575E11EAC945C00ECD40FFB03BE114A1081D516E (InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * __this, int32_t ___num0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputNumController_pushNumber_m575E11EAC945C00ECD40FFB03BE114A1081D516E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var s = num.ToString();
		String_t* L_0 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&___num0), /*hidden argument*/NULL);
		V_0 = L_0;
		// if (numCnt == 3)
		int32_t L_1 = __this->get_numCnt_5();
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_002c;
		}
	}
	{
		// Debug.Log("numCnt is 3: " + numCnt);
		int32_t L_2 = __this->get_numCnt_5();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralB7C81539D6F8C9AF4A093386F5FE733E277F4DF9, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_5, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_002c:
	{
		// if (numCnt != 0)
		int32_t L_6 = __this->get_numCnt_5();
		if (!L_6)
		{
			goto IL_0072;
		}
	}
	{
		// for (var i = numCnt-1; i >= 0; i--)
		int32_t L_7 = __this->get_numCnt_5();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
		goto IL_006e;
	}

IL_003f:
	{
		// var n = int.Parse(numTexts[i].text);
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_8 = __this->get_numTexts_4();
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_11);
		int32_t L_13 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_12, /*hidden argument*/NULL);
		// if (n == num)
		int32_t L_14 = ___num0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_006a;
		}
	}
	{
		// Debug.Log(num + ": Contains Array");
		int32_t L_15 = ___num0;
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(L_17, _stringLiteral6D9490B3C03678F86EE4192BDCC37143951C2852, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_18, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_006a:
	{
		// for (var i = numCnt-1; i >= 0; i--)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
	}

IL_006e:
	{
		// for (var i = numCnt-1; i >= 0; i--)
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}

IL_0072:
	{
		// numTexts[numCnt].text = s;
		TextU5BU5D_t8855BE16E29F8F98FBC7FDDADA9705F9259A1188* L_21 = __this->get_numTexts_4();
		int32_t L_22 = __this->get_numCnt_5();
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		String_t* L_25 = V_0;
		NullCheck(L_24);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_25);
		// numCnt++;
		int32_t L_26 = __this->get_numCnt_5();
		__this->set_numCnt_5(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1)));
		// Debug.Log("push num: " + num);
		int32_t L_27 = ___num0;
		int32_t L_28 = L_27;
		RuntimeObject * L_29 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_28);
		String_t* L_30 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral6A958F3B2E228443C9098B8D679B4275E68DFEF9, L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_30, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InputNumController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputNumController__ctor_m8908636DE48CE620B8C3F69DF4B4FFEEFAE37E36 (InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MenuController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_Start_m0377779014F00A3FBE313C3BE89091CBDCBF69B5 (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method)
{
	{
		// Init();
		MenuController_Init_m2B4D5E5B8FA39F98AA4ADDA7F61E180D714B49D6(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_Update_m5C9652645E5A96F9983D8F4E4936E951DEC509F8 (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuController_Update_m5C9652645E5A96F9983D8F4E4936E951DEC509F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (numController.IsReadyGame)
		InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * L_0 = __this->get_numController_6();
		NullCheck(L_0);
		bool L_1 = InputNumController_get_IsReadyGame_m6C7417319ED12AB3CC36B6C7BA6AB0817A629B09_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// Debug.Log("transit Scene To GameScene");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralB2FB4F621A7A2E232A5D775DD3F4D4C63C4EC624, /*hidden argument*/NULL);
		// SceneManager.LoadScene("GameScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mFC850AC783E5EA05D6154976385DFECC251CDFB9(_stringLiteral29F5EC735DE6FF16D62734828C85987CAC2D6441, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void MenuController::Init(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_Init_m2B4D5E5B8FA39F98AA4ADDA7F61E180D714B49D6 (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, bool ___active0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuController_Init_m2B4D5E5B8FA39F98AA4ADDA7F61E180D714B49D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// titleTextObj.SetActive(active);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_titleTextObj_4();
		bool L_1 = ___active0;
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, L_1, /*hidden argument*/NULL);
		// vsCpuButton.gameObject.SetActive(active);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_2 = __this->get_vsCpuButton_5();
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		bool L_4 = ___active0;
		NullCheck(L_3);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_3, L_4, /*hidden argument*/NULL);
		// vsCpuButton.onClick.AddListener(() => pushVsCpuBtn());
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_5 = __this->get_vsCpuButton_5();
		NullCheck(L_5);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_6 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_5, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_7 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_7, __this, (intptr_t)((intptr_t)MenuController_U3CInitU3Eb__5_0_mA2D49E59870CE7A95674EB1D3519AF16909A8CF1_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuController::pushVsCpuBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_pushVsCpuBtn_m5F879A820C52E75ACF16E739635EA0E4C6A3630F (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method)
{
	{
		// Init(false);
		MenuController_Init_m2B4D5E5B8FA39F98AA4ADDA7F61E180D714B49D6(__this, (bool)0, /*hidden argument*/NULL);
		// numController.gameObject.SetActive(true);
		InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * L_0 = __this->get_numController_6();
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController__ctor_m0A49072B3618F238E83C251C33488007F711316E (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuController::<Init>b__5_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_U3CInitU3Eb__5_0_mA2D49E59870CE7A95674EB1D3519AF16909A8CF1 (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method)
{
	{
		// vsCpuButton.onClick.AddListener(() => pushVsCpuBtn());
		MenuController_pushVsCpuBtn_m5F879A820C52E75ACF16E739635EA0E4C6A3630F(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool InputNumController_get_IsInputNum_mA5F35A731012BEBC0A45328C60045C121D06DACC_inline (InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * __this, const RuntimeMethod* method)
{
	{
		// public bool IsInputNum { get; set; } = false;
		bool L_0 = __this->get_U3CIsInputNumU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void InputNumController_set_IsInputNum_m849EE1AB49ACD7F3357403EA9B00E5BC01AC49A4_inline (InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsInputNum { get; set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsInputNumU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void InputNumController_set_IsReadyGame_m414ADD06CE7D0DB1A35196A06666FA5DF5FB91F4_inline (InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsReadyGame { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsReadyGameU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool InputNumController_get_IsReadyGame_m6C7417319ED12AB3CC36B6C7BA6AB0817A629B09_inline (InputNumController_tD192C2D5E9E83C6760535575B7858D53F2BCBCEE * __this, const RuntimeMethod* method)
{
	{
		// public bool IsReadyGame { get; private set; } = false;
		bool L_0 = __this->get_U3CIsReadyGameU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
