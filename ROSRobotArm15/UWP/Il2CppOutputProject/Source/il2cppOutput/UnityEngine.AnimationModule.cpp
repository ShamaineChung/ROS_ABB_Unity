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

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidCastException
struct InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.NullReferenceException
struct NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Animation
struct Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C;
// UnityEngine.Animation/Enumerator
struct Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C;
// UnityEngine.AnimationClip
struct AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE;
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t26BCE82D4E5CBA43CAD83905725B4D6D500B3E36;
// UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C;
// UnityEngine.AnimationEvent
struct AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F;
// UnityEngine.AnimationState
struct AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386;
// UnityEngine.Animator
struct Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A;
// UnityEngine.AnimatorOverrideController
struct AnimatorOverrideController_t130F04B57E753FD4288EF3235699ABE7C88FF312;
// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
struct OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E;
// UnityEngine.Avatar
struct Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B;
// UnityEngine.HumanPoseHandler
struct HumanPoseHandler_t6509010E7376853DB31D02C9C9ADA86E47C64ABE;
// UnityEngine.Motion
struct Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C;
// UnityEngine.TrackedReference
struct TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;

IL2CPP_EXTERN_C RuntimeClass* AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HumanBodyBones_t84CDC0803F451E10186E589016F33D8404227892_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04E4E32AA834F9BA9336C5388E9470F196EB0891;
IL2CPP_EXTERN_C String_t* _stringLiteral35482DF98E7DEED2FC6BDE9BDD1E273E27CF1F2C;
IL2CPP_EXTERN_C String_t* _stringLiteral3DB192144788919FBAC5C900D49CE390D3FFF2C0;
IL2CPP_EXTERN_C String_t* _stringLiteral4518459D262696CF9B5DAB1E0A1BC3AC2F9BD9DF;
IL2CPP_EXTERN_C String_t* _stringLiteral488203F92B6BE929591A420476D70A53696658FE;
IL2CPP_EXTERN_C String_t* _stringLiteral59BDBA16999CF4EF3F7712740907B2C5E860459C;
IL2CPP_EXTERN_C String_t* _stringLiteral6502516F734DD885173E353D47AAEB82BC7070A9;
IL2CPP_EXTERN_C String_t* _stringLiteral686BDB3E6D145DC0F38C69AFA63FC73BB310BA20;
IL2CPP_EXTERN_C String_t* _stringLiteral7E3996230D9AF0349B43FF7B536FC25AF0C19C71;
IL2CPP_EXTERN_C String_t* _stringLiteralB47C26932C83DD7E0C54FC87EDDE2F3B50E5104C;
IL2CPP_EXTERN_C String_t* _stringLiteralB9DF0CBB713EC6E9DFD70C9BFB0B820148433428;
IL2CPP_EXTERN_C String_t* _stringLiteralC8A47B4FB952AE786387A2014C2EE5A58171D70D;
IL2CPP_EXTERN_C String_t* _stringLiteralCD718444951C5BE00D6C575DD6019D1D4C9B44C6;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE78D48EEB8456CF0C357E6AC2BCD6ED8230120B7;
IL2CPP_EXTERN_C String_t* _stringLiteralEDB24151233B36436B52B435C5A4AE87B4C6E119;
IL2CPP_EXTERN_C String_t* _stringLiteralFCF5307272E4A4426DDA9E4E6930E2B834B95B2C;
IL2CPP_EXTERN_C String_t* _stringLiteralFED0C12B84E61E1937B71F50B6E4A63A14B34AA4;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationScriptPlayable__ctor_mDA5EA55852F0A1079954B2DCB90398C4D7FFC412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Animator_GetBoneTransform_m44760610785563E713D82AC1FC0771B38CDBB16F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HumanPoseHandler_GetHumanPose_mE4D34A5D3AFE3F1DB3DB7B28D503AF233BD910BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HumanPoseHandler__ctor_mA921C6081505122B96EBF4B9113033E4017087DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HumanPose_Init_m61FD03498CCDEC8B2816F15A2659514D4AEC9287_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_mC3942EB4B00EAC10035AA7EBE23CA679C8790D20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_m172B8D6DA48AD49F0740833F7D18CD468B072E5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_mCC63F3E0D55A21A9E56D80D26150AD2B78C6EC50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_mF434E44E279E1DBD0887921B38A5C57812B1371A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_m35A103AAF8E80E7C007214546C71B4E90901C2A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_m1E16540EE6283270E3DE85D46C3BE1F8B85E73C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_m1767ADED196AAA8B4D6FBB9313003E33A967E799_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_mC6A8CB67F39B0B39BF77ED6177B3C2DF1BC91533_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AnimationClipPlayable_Equals_m06BA3E1C3AE0CC205C8531CCF6596C99C8D927EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationEvent__ctor_m6C228EB716B6B53DE2665091C056428EFB90897F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationLayerMixerPlayable_Equals_m0A6A86FEDCE98E63B84BD01D0D362D03EA733E59_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationLayerMixerPlayable__cctor_m3712A5D44F275E70624C0D734C9CED9BD12D0AC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationMixerPlayable_Equals_m7CB1B61B74A6BE00A35AD072490F07D4C7A17B0F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationMixerPlayable__cctor_m820F56C1D4257D4F5446BD66402D4428E0DF8E3E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationMotionXToDeltaPlayable_Equals_m53B4AAB54D7F3633C3954056F8C334BB8B7D590E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationMotionXToDeltaPlayable__cctor_mCB948CE31E0AAEC53CB1D6746D091604413C5EEE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationOffsetPlayable_Equals_m30B207FC6287EABF6FC1FDA47784322A3ABB98DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationOffsetPlayable__cctor_m174AD41778526FA15E41C6A11303A4F190A4CEA6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationPosePlayable_Equals_m4417430115DCF9B39D3E4B64424120CE7E555961_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationPosePlayable__cctor_mDE42A26BC2624427AA8086C4AB69FB531949153F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationRemoveScalePlayable_Equals_m58B139243E3B27CE86CA4CC470895BF719CD9BAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationRemoveScalePlayable__cctor_m7BA13559FDA2BF8E061839B333085C402DED6829_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationScriptPlayable_Equals_m4995D1AD353F43FE3FA854A8384601F58156E69E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationScriptPlayable__cctor_m3FA9E1E2E1EADACBC718598BEFECB25F867E454E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationScriptPlayable__ctor_mDA5EA55852F0A1079954B2DCB90398C4D7FFC412_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Animation_GetEnumerator_m1AA556FBFDF08728D25984E9C3123C187DC76191_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimatorControllerPlayable_Equals_m04685CCA5A5FC388A0387D3453A677C0CB47D173_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimatorControllerPlayable__cctor_m6FCC197F3BF33EAFC37D5217617FCDC64E8B304E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Animator_GetBoneTransform_m44760610785563E713D82AC1FC0771B38CDBB16F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Avatar__ctor_mD1FEFAE6B86B1AFE6097AD2E84AA1B56FF1C04AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HumanPoseHandler_Dispose_m15494203D70121ADB16E8B249B341FFB04C0566A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HumanPoseHandler_GetHumanPose_mE4D34A5D3AFE3F1DB3DB7B28D503AF233BD910BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HumanPoseHandler__ctor_mA921C6081505122B96EBF4B9113033E4017087DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HumanPose_Init_m61FD03498CCDEC8B2816F15A2659514D4AEC9287_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Motion__ctor_mAED8097767A0FD4F3B5A8E687D569E33DB6F8443_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeAnimatorController__ctor_mF55B0DDD5700D725CD4E59521E5A16BD774ABC32_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;;
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com;
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com;;
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke;
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke;;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct AnimationClipU5BU5D_t26BCE82D4E5CBA43CAD83905725B4D6D500B3E36;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6EFABDA0B2A020FB3DD6CA286799D867733667F1 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
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

// UnityEngine.Animation/Enumerator
struct  Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C  : public RuntimeObject
{
public:
	// UnityEngine.Animation UnityEngine.Animation/Enumerator::m_Outer
	Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * ___m_Outer_0;
	// System.Int32 UnityEngine.Animation/Enumerator::m_CurrentIndex
	int32_t ___m_CurrentIndex_1;

public:
	inline static int32_t get_offset_of_m_Outer_0() { return static_cast<int32_t>(offsetof(Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C, ___m_Outer_0)); }
	inline Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * get_m_Outer_0() const { return ___m_Outer_0; }
	inline Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C ** get_address_of_m_Outer_0() { return &___m_Outer_0; }
	inline void set_m_Outer_0(Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * value)
	{
		___m_Outer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Outer_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentIndex_1() { return static_cast<int32_t>(offsetof(Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C, ___m_CurrentIndex_1)); }
	inline int32_t get_m_CurrentIndex_1() const { return ___m_CurrentIndex_1; }
	inline int32_t* get_address_of_m_CurrentIndex_1() { return &___m_CurrentIndex_1; }
	inline void set_m_CurrentIndex_1(int32_t value)
	{
		___m_CurrentIndex_1 = value;
	}
};


// UnityEngine.HumanTrait
struct  HumanTrait_tCD3BF6F692C3AE5803A1872F826932F07BA1ADE9  : public RuntimeObject
{
public:

public:
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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
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


// UnityEngine.Animations.NotKeyableAttribute
struct  NotKeyableAttribute_tC0F8DAA85C33BBE045EFE59BB65D9A060D4282BE  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// UnityEngine.AnimatorClipInfo
struct  AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 
{
public:
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_ClipInstanceID_0() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180, ___m_ClipInstanceID_0)); }
	inline int32_t get_m_ClipInstanceID_0() const { return ___m_ClipInstanceID_0; }
	inline int32_t* get_address_of_m_ClipInstanceID_0() { return &___m_ClipInstanceID_0; }
	inline void set_m_ClipInstanceID_0(int32_t value)
	{
		___m_ClipInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};


// UnityEngine.AnimatorStateInfo
struct  AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};


// UnityEngine.AnimatorTransitionInfo
struct  AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B 
{
public:
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_FullPath
	int32_t ___m_FullPath_0;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_UserName
	int32_t ___m_UserName_1;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_Name
	int32_t ___m_Name_2;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_HasFixedDuration
	bool ___m_HasFixedDuration_3;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_Duration
	float ___m_Duration_4;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_NormalizedTime
	float ___m_NormalizedTime_5;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_AnyState
	bool ___m_AnyState_6;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_TransitionType
	int32_t ___m_TransitionType_7;

public:
	inline static int32_t get_offset_of_m_FullPath_0() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_FullPath_0)); }
	inline int32_t get_m_FullPath_0() const { return ___m_FullPath_0; }
	inline int32_t* get_address_of_m_FullPath_0() { return &___m_FullPath_0; }
	inline void set_m_FullPath_0(int32_t value)
	{
		___m_FullPath_0 = value;
	}

	inline static int32_t get_offset_of_m_UserName_1() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_UserName_1)); }
	inline int32_t get_m_UserName_1() const { return ___m_UserName_1; }
	inline int32_t* get_address_of_m_UserName_1() { return &___m_UserName_1; }
	inline void set_m_UserName_1(int32_t value)
	{
		___m_UserName_1 = value;
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_Name_2)); }
	inline int32_t get_m_Name_2() const { return ___m_Name_2; }
	inline int32_t* get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(int32_t value)
	{
		___m_Name_2 = value;
	}

	inline static int32_t get_offset_of_m_HasFixedDuration_3() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_HasFixedDuration_3)); }
	inline bool get_m_HasFixedDuration_3() const { return ___m_HasFixedDuration_3; }
	inline bool* get_address_of_m_HasFixedDuration_3() { return &___m_HasFixedDuration_3; }
	inline void set_m_HasFixedDuration_3(bool value)
	{
		___m_HasFixedDuration_3 = value;
	}

	inline static int32_t get_offset_of_m_Duration_4() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_Duration_4)); }
	inline float get_m_Duration_4() const { return ___m_Duration_4; }
	inline float* get_address_of_m_Duration_4() { return &___m_Duration_4; }
	inline void set_m_Duration_4(float value)
	{
		___m_Duration_4 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_5() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_NormalizedTime_5)); }
	inline float get_m_NormalizedTime_5() const { return ___m_NormalizedTime_5; }
	inline float* get_address_of_m_NormalizedTime_5() { return &___m_NormalizedTime_5; }
	inline void set_m_NormalizedTime_5(float value)
	{
		___m_NormalizedTime_5 = value;
	}

	inline static int32_t get_offset_of_m_AnyState_6() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_AnyState_6)); }
	inline bool get_m_AnyState_6() const { return ___m_AnyState_6; }
	inline bool* get_address_of_m_AnyState_6() { return &___m_AnyState_6; }
	inline void set_m_AnyState_6(bool value)
	{
		___m_AnyState_6 = value;
	}

	inline static int32_t get_offset_of_m_TransitionType_7() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_TransitionType_7)); }
	inline int32_t get_m_TransitionType_7() const { return ___m_TransitionType_7; }
	inline int32_t* get_address_of_m_TransitionType_7() { return &___m_TransitionType_7; }
	inline void set_m_TransitionType_7(int32_t value)
	{
		___m_TransitionType_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_pinvoke
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
};
// Native definition for COM marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_com
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
};

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SharedBetweenAnimatorsAttribute
struct  SharedBetweenAnimatorsAttribute_tD52C4EACCF9B8F7A21A34D11D3971A823B131F03  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
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

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.AnimationCurve
struct  AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.AnimationEventSource
struct  AnimationEventSource_t0CA86CB3D775209B46F475A99887C93530F20702 
{
public:
	// System.Int32 UnityEngine.AnimationEventSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimationEventSource_t0CA86CB3D775209B46F475A99887C93530F20702, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Animations.AnimationHumanStream
struct  AnimationHumanStream_t4E6A2B8E37C9F4DCC77F8B2A802AD604EDEC4FB2 
{
public:
	// System.IntPtr UnityEngine.Animations.AnimationHumanStream::stream
	intptr_t ___stream_0;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(AnimationHumanStream_t4E6A2B8E37C9F4DCC77F8B2A802AD604EDEC4FB2, ___stream_0)); }
	inline intptr_t get_stream_0() const { return ___stream_0; }
	inline intptr_t* get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(intptr_t value)
	{
		___stream_0 = value;
	}
};


// UnityEngine.Animations.AnimationStream
struct  AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E 
{
public:
	// System.UInt32 UnityEngine.Animations.AnimationStream::m_AnimatorBindingsVersion
	uint32_t ___m_AnimatorBindingsVersion_0;
	// System.IntPtr UnityEngine.Animations.AnimationStream::constant
	intptr_t ___constant_1;
	// System.IntPtr UnityEngine.Animations.AnimationStream::input
	intptr_t ___input_2;
	// System.IntPtr UnityEngine.Animations.AnimationStream::output
	intptr_t ___output_3;
	// System.IntPtr UnityEngine.Animations.AnimationStream::workspace
	intptr_t ___workspace_4;
	// System.IntPtr UnityEngine.Animations.AnimationStream::inputStreamAccessor
	intptr_t ___inputStreamAccessor_5;
	// System.IntPtr UnityEngine.Animations.AnimationStream::animationHandleBinder
	intptr_t ___animationHandleBinder_6;

public:
	inline static int32_t get_offset_of_m_AnimatorBindingsVersion_0() { return static_cast<int32_t>(offsetof(AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E, ___m_AnimatorBindingsVersion_0)); }
	inline uint32_t get_m_AnimatorBindingsVersion_0() const { return ___m_AnimatorBindingsVersion_0; }
	inline uint32_t* get_address_of_m_AnimatorBindingsVersion_0() { return &___m_AnimatorBindingsVersion_0; }
	inline void set_m_AnimatorBindingsVersion_0(uint32_t value)
	{
		___m_AnimatorBindingsVersion_0 = value;
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E, ___constant_1)); }
	inline intptr_t get_constant_1() const { return ___constant_1; }
	inline intptr_t* get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(intptr_t value)
	{
		___constant_1 = value;
	}

	inline static int32_t get_offset_of_input_2() { return static_cast<int32_t>(offsetof(AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E, ___input_2)); }
	inline intptr_t get_input_2() const { return ___input_2; }
	inline intptr_t* get_address_of_input_2() { return &___input_2; }
	inline void set_input_2(intptr_t value)
	{
		___input_2 = value;
	}

	inline static int32_t get_offset_of_output_3() { return static_cast<int32_t>(offsetof(AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E, ___output_3)); }
	inline intptr_t get_output_3() const { return ___output_3; }
	inline intptr_t* get_address_of_output_3() { return &___output_3; }
	inline void set_output_3(intptr_t value)
	{
		___output_3 = value;
	}

	inline static int32_t get_offset_of_workspace_4() { return static_cast<int32_t>(offsetof(AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E, ___workspace_4)); }
	inline intptr_t get_workspace_4() const { return ___workspace_4; }
	inline intptr_t* get_address_of_workspace_4() { return &___workspace_4; }
	inline void set_workspace_4(intptr_t value)
	{
		___workspace_4 = value;
	}

	inline static int32_t get_offset_of_inputStreamAccessor_5() { return static_cast<int32_t>(offsetof(AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E, ___inputStreamAccessor_5)); }
	inline intptr_t get_inputStreamAccessor_5() const { return ___inputStreamAccessor_5; }
	inline intptr_t* get_address_of_inputStreamAccessor_5() { return &___inputStreamAccessor_5; }
	inline void set_inputStreamAccessor_5(intptr_t value)
	{
		___inputStreamAccessor_5 = value;
	}

	inline static int32_t get_offset_of_animationHandleBinder_6() { return static_cast<int32_t>(offsetof(AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E, ___animationHandleBinder_6)); }
	inline intptr_t get_animationHandleBinder_6() const { return ___animationHandleBinder_6; }
	inline intptr_t* get_address_of_animationHandleBinder_6() { return &___animationHandleBinder_6; }
	inline void set_animationHandleBinder_6(intptr_t value)
	{
		___animationHandleBinder_6 = value;
	}
};


// UnityEngine.AnimatorControllerParameterType
struct  AnimatorControllerParameterType_t340CE2BBAB87F4684FEA76C24F1BCB9FC10D5B1F 
{
public:
	// System.Int32 UnityEngine.AnimatorControllerParameterType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimatorControllerParameterType_t340CE2BBAB87F4684FEA76C24F1BCB9FC10D5B1F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AnimatorCullingMode
struct  AnimatorCullingMode_t9E72A730F46CAED8736352678469610F391D22C9 
{
public:
	// System.Int32 UnityEngine.AnimatorCullingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimatorCullingMode_t9E72A730F46CAED8736352678469610F391D22C9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AnimatorUpdateMode
struct  AnimatorUpdateMode_tDD2D2D131F4E5D2D2A5AF9EFDE368B1C1548EEA0 
{
public:
	// System.Int32 UnityEngine.AnimatorUpdateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimatorUpdateMode_tDD2D2D131F4E5D2D2A5AF9EFDE368B1C1548EEA0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AvatarIKGoal
struct  AvatarIKGoal_t15BB8118646D4C1217A2A8F4098ACB473B9C4C11 
{
public:
	// System.Int32 UnityEngine.AvatarIKGoal::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AvatarIKGoal_t15BB8118646D4C1217A2A8F4098ACB473B9C4C11, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.HumanBodyBones
struct  HumanBodyBones_t84CDC0803F451E10186E589016F33D8404227892 
{
public:
	// System.Int32 UnityEngine.HumanBodyBones::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HumanBodyBones_t84CDC0803F451E10186E589016F33D8404227892, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.HumanLimit
struct  HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3 
{
public:
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Min
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Min_0;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Max
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Max_1;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_2;
	// System.Single UnityEngine.HumanLimit::m_AxisLength
	float ___m_AxisLength_3;
	// System.Int32 UnityEngine.HumanLimit::m_UseDefaultValues
	int32_t ___m_UseDefaultValues_4;

public:
	inline static int32_t get_offset_of_m_Min_0() { return static_cast<int32_t>(offsetof(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3, ___m_Min_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Min_0() const { return ___m_Min_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Min_0() { return &___m_Min_0; }
	inline void set_m_Min_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Min_0 = value;
	}

	inline static int32_t get_offset_of_m_Max_1() { return static_cast<int32_t>(offsetof(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3, ___m_Max_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Max_1() const { return ___m_Max_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Max_1() { return &___m_Max_1; }
	inline void set_m_Max_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Max_1 = value;
	}

	inline static int32_t get_offset_of_m_Center_2() { return static_cast<int32_t>(offsetof(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3, ___m_Center_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_2() const { return ___m_Center_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_2() { return &___m_Center_2; }
	inline void set_m_Center_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_2 = value;
	}

	inline static int32_t get_offset_of_m_AxisLength_3() { return static_cast<int32_t>(offsetof(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3, ___m_AxisLength_3)); }
	inline float get_m_AxisLength_3() const { return ___m_AxisLength_3; }
	inline float* get_address_of_m_AxisLength_3() { return &___m_AxisLength_3; }
	inline void set_m_AxisLength_3(float value)
	{
		___m_AxisLength_3 = value;
	}

	inline static int32_t get_offset_of_m_UseDefaultValues_4() { return static_cast<int32_t>(offsetof(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3, ___m_UseDefaultValues_4)); }
	inline int32_t get_m_UseDefaultValues_4() const { return ___m_UseDefaultValues_4; }
	inline int32_t* get_address_of_m_UseDefaultValues_4() { return &___m_UseDefaultValues_4; }
	inline void set_m_UseDefaultValues_4(int32_t value)
	{
		___m_UseDefaultValues_4 = value;
	}
};


// UnityEngine.HumanPose
struct  HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71 
{
public:
	// UnityEngine.Vector3 UnityEngine.HumanPose::bodyPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___bodyPosition_0;
	// UnityEngine.Quaternion UnityEngine.HumanPose::bodyRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___bodyRotation_1;
	// System.Single[] UnityEngine.HumanPose::muscles
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___muscles_2;

public:
	inline static int32_t get_offset_of_bodyPosition_0() { return static_cast<int32_t>(offsetof(HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71, ___bodyPosition_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_bodyPosition_0() const { return ___bodyPosition_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_bodyPosition_0() { return &___bodyPosition_0; }
	inline void set_bodyPosition_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___bodyPosition_0 = value;
	}

	inline static int32_t get_offset_of_bodyRotation_1() { return static_cast<int32_t>(offsetof(HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71, ___bodyRotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_bodyRotation_1() const { return ___bodyRotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_bodyRotation_1() { return &___bodyRotation_1; }
	inline void set_bodyRotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___bodyRotation_1 = value;
	}

	inline static int32_t get_offset_of_muscles_2() { return static_cast<int32_t>(offsetof(HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71, ___muscles_2)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_muscles_2() const { return ___muscles_2; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_muscles_2() { return &___muscles_2; }
	inline void set_muscles_2(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___muscles_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___muscles_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.HumanPose
struct HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71_marshaled_pinvoke
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___bodyPosition_0;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___bodyRotation_1;
	Il2CppSafeArray/*NONE*/* ___muscles_2;
};
// Native definition for COM marshalling of UnityEngine.HumanPose
struct HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71_marshaled_com
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___bodyPosition_0;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___bodyRotation_1;
	Il2CppSafeArray/*NONE*/* ___muscles_2;
};

// UnityEngine.HumanPoseHandler
struct  HumanPoseHandler_t6509010E7376853DB31D02C9C9ADA86E47C64ABE  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.HumanPoseHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(HumanPoseHandler_t6509010E7376853DB31D02C9C9ADA86E47C64ABE, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
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

// UnityEngine.PlayMode
struct  PlayMode_tE55342CFE774475487030D6B30D815DEF4C509C3 
{
public:
	// System.Int32 UnityEngine.PlayMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayMode_tE55342CFE774475487030D6B30D815DEF4C509C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields, ___m_Null_2)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.SkeletonBone
struct  SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5 
{
public:
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// System.String UnityEngine.SkeletonBone::parentName
	String_t* ___parentName_1;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_2;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_3;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_parentName_1() { return static_cast<int32_t>(offsetof(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5, ___parentName_1)); }
	inline String_t* get_parentName_1() const { return ___parentName_1; }
	inline String_t** get_address_of_parentName_1() { return &___parentName_1; }
	inline void set_parentName_1(String_t* value)
	{
		___parentName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentName_1), (void*)value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5, ___position_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_2() const { return ___position_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5, ___rotation_3)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_3() const { return ___rotation_3; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5, ___scale_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_scale_4() const { return ___scale_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___scale_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_pinvoke
{
	char* ___name_0;
	char* ___parentName_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_2;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_3;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale_4;
};
// Native definition for COM marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___parentName_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_2;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_3;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale_4;
};

// UnityEngine.StateInfoIndex
struct  StateInfoIndex_tB33643A51F1038D1AA318A291031162A6A79814E 
{
public:
	// System.Int32 UnityEngine.StateInfoIndex::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StateInfoIndex_tB33643A51F1038D1AA318A291031162A6A79814E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TrackedReference
struct  TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.AnimationEvent
struct  AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F  : public RuntimeObject
{
public:
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  ___m_AnimatorClipInfo_10;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_FunctionName_1() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_FunctionName_1)); }
	inline String_t* get_m_FunctionName_1() const { return ___m_FunctionName_1; }
	inline String_t** get_address_of_m_FunctionName_1() { return &___m_FunctionName_1; }
	inline void set_m_FunctionName_1(String_t* value)
	{
		___m_FunctionName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FunctionName_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringParameter_2() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_StringParameter_2)); }
	inline String_t* get_m_StringParameter_2() const { return ___m_StringParameter_2; }
	inline String_t** get_address_of_m_StringParameter_2() { return &___m_StringParameter_2; }
	inline void set_m_StringParameter_2(String_t* value)
	{
		___m_StringParameter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringParameter_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ObjectReferenceParameter_3() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_ObjectReferenceParameter_3)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_m_ObjectReferenceParameter_3() const { return ___m_ObjectReferenceParameter_3; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_m_ObjectReferenceParameter_3() { return &___m_ObjectReferenceParameter_3; }
	inline void set_m_ObjectReferenceParameter_3(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___m_ObjectReferenceParameter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ObjectReferenceParameter_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_FloatParameter_4() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_FloatParameter_4)); }
	inline float get_m_FloatParameter_4() const { return ___m_FloatParameter_4; }
	inline float* get_address_of_m_FloatParameter_4() { return &___m_FloatParameter_4; }
	inline void set_m_FloatParameter_4(float value)
	{
		___m_FloatParameter_4 = value;
	}

	inline static int32_t get_offset_of_m_IntParameter_5() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_IntParameter_5)); }
	inline int32_t get_m_IntParameter_5() const { return ___m_IntParameter_5; }
	inline int32_t* get_address_of_m_IntParameter_5() { return &___m_IntParameter_5; }
	inline void set_m_IntParameter_5(int32_t value)
	{
		___m_IntParameter_5 = value;
	}

	inline static int32_t get_offset_of_m_MessageOptions_6() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_MessageOptions_6)); }
	inline int32_t get_m_MessageOptions_6() const { return ___m_MessageOptions_6; }
	inline int32_t* get_address_of_m_MessageOptions_6() { return &___m_MessageOptions_6; }
	inline void set_m_MessageOptions_6(int32_t value)
	{
		___m_MessageOptions_6 = value;
	}

	inline static int32_t get_offset_of_m_Source_7() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_Source_7)); }
	inline int32_t get_m_Source_7() const { return ___m_Source_7; }
	inline int32_t* get_address_of_m_Source_7() { return &___m_Source_7; }
	inline void set_m_Source_7(int32_t value)
	{
		___m_Source_7 = value;
	}

	inline static int32_t get_offset_of_m_StateSender_8() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_StateSender_8)); }
	inline AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * get_m_StateSender_8() const { return ___m_StateSender_8; }
	inline AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 ** get_address_of_m_StateSender_8() { return &___m_StateSender_8; }
	inline void set_m_StateSender_8(AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * value)
	{
		___m_StateSender_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StateSender_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_AnimatorStateInfo_9() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_AnimatorStateInfo_9)); }
	inline AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  get_m_AnimatorStateInfo_9() const { return ___m_AnimatorStateInfo_9; }
	inline AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * get_address_of_m_AnimatorStateInfo_9() { return &___m_AnimatorStateInfo_9; }
	inline void set_m_AnimatorStateInfo_9(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  value)
	{
		___m_AnimatorStateInfo_9 = value;
	}

	inline static int32_t get_offset_of_m_AnimatorClipInfo_10() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_AnimatorClipInfo_10)); }
	inline AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  get_m_AnimatorClipInfo_10() const { return ___m_AnimatorClipInfo_10; }
	inline AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 * get_address_of_m_AnimatorClipInfo_10() { return &___m_AnimatorClipInfo_10; }
	inline void set_m_AnimatorClipInfo_10(AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  value)
	{
		___m_AnimatorClipInfo_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_pinvoke
{
	float ___m_Time_0;
	char* ___m_FunctionName_1;
	char* ___m_StringParameter_2;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * ___m_StateSender_8;
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  ___m_AnimatorClipInfo_10;
};
// Native definition for COM marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_com
{
	float ___m_Time_0;
	Il2CppChar* ___m_FunctionName_1;
	Il2CppChar* ___m_StringParameter_2;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com* ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * ___m_StateSender_8;
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  ___m_AnimatorClipInfo_10;
};

// UnityEngine.AnimationState
struct  AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386  : public TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107
{
public:

public:
};


// UnityEngine.Animations.AnimationClipPlayable
struct  AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.Animations.AnimationLayerMixerPlayable
struct  AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_StaticFields
{
public:
	// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::m_NullPlayable
	AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationMixerPlayable
struct  AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_StaticFields
{
public:
	// UnityEngine.Animations.AnimationMixerPlayable UnityEngine.Animations.AnimationMixerPlayable::m_NullPlayable
	AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationMotionXToDeltaPlayable
struct  AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_StaticFields
{
public:
	// UnityEngine.Animations.AnimationMotionXToDeltaPlayable UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_NullPlayable
	AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationOffsetPlayable
struct  AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_StaticFields
{
public:
	// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::m_NullPlayable
	AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationPlayableOutput
struct  AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::m_Handle
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6, ___m_Handle_0)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.Animations.AnimationPosePlayable
struct  AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_StaticFields
{
public:
	// UnityEngine.Animations.AnimationPosePlayable UnityEngine.Animations.AnimationPosePlayable::m_NullPlayable
	AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationRemoveScalePlayable
struct  AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_StaticFields
{
public:
	// UnityEngine.Animations.AnimationRemoveScalePlayable UnityEngine.Animations.AnimationRemoveScalePlayable::m_NullPlayable
	AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationScriptPlayable
struct  AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_StaticFields
{
public:
	// UnityEngine.Animations.AnimationScriptPlayable UnityEngine.Animations.AnimationScriptPlayable::m_NullPlayable
	AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimatorControllerPlayable
struct  AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_StaticFields
{
public:
	// UnityEngine.Animations.AnimatorControllerPlayable UnityEngine.Animations.AnimatorControllerPlayable::m_NullPlayable
	AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_StaticFields, ___m_NullPlayable_1)); }
	inline AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Avatar
struct  Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.HumanBone
struct  HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995 
{
public:
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName_0;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName_1;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  ___limit_2;

public:
	inline static int32_t get_offset_of_m_BoneName_0() { return static_cast<int32_t>(offsetof(HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995, ___m_BoneName_0)); }
	inline String_t* get_m_BoneName_0() const { return ___m_BoneName_0; }
	inline String_t** get_address_of_m_BoneName_0() { return &___m_BoneName_0; }
	inline void set_m_BoneName_0(String_t* value)
	{
		___m_BoneName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BoneName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_HumanName_1() { return static_cast<int32_t>(offsetof(HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995, ___m_HumanName_1)); }
	inline String_t* get_m_HumanName_1() const { return ___m_HumanName_1; }
	inline String_t** get_address_of_m_HumanName_1() { return &___m_HumanName_1; }
	inline void set_m_HumanName_1(String_t* value)
	{
		___m_HumanName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HumanName_1), (void*)value);
	}

	inline static int32_t get_offset_of_limit_2() { return static_cast<int32_t>(offsetof(HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995, ___limit_2)); }
	inline HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  get_limit_2() const { return ___limit_2; }
	inline HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3 * get_address_of_limit_2() { return &___limit_2; }
	inline void set_limit_2(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  value)
	{
		___limit_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.HumanBone
struct HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_pinvoke
{
	char* ___m_BoneName_0;
	char* ___m_HumanName_1;
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  ___limit_2;
};
// Native definition for COM marshalling of UnityEngine.HumanBone
struct HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_com
{
	Il2CppChar* ___m_BoneName_0;
	Il2CppChar* ___m_HumanName_1;
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  ___limit_2;
};

// UnityEngine.Motion
struct  Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// System.Boolean UnityEngine.Motion::<isAnimatorMotion>k__BackingField
	bool ___U3CisAnimatorMotionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CisAnimatorMotionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F, ___U3CisAnimatorMotionU3Ek__BackingField_4)); }
	inline bool get_U3CisAnimatorMotionU3Ek__BackingField_4() const { return ___U3CisAnimatorMotionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisAnimatorMotionU3Ek__BackingField_4() { return &___U3CisAnimatorMotionU3Ek__BackingField_4; }
	inline void set_U3CisAnimatorMotionU3Ek__BackingField_4(bool value)
	{
		___U3CisAnimatorMotionU3Ek__BackingField_4 = value;
	}
};


// UnityEngine.RuntimeAnimatorController
struct  RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.InvalidCastException
struct  InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NullReferenceException
struct  NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.AnimationClip
struct  AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE  : public Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F
{
public:

public:
};


// UnityEngine.AnimatorOverrideController
struct  AnimatorOverrideController_t130F04B57E753FD4288EF3235699ABE7C88FF312  : public RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD
{
public:
	// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback UnityEngine.AnimatorOverrideController::OnOverrideControllerDirty
	OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * ___OnOverrideControllerDirty_4;

public:
	inline static int32_t get_offset_of_OnOverrideControllerDirty_4() { return static_cast<int32_t>(offsetof(AnimatorOverrideController_t130F04B57E753FD4288EF3235699ABE7C88FF312, ___OnOverrideControllerDirty_4)); }
	inline OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * get_OnOverrideControllerDirty_4() const { return ___OnOverrideControllerDirty_4; }
	inline OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E ** get_address_of_OnOverrideControllerDirty_4() { return &___OnOverrideControllerDirty_4; }
	inline void set_OnOverrideControllerDirty_4(OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * value)
	{
		___OnOverrideControllerDirty_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOverrideControllerDirty_4), (void*)value);
	}
};


// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
struct  OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.StateMachineBehaviour
struct  StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
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


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// UnityEngine.Animation
struct  Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Animator
struct  Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
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
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t26BCE82D4E5CBA43CAD83905725B4D6D500B3E36  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * m_Items[1];

public:
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke(const Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0& unmarshaled, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke_back(const Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke& marshaled, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0& unmarshaled);
IL2CPP_EXTERN_C void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke_cleanup(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_com(const Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0& unmarshaled, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_com_back(const Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com& marshaled, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0& unmarshaled);
IL2CPP_EXTERN_C void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_com_cleanup(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com& marshaled);

// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_mC3942EB4B00EAC10035AA7EBE23CA679C8790D20_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_m172B8D6DA48AD49F0740833F7D18CD468B072E5E_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_mCC63F3E0D55A21A9E56D80D26150AD2B78C6EC50_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_mF434E44E279E1DBD0887921B38A5C57812B1371A_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_m35A103AAF8E80E7C007214546C71B4E90901C2A2_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_m1E16540EE6283270E3DE85D46C3BE1F8B85E73C2_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_m1767ADED196AAA8B4D6FBB9313003E33A967E799_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_mC6A8CB67F39B0B39BF77ED6177B3C2DF1BC91533_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);

// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_GetState_mA9C3339C7F4E26737EED4E0509DA5214105FFA5C (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_CrossFade_mF596DAFB8AE061D03DA3CE7BEEE659CB8FB5D308 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, float ___fadeLength1, int32_t ___mode2, const RuntimeMethod* method);
// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE90274D68218FACBF1EC2BBB177244F49E446E11 (Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C * __this, Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * ___outer0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_GetStateAtIndex_mC1F37F66327704F8DD88BE26AD73B2D5051698CA (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animation::GetStateCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animation_GetStateCount_m9E1764870EAF179CD0D21E3FB5D2DB3086962650 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Motion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Motion__ctor_mAED8097767A0FD4F3B5A8E687D569E33DB6F8443 (Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_Internal_CreateAnimationClip_m87F8D1F5CA59266F288F97C2D1B041EE161C047C (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.TrackedReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedReference__ctor_m3F870F888D748E167296D3434305F6769CDB5B04 (TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationClipPlayable_GetHandle_mB1B706B9ADB194766DC938C332469AC698AD0D9E (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___x0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_Equals_m06BA3E1C3AE0CC205C8531CCF6596C99C8D927EE (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * __this, AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_mC3942EB4B00EAC10035AA7EBE23CA679C8790D20 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_mC3942EB4B00EAC10035AA7EBE23CA679C8790D20_gshared)(__this, method);
}
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812 (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationLayerMixerPlayable_GetHandle_mD4159505D29B17D507599ED6FA3BEC1370691DB8 (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_Equals_m0A6A86FEDCE98E63B84BD01D0D362D03EA733E59 (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * __this, AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  ___other0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_m172B8D6DA48AD49F0740833F7D18CD468B072E5E (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_m172B8D6DA48AD49F0740833F7D18CD468B072E5E_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43 (AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMixerPlayable_GetHandle_mC5939239D7C47C6E0FF4EC72021EE793863BC567 (AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_Equals_m7CB1B61B74A6BE00A35AD072490F07D4C7A17B0F (AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * __this, AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_mCC63F3E0D55A21A9E56D80D26150AD2B78C6EC50 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_mCC63F3E0D55A21A9E56D80D26150AD2B78C6EC50_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6 (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMotionXToDeltaPlayable_GetHandle_mE36F0671962333EAF5B434A062930D9E76A79076 (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_Equals_m53B4AAB54D7F3633C3954056F8C334BB8B7D590E (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * __this, AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_mF434E44E279E1DBD0887921B38A5C57812B1371A (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_mF434E44E279E1DBD0887921B38A5C57812B1371A_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607 (AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationOffsetPlayable_GetHandle_m5213878A6D7F29801F74CD3A8B866D444793665E (AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_Equals_m30B207FC6287EABF6FC1FDA47784322A3ABB98DF (AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * __this, AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_m35A103AAF8E80E7C007214546C71B4E90901C2A2 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_m35A103AAF8E80E7C007214546C71B4E90901C2A2_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationPosePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D (AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationPosePlayable_GetHandle_m9D856E83755A447ABCD6C0D8FE011AFF659A016E (AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationPosePlayable::Equals(UnityEngine.Animations.AnimationPosePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPosePlayable_Equals_m4417430115DCF9B39D3E4B64424120CE7E555961 (AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * __this, AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_m1E16540EE6283270E3DE85D46C3BE1F8B85E73C2 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_m1E16540EE6283270E3DE85D46C3BE1F8B85E73C2_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1 (AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationRemoveScalePlayable_GetHandle_mA5063F10E01C8546F88E9ABE07B71373BF290EED (AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::Equals(UnityEngine.Animations.AnimationRemoveScalePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_Equals_m58B139243E3B27CE86CA4CC470895BF719CD9BAD (AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * __this, AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_m1767ADED196AAA8B4D6FBB9313003E33A967E799 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_m1767ADED196AAA8B4D6FBB9313003E33A967E799_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__ctor_mDA5EA55852F0A1079954B2DCB90398C4D7FFC412 (AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationScriptPlayable_GetHandle_m661730E4C17F10A8D3C46492A9AD1D61EF0F4315 (AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::Equals(UnityEngine.Animations.AnimationScriptPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_Equals_m4995D1AD353F43FE3FA854A8384601F58156E69E (AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E * __this, AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimatorControllerPlayable_GetHandle_mB83731910E1534BECA36F64BA22AA68A71D08CA8 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_mC6A8CB67F39B0B39BF77ED6177B3C2DF1BC91533 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_mC6A8CB67F39B0B39BF77ED6177B3C2DF1BC91533_gshared)(__this, method);
}
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m04685CCA5A5FC388A0387D3453A677C0CB47D173 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___other0, const RuntimeMethod* method);
// System.Single UnityEngine.Animator::GetFloatString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloatString_mB1518F1964EE15625814C558BB3565330491F3C2 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatString_mE425F554C50682E41D362D7593B3B069609B7091 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatID_mC8049D4DC5D19929FF51172902E35D496F9EB805 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolString_mA61F1A44D13EF82A7C2CAF466EBA81E65D054D46 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolID_m03BC09B1F267F9B07FF9F8EDDBAA4D0AA8D61EF0 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIntegerID_mF9CF13102019C3714F927B3827EEF4473C0AB5BA (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerString_m77CE57996467D0C973FA2D0CB4DF87BD062C8A1E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTriggerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerID_mD08597B567A91FC132350A343E69A084EC958040 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerString_m31B233F948D7551D220FEDA56B002E6724B89851 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::get_deltaPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::get_deltaRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_deltaRotation_Injected_mC688777CD9ACA48B55E760856F0B653047238F08 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::CheckIfInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetGoalPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_m27E296D914F30F2C0BAE57149A4B7E430959E61F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goalPosition1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_Injected_m3FCA5A1E8B603902FDEC306CF4324BC4551D3737 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___goalPosition1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetGoalRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_mEF3F4FDFC5C77775B3DF86C1D2A213AA2FCEA465 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goalRotation1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_Injected_m37692B68D8CC4D92559553F9AAE52D714C4699A9 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___goalRotation1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetGoalWeightPosition(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalWeightPosition_m890B8E9CCFF48C094B5E34EE35CC105567F83481 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetGoalWeightRotation(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalWeightRotation_mC32F9430FA93AD28AC309F724398A1CAAEF88904 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetLookAtPositionInternal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_mD621D4C229D132ECD57B1D9F90783A16FEBA5A84 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtPosition0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetLookAtPositionInternal_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_Injected_mE43763E88F5BEA74AE47D478B1137A48090A38DB (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___lookAtPosition0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetLookAtWeightInternal(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeightInternal_mFE3EA212AD2159F6A66BF80D30385227E836A4BE (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___weight0, float ___bodyWeight1, float ___headWeight2, float ___eyesWeight3, float ___clampWeight4, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorStateInfo_mBDC199173734AF60218E4727E74F689180BC8D8B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, int32_t ___stateInfoIndex1, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * ___info2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::get_pivotPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_pivotPosition_Injected_mB1F3E5A4C30ACA150523947ADE54820B5AA03C68 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_mD8D1644B1A474D3B6A0C80EE9457EB1A6CC9A13C (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_m7EA2465E0FFFEF1989F0F7286B6EB09FC0D8BD08 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateHashName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m1942D7FB37F84959D2C6A859E11F70791E95FA50 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m20B525F785DA59888E645125DB2DDC071E924F3E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mCCE2EFF47A0ACB4B2636F63140F94FCEA71A9BCA (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 UnityEngine.HumanTrait::GetBoneIndexFromMono(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HumanTrait_GetBoneIndexFromMono_mEE030DE71CE19611BB3CC881799CCF3828D0928E (int32_t ___humanId0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransformInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Animator_GetBoneTransformInternal_mC33B048536349D354D9FE17D46377B8E467599E5 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___humanBoneId0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::get_logWarnings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_logWarnings_mE755494196C56C22909C97125F48EC6A7CFED617 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::IsInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInIKPass_m464BA0915D3FF398D1356A65187DACD74633D973 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m002CFC2CE3C42A058380BE98F015E654D5F9F177 (OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mD133471910C1ACE0979F3FD11462C9B8BB24CA96 (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m3AB6A2DB592BB9CA0B9A4EF8A382C4DF3F5F6BBD (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorStateInfo::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_length_mBEC06803962C9F4E60611516424CD43D7155A56D (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m091EBAEBC7919B0391ABDAFB7389ADC12206525B (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Avatar::Internal_GetAxisLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Avatar_Internal_GetAxisLength_m13F959D5CC665CB2E403B7B99530FE1C0F412DB5 (Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * __this, int32_t ___humanId0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Avatar::Internal_GetPostRotation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Avatar_Internal_GetPostRotation_mA92FD1A9C1DE0385FEE43326DB1CD742D23E1C2A (Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * __this, int32_t ___humanId0, const RuntimeMethod* method);
// System.Void UnityEngine.Avatar::Internal_GetPostRotation_Injected(System.Int32,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_Internal_GetPostRotation_Injected_m70C9E36B4907AAB749AE1B9FD34159B52FEF4037 (Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * __this, int32_t ___humanId0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret1, const RuntimeMethod* method);
// System.Int32 UnityEngine.HumanTrait::get_MuscleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HumanTrait_get_MuscleCount_mCEFF09E5706A269721965454D93792AE509039F7 (const RuntimeMethod* method);
// System.Void UnityEngine.HumanPose::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanPose_Init_m61FD03498CCDEC8B2816F15A2659514D4AEC9287 (HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71 * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.HumanPoseHandler::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanPoseHandler_Internal_Destroy_m8702BC57771AD5C018AF79140091C6AA9E17AD3D (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Avatar::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Avatar_get_isValid_mC78A2AF825A7BB15D6D3DDE005882B2ECC59D9E7 (Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Avatar::get_isHuman()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Avatar_get_isHuman_m9E6F80C42A98C0A3D0CA6B24C0B17BB6BE8ADE85 (Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.HumanPoseHandler::Internal_Create(UnityEngine.Avatar,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HumanPoseHandler_Internal_Create_m8CFFB638D6C9CA31CA9B39575990B0A0C4213208 (Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * ___avatar0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___root1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349 (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.HumanPoseHandler::GetHumanPose(UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanPoseHandler_GetHumanPose_mE867CBBED937238ED757CBC0F5B9EF04EC77B475 (HumanPoseHandler_t6509010E7376853DB31D02C9C9ADA86E47C64ABE * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___bodyPosition0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___bodyRotation1, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___muscles2, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * __this, const RuntimeMethod* method);
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
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_get_Item_mA50F89B91D6170D6824B0B562790470586445AB9 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___name0, const RuntimeMethod* method)
{
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * V_0 = NULL;
	{
		String_t* L_0 = ___name0;
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_1 = Animation_GetState_mA9C3339C7F4E26737EED4E0509DA5214105FFA5C(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_CrossFade_mF596DAFB8AE061D03DA3CE7BEEE659CB8FB5D308 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, float ___fadeLength1, int32_t ___mode2, const RuntimeMethod* method)
{
	typedef void (*Animation_CrossFade_mF596DAFB8AE061D03DA3CE7BEEE659CB8FB5D308_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, String_t*, float, int32_t);
	static Animation_CrossFade_mF596DAFB8AE061D03DA3CE7BEEE659CB8FB5D308_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_CrossFade_mF596DAFB8AE061D03DA3CE7BEEE659CB8FB5D308_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)");
	_il2cpp_icall_func(__this, ___animation0, ___fadeLength1, ___mode2);
}
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_CrossFade_mC00AB685359B01B55AC9B096D73A83D9D21BEBF9 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, float ___fadeLength1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		String_t* L_0 = ___animation0;
		float L_1 = ___fadeLength1;
		int32_t L_2 = V_0;
		Animation_CrossFade_mF596DAFB8AE061D03DA3CE7BEEE659CB8FB5D308(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Animation_GetEnumerator_m1AA556FBFDF08728D25984E9C3123C187DC76191 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animation_GetEnumerator_m1AA556FBFDF08728D25984E9C3123C187DC76191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C * L_0 = (Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C *)il2cpp_codegen_object_new(Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C_il2cpp_TypeInfo_var);
		Enumerator__ctor_mE90274D68218FACBF1EC2BBB177244F49E446E11(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_GetState_mA9C3339C7F4E26737EED4E0509DA5214105FFA5C (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * (*Animation_GetState_mA9C3339C7F4E26737EED4E0509DA5214105FFA5C_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, String_t*);
	static Animation_GetState_mA9C3339C7F4E26737EED4E0509DA5214105FFA5C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetState_mA9C3339C7F4E26737EED4E0509DA5214105FFA5C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetState(System.String)");
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * retVal = _il2cpp_icall_func(__this, ___name0);
	return retVal;
}
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_GetStateAtIndex_mC1F37F66327704F8DD88BE26AD73B2D5051698CA (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * (*Animation_GetStateAtIndex_mC1F37F66327704F8DD88BE26AD73B2D5051698CA_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, int32_t);
	static Animation_GetStateAtIndex_mC1F37F66327704F8DD88BE26AD73B2D5051698CA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateAtIndex_mC1F37F66327704F8DD88BE26AD73B2D5051698CA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateAtIndex(System.Int32)");
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * retVal = _il2cpp_icall_func(__this, ___index0);
	return retVal;
}
// System.Int32 UnityEngine.Animation::GetStateCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animation_GetStateCount_m9E1764870EAF179CD0D21E3FB5D2DB3086962650 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animation_GetStateCount_m9E1764870EAF179CD0D21E3FB5D2DB3086962650_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *);
	static Animation_GetStateCount_m9E1764870EAF179CD0D21E3FB5D2DB3086962650_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateCount_m9E1764870EAF179CD0D21E3FB5D2DB3086962650_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateCount()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Animation::get_animatePhysics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_get_animatePhysics_m923EC44ADFB100AAD3EE72A9F7C24A479958256E (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	typedef bool (*Animation_get_animatePhysics_m923EC44ADFB100AAD3EE72A9F7C24A479958256E_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *);
	static Animation_get_animatePhysics_m923EC44ADFB100AAD3EE72A9F7C24A479958256E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_get_animatePhysics_m923EC44ADFB100AAD3EE72A9F7C24A479958256E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::get_animatePhysics()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE90274D68218FACBF1EC2BBB177244F49E446E11 (Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C * __this, Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * ___outer0, const RuntimeMethod* method)
{
	{
		__this->set_m_CurrentIndex_1((-1));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * L_0 = ___outer0;
		__this->set_m_Outer_0(L_0);
		return;
	}
}
// System.Object UnityEngine.Animation/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m7E017EDF8269D883AB26739301E19787C385F315 (Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * L_0 = __this->get_m_Outer_0();
		int32_t L_1 = __this->get_m_CurrentIndex_1();
		NullCheck(L_0);
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_2 = Animation_GetStateAtIndex_mC1F37F66327704F8DD88BE26AD73B2D5051698CA(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Animation/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC4528CDA0A6BA22B421D8ABB26F0C1843B710195 (Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * L_0 = __this->get_m_Outer_0();
		NullCheck(L_0);
		int32_t L_1 = Animation_GetStateCount_m9E1764870EAF179CD0D21E3FB5D2DB3086962650(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = __this->get_m_CurrentIndex_1();
		__this->set_m_CurrentIndex_1(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		int32_t L_3 = __this->get_m_CurrentIndex_1();
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.Animation/Enumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mB6DD93470BE4B0948C32BE2919B76788E5C1C1D3 (Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_CurrentIndex_1((-1));
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
// System.Void UnityEngine.AnimationClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip__ctor_mD6CF66D5B878C5D717E86A241A6D3C16542427C3 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	{
		Motion__ctor_mAED8097767A0FD4F3B5A8E687D569E33DB6F8443(__this, /*hidden argument*/NULL);
		AnimationClip_Internal_CreateAnimationClip_m87F8D1F5CA59266F288F97C2D1B041EE161C047C(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_Internal_CreateAnimationClip_m87F8D1F5CA59266F288F97C2D1B041EE161C047C (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___self0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_Internal_CreateAnimationClip_m87F8D1F5CA59266F288F97C2D1B041EE161C047C_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_Internal_CreateAnimationClip_m87F8D1F5CA59266F288F97C2D1B041EE161C047C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_Internal_CreateAnimationClip_m87F8D1F5CA59266F288F97C2D1B041EE161C047C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)");
	_il2cpp_icall_func(___self0);
}
// System.Single UnityEngine.AnimationClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationClip_get_length_m55DCD61003D76E19AB0B3649A3C0F072D829CD4A (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef float (*AnimationClip_get_length_m55DCD61003D76E19AB0B3649A3C0F072D829CD4A_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_get_length_m55DCD61003D76E19AB0B3649A3C0F072D829CD4A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_length_m55DCD61003D76E19AB0B3649A3C0F072D829CD4A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_length()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationClip::SetCurve(System.String,System.Type,System.String,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_SetCurve_m2012B8495566C4CFB7AAD00564499A101B0394D9 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, String_t* ___relativePath0, Type_t * ___type1, String_t* ___propertyName2, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curve3, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_SetCurve_m2012B8495566C4CFB7AAD00564499A101B0394D9_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *, String_t*, Type_t *, String_t*, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *);
	static AnimationClip_SetCurve_m2012B8495566C4CFB7AAD00564499A101B0394D9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_SetCurve_m2012B8495566C4CFB7AAD00564499A101B0394D9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::SetCurve(System.String,System.Type,System.String,UnityEngine.AnimationCurve)");
	_il2cpp_icall_func(__this, ___relativePath0, ___type1, ___propertyName2, ___curve3);
}
// System.Void UnityEngine.AnimationClip::EnsureQuaternionContinuity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_EnsureQuaternionContinuity_m0C59F0A551284C16DA1C594266BB1BE00160006F (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_EnsureQuaternionContinuity_m0C59F0A551284C16DA1C594266BB1BE00160006F_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_EnsureQuaternionContinuity_m0C59F0A551284C16DA1C594266BB1BE00160006F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_EnsureQuaternionContinuity_m0C59F0A551284C16DA1C594266BB1BE00160006F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::EnsureQuaternionContinuity()");
	_il2cpp_icall_func(__this);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke(const AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F& unmarshaled, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke_back(const AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_pinvoke& marshaled, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F& unmarshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke_cleanup(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_com(const AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F& unmarshaled, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_com& marshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_com_back(const AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_com& marshaled, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F& unmarshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_com_cleanup(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.AnimationEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationEvent__ctor_m6C228EB716B6B53DE2665091C056428EFB90897F (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationEvent__ctor_m6C228EB716B6B53DE2665091C056428EFB90897F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		__this->set_m_Time_0((0.0f));
		__this->set_m_FunctionName_1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_m_StringParameter_2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_m_ObjectReferenceParameter_3((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL);
		__this->set_m_FloatParameter_4((0.0f));
		__this->set_m_IntParameter_5(0);
		__this->set_m_MessageOptions_6(0);
		__this->set_m_Source_7(0);
		__this->set_m_StateSender_8((AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 *)NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AnimationState::set_normalizedTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_set_normalizedTime_mC643FCA7FFB6521D247D3BE9B771E4B5650B69DA (AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationState_set_normalizedTime_mC643FCA7FFB6521D247D3BE9B771E4B5650B69DA_ftn) (AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 *, float);
	static AnimationState_set_normalizedTime_mC643FCA7FFB6521D247D3BE9B771E4B5650B69DA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_normalizedTime_mC643FCA7FFB6521D247D3BE9B771E4B5650B69DA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_normalizedTime(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AnimationState::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_set_layer_m93A0868EF90112F5C3D98AFC68799E03CDDE17B0 (AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationState_set_layer_m93A0868EF90112F5C3D98AFC68799E03CDDE17B0_ftn) (AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 *, int32_t);
	static AnimationState_set_layer_m93A0868EF90112F5C3D98AFC68799E03CDDE17B0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_layer_m93A0868EF90112F5C3D98AFC68799E03CDDE17B0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AnimationState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState__ctor_mD763623A91BDF7F4AA95507A977F815103284E06 (AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * __this, const RuntimeMethod* method)
{
	{
		TrackedReference__ctor_m3F870F888D748E167296D3434305F6769CDB5B04(__this, /*hidden argument*/NULL);
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationClipPlayable_GetHandle_mB1B706B9ADB194766DC938C332469AC698AD0D9E (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationClipPlayable_GetHandle_mB1B706B9ADB194766DC938C332469AC698AD0D9E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 *>(__this + _offset);
	return AnimationClipPlayable_GetHandle_mB1B706B9ADB194766DC938C332469AC698AD0D9E(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_Equals_m06BA3E1C3AE0CC205C8531CCF6596C99C8D927EE (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * __this, AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationClipPlayable_Equals_m06BA3E1C3AE0CC205C8531CCF6596C99C8D927EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationClipPlayable_GetHandle_mB1B706B9ADB194766DC938C332469AC698AD0D9E((AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AnimationClipPlayable_GetHandle_mB1B706B9ADB194766DC938C332469AC698AD0D9E((AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationClipPlayable_Equals_m06BA3E1C3AE0CC205C8531CCF6596C99C8D927EE_AdjustorThunk (RuntimeObject * __this, AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 *>(__this + _offset);
	return AnimationClipPlayable_Equals_m06BA3E1C3AE0CC205C8531CCF6596C99C8D927EE(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_mC3942EB4B00EAC10035AA7EBE23CA679C8790D20((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_mC3942EB4B00EAC10035AA7EBE23CA679C8790D20_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_4 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_4, _stringLiteral6502516F734DD885173E353D47AAEB82BC7070A9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C_RuntimeMethod_var);
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 *>(__this + _offset);
	AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationLayerMixerPlayable_GetHandle_mD4159505D29B17D507599ED6FA3BEC1370691DB8 (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationLayerMixerPlayable_GetHandle_mD4159505D29B17D507599ED6FA3BEC1370691DB8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 *>(__this + _offset);
	return AnimationLayerMixerPlayable_GetHandle_mD4159505D29B17D507599ED6FA3BEC1370691DB8(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_Equals_m0A6A86FEDCE98E63B84BD01D0D362D03EA733E59 (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * __this, AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationLayerMixerPlayable_Equals_m0A6A86FEDCE98E63B84BD01D0D362D03EA733E59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationLayerMixerPlayable_GetHandle_mD4159505D29B17D507599ED6FA3BEC1370691DB8((AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AnimationLayerMixerPlayable_GetHandle_mD4159505D29B17D507599ED6FA3BEC1370691DB8((AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationLayerMixerPlayable_Equals_m0A6A86FEDCE98E63B84BD01D0D362D03EA733E59_AdjustorThunk (RuntimeObject * __this, AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 *>(__this + _offset);
	return AnimationLayerMixerPlayable_Equals_m0A6A86FEDCE98E63B84BD01D0D362D03EA733E59(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__cctor_m3712A5D44F275E70624C0D734C9CED9BD12D0AC9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationLayerMixerPlayable__cctor_m3712A5D44F275E70624C0D734C9CED9BD12D0AC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_StaticFields*)il2cpp_codegen_static_fields_for(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43 (AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_m172B8D6DA48AD49F0740833F7D18CD468B072E5E((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_m172B8D6DA48AD49F0740833F7D18CD468B072E5E_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_4 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_4, _stringLiteral35482DF98E7DEED2FC6BDE9BDD1E273E27CF1F2C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43_RuntimeMethod_var);
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * _thisAdjusted = reinterpret_cast<AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A *>(__this + _offset);
	AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMixerPlayable_GetHandle_mC5939239D7C47C6E0FF4EC72021EE793863BC567 (AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMixerPlayable_GetHandle_mC5939239D7C47C6E0FF4EC72021EE793863BC567_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * _thisAdjusted = reinterpret_cast<AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A *>(__this + _offset);
	return AnimationMixerPlayable_GetHandle_mC5939239D7C47C6E0FF4EC72021EE793863BC567(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_Equals_m7CB1B61B74A6BE00A35AD072490F07D4C7A17B0F (AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * __this, AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMixerPlayable_Equals_m7CB1B61B74A6BE00A35AD072490F07D4C7A17B0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationMixerPlayable_GetHandle_mC5939239D7C47C6E0FF4EC72021EE793863BC567((AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A *)__this, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AnimationMixerPlayable_GetHandle_mC5939239D7C47C6E0FF4EC72021EE793863BC567((AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationMixerPlayable_Equals_m7CB1B61B74A6BE00A35AD072490F07D4C7A17B0F_AdjustorThunk (RuntimeObject * __this, AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * _thisAdjusted = reinterpret_cast<AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A *>(__this + _offset);
	return AnimationMixerPlayable_Equals_m7CB1B61B74A6BE00A35AD072490F07D4C7A17B0F(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__cctor_m820F56C1D4257D4F5446BD66402D4428E0DF8E3E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMixerPlayable__cctor_m820F56C1D4257D4F5446BD66402D4428E0DF8E3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_StaticFields*)il2cpp_codegen_static_fields_for(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6 (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_mCC63F3E0D55A21A9E56D80D26150AD2B78C6EC50((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_mCC63F3E0D55A21A9E56D80D26150AD2B78C6EC50_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_4 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_4, _stringLiteral59BDBA16999CF4EF3F7712740907B2C5E860459C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6_RuntimeMethod_var);
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * _thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC *>(__this + _offset);
	AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMotionXToDeltaPlayable_GetHandle_mE36F0671962333EAF5B434A062930D9E76A79076 (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMotionXToDeltaPlayable_GetHandle_mE36F0671962333EAF5B434A062930D9E76A79076_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * _thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC *>(__this + _offset);
	return AnimationMotionXToDeltaPlayable_GetHandle_mE36F0671962333EAF5B434A062930D9E76A79076(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_Equals_m53B4AAB54D7F3633C3954056F8C334BB8B7D590E (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * __this, AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMotionXToDeltaPlayable_Equals_m53B4AAB54D7F3633C3954056F8C334BB8B7D590E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationMotionXToDeltaPlayable_GetHandle_mE36F0671962333EAF5B434A062930D9E76A79076((AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC *)__this, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AnimationMotionXToDeltaPlayable_GetHandle_mE36F0671962333EAF5B434A062930D9E76A79076((AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationMotionXToDeltaPlayable_Equals_m53B4AAB54D7F3633C3954056F8C334BB8B7D590E_AdjustorThunk (RuntimeObject * __this, AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * _thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC *>(__this + _offset);
	return AnimationMotionXToDeltaPlayable_Equals_m53B4AAB54D7F3633C3954056F8C334BB8B7D590E(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__cctor_mCB948CE31E0AAEC53CB1D6746D091604413C5EEE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMotionXToDeltaPlayable__cctor_mCB948CE31E0AAEC53CB1D6746D091604413C5EEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_StaticFields*)il2cpp_codegen_static_fields_for(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607 (AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_mF434E44E279E1DBD0887921B38A5C57812B1371A((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_mF434E44E279E1DBD0887921B38A5C57812B1371A_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_4 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_4, _stringLiteral04E4E32AA834F9BA9336C5388E9470F196EB0891, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607_RuntimeMethod_var);
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * _thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E *>(__this + _offset);
	AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationOffsetPlayable_GetHandle_m5213878A6D7F29801F74CD3A8B866D444793665E (AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationOffsetPlayable_GetHandle_m5213878A6D7F29801F74CD3A8B866D444793665E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * _thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E *>(__this + _offset);
	return AnimationOffsetPlayable_GetHandle_m5213878A6D7F29801F74CD3A8B866D444793665E(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_Equals_m30B207FC6287EABF6FC1FDA47784322A3ABB98DF (AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * __this, AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationOffsetPlayable_Equals_m30B207FC6287EABF6FC1FDA47784322A3ABB98DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationOffsetPlayable_GetHandle_m5213878A6D7F29801F74CD3A8B866D444793665E((AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E *)(&___other0), /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject * L_3 = Box(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_il2cpp_TypeInfo_var, __this);
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_2);
		*__this = *(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E *)UnBox(L_3);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationOffsetPlayable_Equals_m30B207FC6287EABF6FC1FDA47784322A3ABB98DF_AdjustorThunk (RuntimeObject * __this, AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * _thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E *>(__this + _offset);
	return AnimationOffsetPlayable_Equals_m30B207FC6287EABF6FC1FDA47784322A3ABB98DF(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__cctor_m174AD41778526FA15E41C6A11303A4F190A4CEA6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationOffsetPlayable__cctor_m174AD41778526FA15E41C6A11303A4F190A4CEA6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_StaticFields*)il2cpp_codegen_static_fields_for(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationPosePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D (AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_m35A103AAF8E80E7C007214546C71B4E90901C2A2((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_m35A103AAF8E80E7C007214546C71B4E90901C2A2_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_4 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_4, _stringLiteralFCF5307272E4A4426DDA9E4E6930E2B834B95B2C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D_RuntimeMethod_var);
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * _thisAdjusted = reinterpret_cast<AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 *>(__this + _offset);
	AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationPosePlayable_GetHandle_m9D856E83755A447ABCD6C0D8FE011AFF659A016E (AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationPosePlayable_GetHandle_m9D856E83755A447ABCD6C0D8FE011AFF659A016E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * _thisAdjusted = reinterpret_cast<AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 *>(__this + _offset);
	return AnimationPosePlayable_GetHandle_m9D856E83755A447ABCD6C0D8FE011AFF659A016E(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationPosePlayable::Equals(UnityEngine.Animations.AnimationPosePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPosePlayable_Equals_m4417430115DCF9B39D3E4B64424120CE7E555961 (AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * __this, AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationPosePlayable_Equals_m4417430115DCF9B39D3E4B64424120CE7E555961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationPosePlayable_GetHandle_m9D856E83755A447ABCD6C0D8FE011AFF659A016E((AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 *)(&___other0), /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject * L_3 = Box(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_il2cpp_TypeInfo_var, __this);
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_2);
		*__this = *(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 *)UnBox(L_3);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationPosePlayable_Equals_m4417430115DCF9B39D3E4B64424120CE7E555961_AdjustorThunk (RuntimeObject * __this, AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * _thisAdjusted = reinterpret_cast<AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 *>(__this + _offset);
	return AnimationPosePlayable_Equals_m4417430115DCF9B39D3E4B64424120CE7E555961(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationPosePlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__cctor_mDE42A26BC2624427AA8086C4AB69FB531949153F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationPosePlayable__cctor_mDE42A26BC2624427AA8086C4AB69FB531949153F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_StaticFields*)il2cpp_codegen_static_fields_for(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1 (AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_m1E16540EE6283270E3DE85D46C3BE1F8B85E73C2((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_m1E16540EE6283270E3DE85D46C3BE1F8B85E73C2_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_4 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_4, _stringLiteralB9DF0CBB713EC6E9DFD70C9BFB0B820148433428, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1_RuntimeMethod_var);
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * _thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B *>(__this + _offset);
	AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationRemoveScalePlayable_GetHandle_mA5063F10E01C8546F88E9ABE07B71373BF290EED (AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationRemoveScalePlayable_GetHandle_mA5063F10E01C8546F88E9ABE07B71373BF290EED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * _thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B *>(__this + _offset);
	return AnimationRemoveScalePlayable_GetHandle_mA5063F10E01C8546F88E9ABE07B71373BF290EED(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::Equals(UnityEngine.Animations.AnimationRemoveScalePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_Equals_m58B139243E3B27CE86CA4CC470895BF719CD9BAD (AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * __this, AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationRemoveScalePlayable_Equals_m58B139243E3B27CE86CA4CC470895BF719CD9BAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationRemoveScalePlayable_GetHandle_mA5063F10E01C8546F88E9ABE07B71373BF290EED((AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B *)(&___other0), /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject * L_3 = Box(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_il2cpp_TypeInfo_var, __this);
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_2);
		*__this = *(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B *)UnBox(L_3);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationRemoveScalePlayable_Equals_m58B139243E3B27CE86CA4CC470895BF719CD9BAD_AdjustorThunk (RuntimeObject * __this, AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * _thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B *>(__this + _offset);
	return AnimationRemoveScalePlayable_Equals_m58B139243E3B27CE86CA4CC470895BF719CD9BAD(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__cctor_m7BA13559FDA2BF8E061839B333085C402DED6829 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationRemoveScalePlayable__cctor_m7BA13559FDA2BF8E061839B333085C402DED6829_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_StaticFields*)il2cpp_codegen_static_fields_for(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__ctor_mDA5EA55852F0A1079954B2DCB90398C4D7FFC412 (AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationScriptPlayable__ctor_mDA5EA55852F0A1079954B2DCB90398C4D7FFC412_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_m1767ADED196AAA8B4D6FBB9313003E33A967E799((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_m1767ADED196AAA8B4D6FBB9313003E33A967E799_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_4 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_4, _stringLiteral4518459D262696CF9B5DAB1E0A1BC3AC2F9BD9DF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, AnimationScriptPlayable__ctor_mDA5EA55852F0A1079954B2DCB90398C4D7FFC412_RuntimeMethod_var);
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationScriptPlayable__ctor_mDA5EA55852F0A1079954B2DCB90398C4D7FFC412_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E * _thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E *>(__this + _offset);
	AnimationScriptPlayable__ctor_mDA5EA55852F0A1079954B2DCB90398C4D7FFC412(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationScriptPlayable_GetHandle_m661730E4C17F10A8D3C46492A9AD1D61EF0F4315 (AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationScriptPlayable_GetHandle_m661730E4C17F10A8D3C46492A9AD1D61EF0F4315_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E * _thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E *>(__this + _offset);
	return AnimationScriptPlayable_GetHandle_m661730E4C17F10A8D3C46492A9AD1D61EF0F4315(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::Equals(UnityEngine.Animations.AnimationScriptPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_Equals_m4995D1AD353F43FE3FA854A8384601F58156E69E (AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E * __this, AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationScriptPlayable_Equals_m4995D1AD353F43FE3FA854A8384601F58156E69E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationScriptPlayable_GetHandle_m661730E4C17F10A8D3C46492A9AD1D61EF0F4315((AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E *)__this, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AnimationScriptPlayable_GetHandle_m661730E4C17F10A8D3C46492A9AD1D61EF0F4315((AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationScriptPlayable_Equals_m4995D1AD353F43FE3FA854A8384601F58156E69E_AdjustorThunk (RuntimeObject * __this, AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E * _thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E *>(__this + _offset);
	return AnimationScriptPlayable_Equals_m4995D1AD353F43FE3FA854A8384601F58156E69E(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__cctor_m3FA9E1E2E1EADACBC718598BEFECB25F867E454E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationScriptPlayable__cctor_m3FA9E1E2E1EADACBC718598BEFECB25F867E454E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationScriptPlayable__ctor_mDA5EA55852F0A1079954B2DCB90398C4D7FFC412((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_StaticFields*)il2cpp_codegen_static_fields_for(AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		__this->set_m_Handle_0(L_0);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = ___handle0;
		AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96((AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B *)__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B *>(__this + _offset);
	AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimatorControllerPlayable_GetHandle_mB83731910E1534BECA36F64BA22AA68A71D08CA8 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimatorControllerPlayable_GetHandle_mB83731910E1534BECA36F64BA22AA68A71D08CA8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B *>(__this + _offset);
	return AnimatorControllerPlayable_GetHandle_mB83731910E1534BECA36F64BA22AA68A71D08CA8(_thisAdjusted, method);
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_0 = __this->get_address_of_m_Handle_0();
		bool L_1 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_3 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_3, _stringLiteral7E3996230D9AF0349B43FF7B536FC25AF0C19C71, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96_RuntimeMethod_var);
	}

IL_001b:
	{
		bool L_4 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		bool L_6 = PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_mC6A8CB67F39B0B39BF77ED6177B3C2DF1BC91533((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_mC6A8CB67F39B0B39BF77ED6177B3C2DF1BC91533_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_8 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_8, _stringLiteralB47C26932C83DD7E0C54FC87EDDE2F3B50E5104C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96_RuntimeMethod_var);
	}

IL_0040:
	{
	}

IL_0041:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_9 = ___handle0;
		__this->set_m_Handle_0(L_9);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B *>(__this + _offset);
	AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96(_thisAdjusted, ___handle0, method);
}
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m04685CCA5A5FC388A0387D3453A677C0CB47D173 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerPlayable_Equals_m04685CCA5A5FC388A0387D3453A677C0CB47D173_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimatorControllerPlayable_GetHandle_mB83731910E1534BECA36F64BA22AA68A71D08CA8((AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B *)__this, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AnimatorControllerPlayable_GetHandle_mB83731910E1534BECA36F64BA22AA68A71D08CA8((AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimatorControllerPlayable_Equals_m04685CCA5A5FC388A0387D3453A677C0CB47D173_AdjustorThunk (RuntimeObject * __this, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B *>(__this + _offset);
	return AnimatorControllerPlayable_Equals_m04685CCA5A5FC388A0387D3453A677C0CB47D173(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__cctor_m6FCC197F3BF33EAFC37D5217617FCDC64E8B304E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerPlayable__cctor_m6FCC197F3BF33EAFC37D5217617FCDC64E8B304E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897((&L_1), L_0, /*hidden argument*/NULL);
		((AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_StaticFields*)il2cpp_codegen_static_fields_for(AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Animator::get_isHuman()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_isHuman_mFD0E2CDDB50DE69A6048B2D7575EE1E9F4E22AE9 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_isHuman_mFD0E2CDDB50DE69A6048B2D7575EE1E9F4E22AE9_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_isHuman_mFD0E2CDDB50DE69A6048B2D7575EE1E9F4E22AE9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isHuman_mFD0E2CDDB50DE69A6048B2D7575EE1E9F4E22AE9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isHuman()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Animator::get_hasRootMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_hasRootMotion_mD77AF741113D388C6AB56C463F66C2AA25E4377A (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_hasRootMotion_mD77AF741113D388C6AB56C463F66C2AA25E4377A_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_hasRootMotion_mD77AF741113D388C6AB56C463F66C2AA25E4377A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasRootMotion_mD77AF741113D388C6AB56C463F66C2AA25E4377A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasRootMotion()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.Animator::get_humanScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_humanScale_m3D0BCB1800320DB76758593AD60D433937E5D352 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef float (*Animator_get_humanScale_m3D0BCB1800320DB76758593AD60D433937E5D352_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_humanScale_m3D0BCB1800320DB76758593AD60D433937E5D352_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_humanScale_m3D0BCB1800320DB76758593AD60D433937E5D352_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_humanScale()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Animator::get_isInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_isInitialized_mC4B380F4376B55D1D019C2A9650AA31C6090CA9F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_isInitialized_mC4B380F4376B55D1D019C2A9650AA31C6090CA9F_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_isInitialized_mC4B380F4376B55D1D019C2A9650AA31C6090CA9F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isInitialized_mC4B380F4376B55D1D019C2A9650AA31C6090CA9F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isInitialized()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.Animator::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloat_m1C8B853CA82031CE4775FBDCDEDDB3C9E702695F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		String_t* L_0 = ___name0;
		float L_1 = Animator_GetFloatString_mB1518F1964EE15625814C558BB3565330491F3C2(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_mE4C29F6980EBBBD954637721E6E13A0BE2B13C43 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		float L_1 = ___value1;
		Animator_SetFloatString_mE425F554C50682E41D362D7593B3B069609B7091(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_mF9C412D31B389EC3305BB8FC299A09AA95A8A415 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, float ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		float L_1 = ___value1;
		Animator_SetFloatID_mC8049D4DC5D19929FF51172902E35D496F9EB805(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		bool L_1 = ___value1;
		Animator_SetBoolString_mA61F1A44D13EF82A7C2CAF466EBA81E65D054D46(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m706B7DB1DAED4AE10ECD1BF6876FB0B524082A10 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		bool L_1 = ___value1;
		Animator_SetBoolID_m03BC09B1F267F9B07FF9F8EDDBAA4D0AA8D61EF0(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetInteger(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_m89D0F15197F3B4D75E02194B432685F68F458B70 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		int32_t L_1 = ___value1;
		Animator_SetIntegerID_mF9CF13102019C3714F927B3827EEF4473C0AB5BA(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m68D29B7FA54C2F230F5AD780D462612B18E74245 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		Animator_SetTriggerString_m77CE57996467D0C973FA2D0CB4DF87BD062C8A1E(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2ED217B225743B9C9EB3E7B0B8905FFEEB221002 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		Animator_SetTriggerID_mD08597B567A91FC132350A343E69A084EC958040(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m70120C9A00EA482BF0880D2C02EC814CE3D71FD1 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		Animator_ResetTriggerString_m31B233F948D7551D220FEDA56B002E6724B89851(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Animator_get_deltaPosition_m85287AA699C50B6AA7489CD313F8CFED5D998533 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::get_deltaRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Animator_get_deltaRotation_m933C75B70C9BB65406836F97FDE973EAA6E1F7A3 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_deltaRotation_Injected_mC688777CD9ACA48B55E760856F0B653047238F08(__this, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Animator::set_applyRootMotion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_applyRootMotion_mD25B7FCFCDAD7C5D107E860D2E46AB765271A982 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_applyRootMotion_mD25B7FCFCDAD7C5D107E860D2E46AB765271A982_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, bool);
	static Animator_set_applyRootMotion_mD25B7FCFCDAD7C5D107E860D2E46AB765271A982_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_applyRootMotion_mD25B7FCFCDAD7C5D107E860D2E46AB765271A982_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_applyRootMotion(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.AnimatorUpdateMode UnityEngine.Animator::get_updateMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_updateMode_m0116C4E46BD6837B24F75012D7FF8ECEA9525017 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_get_updateMode_m0116C4E46BD6837B24F75012D7FF8ECEA9525017_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_updateMode_m0116C4E46BD6837B24F75012D7FF8ECEA9525017_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_updateMode_m0116C4E46BD6837B24F75012D7FF8ECEA9525017_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_updateMode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_updateMode(UnityEngine.AnimatorUpdateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_updateMode_mE9B6BEDF6F0684E86ED34A0C748A759C218EA96B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_updateMode_mE9B6BEDF6F0684E86ED34A0C748A759C218EA96B_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_set_updateMode_mE9B6BEDF6F0684E86ED34A0C748A759C218EA96B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_updateMode_mE9B6BEDF6F0684E86ED34A0C748A759C218EA96B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_updateMode(UnityEngine.AnimatorUpdateMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::SetIKPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKPosition_m2A57FAB29642C1C7E19F85F0DFD5421DA32598C4 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goalPosition1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___goalPosition1;
		Animator_SetGoalPosition_m27E296D914F30F2C0BAE57149A4B7E430959E61F(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_m27E296D914F30F2C0BAE57149A4B7E430959E61F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goalPosition1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___goal0;
		Animator_SetGoalPosition_Injected_m3FCA5A1E8B603902FDEC306CF4324BC4551D3737(__this, L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___goalPosition1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetIKRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKRotation_mE871B19486D3E41AF8A361EF1C0393D22F5F0E15 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goalRotation1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___goalRotation1;
		Animator_SetGoalRotation_mEF3F4FDFC5C77775B3DF86C1D2A213AA2FCEA465(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_mEF3F4FDFC5C77775B3DF86C1D2A213AA2FCEA465 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goalRotation1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___goal0;
		Animator_SetGoalRotation_Injected_m37692B68D8CC4D92559553F9AAE52D714C4699A9(__this, L_0, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___goalRotation1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetIKPositionWeight(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKPositionWeight_m443110C146EEBAFFC49C0194A721070A2D9F2D10 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		float L_1 = ___value1;
		Animator_SetGoalWeightPosition_m890B8E9CCFF48C094B5E34EE35CC105567F83481(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalWeightPosition(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalWeightPosition_m890B8E9CCFF48C094B5E34EE35CC105567F83481 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetGoalWeightPosition_m890B8E9CCFF48C094B5E34EE35CC105567F83481_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, float);
	static Animator_SetGoalWeightPosition_m890B8E9CCFF48C094B5E34EE35CC105567F83481_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalWeightPosition_m890B8E9CCFF48C094B5E34EE35CC105567F83481_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalWeightPosition(UnityEngine.AvatarIKGoal,System.Single)");
	_il2cpp_icall_func(__this, ___goal0, ___value1);
}
// System.Void UnityEngine.Animator::SetIKRotationWeight(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKRotationWeight_m3730BB1FF4712D6863B7A32AA2096821CEC3A8CE (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		float L_1 = ___value1;
		Animator_SetGoalWeightRotation_mC32F9430FA93AD28AC309F724398A1CAAEF88904(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalWeightRotation(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalWeightRotation_mC32F9430FA93AD28AC309F724398A1CAAEF88904 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetGoalWeightRotation_mC32F9430FA93AD28AC309F724398A1CAAEF88904_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, float);
	static Animator_SetGoalWeightRotation_mC32F9430FA93AD28AC309F724398A1CAAEF88904_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalWeightRotation_mC32F9430FA93AD28AC309F724398A1CAAEF88904_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalWeightRotation(UnityEngine.AvatarIKGoal,System.Single)");
	_il2cpp_icall_func(__this, ___goal0, ___value1);
}
// System.Void UnityEngine.Animator::SetLookAtPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPosition_mDE13BABEC48388F30A268099BBE6E6E9780BA8F8 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtPosition0, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___lookAtPosition0;
		Animator_SetLookAtPositionInternal_mD621D4C229D132ECD57B1D9F90783A16FEBA5A84(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtPositionInternal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_mD621D4C229D132ECD57B1D9F90783A16FEBA5A84 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtPosition0, const RuntimeMethod* method)
{
	{
		Animator_SetLookAtPositionInternal_Injected_mE43763E88F5BEA74AE47D478B1137A48090A38DB(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___lookAtPosition0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_m6211EF8CF73CD7747A54A8F749099647921A2730 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___weight0, float ___bodyWeight1, float ___headWeight2, float ___eyesWeight3, float ___clampWeight4, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		float L_0 = ___weight0;
		float L_1 = ___bodyWeight1;
		float L_2 = ___headWeight2;
		float L_3 = ___eyesWeight3;
		float L_4 = ___clampWeight4;
		Animator_SetLookAtWeightInternal_mFE3EA212AD2159F6A66BF80D30385227E836A4BE(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeightInternal(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeightInternal_mFE3EA212AD2159F6A66BF80D30385227E836A4BE (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___weight0, float ___bodyWeight1, float ___headWeight2, float ___eyesWeight3, float ___clampWeight4, const RuntimeMethod* method)
{
	typedef void (*Animator_SetLookAtWeightInternal_mFE3EA212AD2159F6A66BF80D30385227E836A4BE_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, float, float, float, float, float);
	static Animator_SetLookAtWeightInternal_mFE3EA212AD2159F6A66BF80D30385227E836A4BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLookAtWeightInternal_mFE3EA212AD2159F6A66BF80D30385227E836A4BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLookAtWeightInternal(System.Single,System.Single,System.Single,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___weight0, ___bodyWeight1, ___headWeight2, ___eyesWeight3, ___clampWeight4);
}
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLayerWeight_mCD79BBDCD7DD47929E00C5EA69DEF2573EAD939F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, float ___weight1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetLayerWeight_mCD79BBDCD7DD47929E00C5EA69DEF2573EAD939F_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, float);
	static Animator_SetLayerWeight_mCD79BBDCD7DD47929E00C5EA69DEF2573EAD939F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLayerWeight_mCD79BBDCD7DD47929E00C5EA69DEF2573EAD939F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___layerIndex0, ___weight1);
}
// System.Void UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorStateInfo_mBDC199173734AF60218E4727E74F689180BC8D8B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, int32_t ___stateInfoIndex1, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * ___info2, const RuntimeMethod* method)
{
	typedef void (*Animator_GetAnimatorStateInfo_mBDC199173734AF60218E4727E74F689180BC8D8B_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, int32_t, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *);
	static Animator_GetAnimatorStateInfo_mBDC199173734AF60218E4727E74F689180BC8D8B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorStateInfo_mBDC199173734AF60218E4727E74F689180BC8D8B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)");
	_il2cpp_icall_func(__this, ___layerIndex0, ___stateInfoIndex1, ___info2);
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  Animator_GetCurrentAnimatorStateInfo_mBE5ED0D60A6F5CD0EDD40AF1494098D4E7BF84F2 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___layerIndex0;
		Animator_GetAnimatorStateInfo_mBDC199173734AF60218E4727E74F689180BC8D8B(__this, L_0, 0, (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *)(&V_0), /*hidden argument*/NULL);
		AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  L_1 = V_0;
		V_1 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  L_2 = V_1;
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_pivotPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Animator_get_pivotPosition_mD3E0AFD85D3DC0B1F14335F8AEDD3C2BA0FC2EF7 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_pivotPosition_Injected_mB1F3E5A4C30ACA150523947ADE54820B5AA03C68(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Animator::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_speed_mEA558D196D84684744A642A56AFBF22F16448813 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_speed_mEA558D196D84684744A642A56AFBF22F16448813_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, float);
	static Animator_set_speed_mEA558D196D84684744A642A56AFBF22F16448813_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_speed_mEA558D196D84684744A642A56AFBF22F16448813_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_speed(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_m5DED42029636028ECBB0980C1EEFDC759C820C82 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		String_t* L_0 = ___stateName0;
		float L_1 = ___normalizedTransitionDuration1;
		int32_t L_2 = ___layer2;
		float L_3 = ___normalizedTimeOffset3;
		float L_4 = V_0;
		Animator_CrossFade_mD8D1644B1A474D3B6A0C80EE9457EB1A6CC9A13C(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_m0CA5B115CEDD1B61AB99FD55ACCB0BD19A7414F9 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, float ___normalizedTransitionDuration1, int32_t ___layer2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.0f);
		V_1 = (-std::numeric_limits<float>::infinity());
		String_t* L_0 = ___stateName0;
		float L_1 = ___normalizedTransitionDuration1;
		int32_t L_2 = ___layer2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFade_mD8D1644B1A474D3B6A0C80EE9457EB1A6CC9A13C(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_mD8D1644B1A474D3B6A0C80EE9457EB1A6CC9A13C (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___stateName0;
		int32_t L_1 = Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F(L_0, /*hidden argument*/NULL);
		float L_2 = ___normalizedTransitionDuration1;
		int32_t L_3 = ___layer2;
		float L_4 = ___normalizedTimeOffset3;
		float L_5 = ___normalizedTransitionTime4;
		Animator_CrossFade_m7EA2465E0FFFEF1989F0F7286B6EB09FC0D8BD08(__this, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_m7EA2465E0FFFEF1989F0F7286B6EB09FC0D8BD08 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateHashName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method)
{
	typedef void (*Animator_CrossFade_m7EA2465E0FFFEF1989F0F7286B6EB09FC0D8BD08_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, float, int32_t, float, float);
	static Animator_CrossFade_m7EA2465E0FFFEF1989F0F7286B6EB09FC0D8BD08_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_CrossFade_m7EA2465E0FFFEF1989F0F7286B6EB09FC0D8BD08_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___stateHashName0, ___normalizedTransitionDuration1, ___layer2, ___normalizedTimeOffset3, ___normalizedTransitionTime4);
}
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m254CA699DF64E86856EC8C54D1A739E3C0A49793 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		V_1 = (-1);
		String_t* L_0 = ___stateName0;
		int32_t L_1 = V_1;
		float L_2 = V_0;
		Animator_Play_m1942D7FB37F84959D2C6A859E11F70791E95FA50(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m1942D7FB37F84959D2C6A859E11F70791E95FA50 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___stateName0;
		int32_t L_1 = Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___layer1;
		float L_3 = ___normalizedTime2;
		Animator_Play_m20B525F785DA59888E645125DB2DDC071E924F3E(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m20B525F785DA59888E645125DB2DDC071E924F3E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method)
{
	typedef void (*Animator_Play_m20B525F785DA59888E645125DB2DDC071E924F3E_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, int32_t, float);
	static Animator_Play_m20B525F785DA59888E645125DB2DDC071E924F3E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_Play_m20B525F785DA59888E645125DB2DDC071E924F3E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___stateNameHash0, ___layer1, ___normalizedTime2);
}
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransform(UnityEngine.HumanBodyBones)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Animator_GetBoneTransform_m44760610785563E713D82AC1FC0771B38CDBB16F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___humanBoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animator_GetBoneTransform_m44760610785563E713D82AC1FC0771B38CDBB16F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___humanBoneId0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___humanBoneId0;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)((int32_t)55)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = ((int32_t)((int32_t)55));
		RuntimeObject * L_4 = Box(HumanBodyBones_t84CDC0803F451E10186E589016F33D8404227892_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral3DB192144788919FBAC5C900D49CE390D3FFF2C0, L_4, /*hidden argument*/NULL);
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_6 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_mCCE2EFF47A0ACB4B2636F63140F94FCEA71A9BCA(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, Animator_GetBoneTransform_m44760610785563E713D82AC1FC0771B38CDBB16F_RuntimeMethod_var);
	}

IL_002b:
	{
		int32_t L_7 = ___humanBoneId0;
		int32_t L_8 = HumanTrait_GetBoneIndexFromMono_mEE030DE71CE19611BB3CC881799CCF3828D0928E(L_7, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Animator_GetBoneTransformInternal_mC33B048536349D354D9FE17D46377B8E467599E5(__this, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_003a;
	}

IL_003a:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = V_1;
		return L_10;
	}
}
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransformInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Animator_GetBoneTransformInternal_mC33B048536349D354D9FE17D46377B8E467599E5 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___humanBoneId0, const RuntimeMethod* method)
{
	typedef Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*Animator_GetBoneTransformInternal_mC33B048536349D354D9FE17D46377B8E467599E5_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_GetBoneTransformInternal_mC33B048536349D354D9FE17D46377B8E467599E5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoneTransformInternal_mC33B048536349D354D9FE17D46377B8E467599E5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoneTransformInternal(System.Int32)");
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * retVal = _il2cpp_icall_func(__this, ___humanBoneId0);
	return retVal;
}
// System.Void UnityEngine.Animator::set_cullingMode(UnityEngine.AnimatorCullingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_cullingMode_mE863324107A9723E49D300D42847D2B8B2280D0C (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_cullingMode_mE863324107A9723E49D300D42847D2B8B2280D0C_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_set_cullingMode_mE863324107A9723E49D300D42847D2B8B2280D0C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_cullingMode_mE863324107A9723E49D300D42847D2B8B2280D0C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_cullingMode(UnityEngine.AnimatorCullingMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * Animator_get_runtimeAnimatorController_m68C657899041D4CEF8958BBBDD39941647C2B53E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * (*Animator_get_runtimeAnimatorController_m68C657899041D4CEF8958BBBDD39941647C2B53E_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_runtimeAnimatorController_m68C657899041D4CEF8958BBBDD39941647C2B53E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_m68C657899041D4CEF8958BBBDD39941647C2B53E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Animator::get_hasBoundPlayables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_hasBoundPlayables_m283AF0BA9B841E3FD1ADC5541C41B936A9D1EB05 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_hasBoundPlayables_m283AF0BA9B841E3FD1ADC5541C41B936A9D1EB05_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_hasBoundPlayables_m283AF0BA9B841E3FD1ADC5541C41B936A9D1EB05_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasBoundPlayables_m283AF0BA9B841E3FD1ADC5541C41B936A9D1EB05_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasBoundPlayables()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F (String_t* ___name0, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F_ftn) (String_t*);
	static Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	int32_t retVal = _il2cpp_icall_func(___name0);
	return retVal;
}
// UnityEngine.Avatar UnityEngine.Animator::get_avatar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * Animator_get_avatar_mA5262FC4CE3DB7CAC1F3977B5FD1539107B469D1 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * (*Animator_get_avatar_mA5262FC4CE3DB7CAC1F3977B5FD1539107B469D1_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_avatar_mA5262FC4CE3DB7CAC1F3977B5FD1539107B469D1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_avatar_mA5262FC4CE3DB7CAC1F3977B5FD1539107B469D1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_avatar()");
	Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::CheckIfInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = Animator_get_logWarnings_mE755494196C56C22909C97125F48EC6A7CFED617(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = Animator_IsInIKPass_m464BA0915D3FF398D1356A65187DACD74633D973(__this, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral488203F92B6BE929591A420476D70A53696658FE, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Boolean UnityEngine.Animator::IsInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInIKPass_m464BA0915D3FF398D1356A65187DACD74633D973 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_IsInIKPass_m464BA0915D3FF398D1356A65187DACD74633D973_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_IsInIKPass_m464BA0915D3FF398D1356A65187DACD74633D973_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsInIKPass_m464BA0915D3FF398D1356A65187DACD74633D973_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsInIKPass()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatString_mE425F554C50682E41D362D7593B3B069609B7091 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetFloatString_mE425F554C50682E41D362D7593B3B069609B7091_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*, float);
	static Animator_SetFloatString_mE425F554C50682E41D362D7593B3B069609B7091_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatString_mE425F554C50682E41D362D7593B3B069609B7091_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatString(System.String,System.Single)");
	_il2cpp_icall_func(__this, ___name0, ___value1);
}
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatID_mC8049D4DC5D19929FF51172902E35D496F9EB805 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetFloatID_mC8049D4DC5D19929FF51172902E35D496F9EB805_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, float);
	static Animator_SetFloatID_mC8049D4DC5D19929FF51172902E35D496F9EB805_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatID_mC8049D4DC5D19929FF51172902E35D496F9EB805_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___id0, ___value1);
}
// System.Single UnityEngine.Animator::GetFloatString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloatString_mB1518F1964EE15625814C558BB3565330491F3C2 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef float (*Animator_GetFloatString_mB1518F1964EE15625814C558BB3565330491F3C2_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*);
	static Animator_GetFloatString_mB1518F1964EE15625814C558BB3565330491F3C2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetFloatString_mB1518F1964EE15625814C558BB3565330491F3C2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetFloatString(System.String)");
	float retVal = _il2cpp_icall_func(__this, ___name0);
	return retVal;
}
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolString_mA61F1A44D13EF82A7C2CAF466EBA81E65D054D46 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetBoolString_mA61F1A44D13EF82A7C2CAF466EBA81E65D054D46_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*, bool);
	static Animator_SetBoolString_mA61F1A44D13EF82A7C2CAF466EBA81E65D054D46_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolString_mA61F1A44D13EF82A7C2CAF466EBA81E65D054D46_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolString(System.String,System.Boolean)");
	_il2cpp_icall_func(__this, ___name0, ___value1);
}
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolID_m03BC09B1F267F9B07FF9F8EDDBAA4D0AA8D61EF0 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetBoolID_m03BC09B1F267F9B07FF9F8EDDBAA4D0AA8D61EF0_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, bool);
	static Animator_SetBoolID_m03BC09B1F267F9B07FF9F8EDDBAA4D0AA8D61EF0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolID_m03BC09B1F267F9B07FF9F8EDDBAA4D0AA8D61EF0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___id0, ___value1);
}
// System.Void UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIntegerID_mF9CF13102019C3714F927B3827EEF4473C0AB5BA (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetIntegerID_mF9CF13102019C3714F927B3827EEF4473C0AB5BA_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, int32_t);
	static Animator_SetIntegerID_mF9CF13102019C3714F927B3827EEF4473C0AB5BA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIntegerID_mF9CF13102019C3714F927B3827EEF4473C0AB5BA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___id0, ___value1);
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerString_m77CE57996467D0C973FA2D0CB4DF87BD062C8A1E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (*Animator_SetTriggerString_m77CE57996467D0C973FA2D0CB4DF87BD062C8A1E_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*);
	static Animator_SetTriggerString_m77CE57996467D0C973FA2D0CB4DF87BD062C8A1E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m77CE57996467D0C973FA2D0CB4DF87BD062C8A1E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
// System.Void UnityEngine.Animator::SetTriggerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerID_mD08597B567A91FC132350A343E69A084EC958040 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef void (*Animator_SetTriggerID_mD08597B567A91FC132350A343E69A084EC958040_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_SetTriggerID_mD08597B567A91FC132350A343E69A084EC958040_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerID_mD08597B567A91FC132350A343E69A084EC958040_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerID(System.Int32)");
	_il2cpp_icall_func(__this, ___id0);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerString_m31B233F948D7551D220FEDA56B002E6724B89851 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (*Animator_ResetTriggerString_m31B233F948D7551D220FEDA56B002E6724B89851_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*);
	static Animator_ResetTriggerString_m31B233F948D7551D220FEDA56B002E6724B89851_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m31B233F948D7551D220FEDA56B002E6724B89851_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
// System.Boolean UnityEngine.Animator::get_logWarnings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_logWarnings_mE755494196C56C22909C97125F48EC6A7CFED617 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_logWarnings_mE755494196C56C22909C97125F48EC6A7CFED617_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_logWarnings_mE755494196C56C22909C97125F48EC6A7CFED617_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_logWarnings_mE755494196C56C22909C97125F48EC6A7CFED617_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_logWarnings()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::get_deltaPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_deltaPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::get_deltaRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_deltaRotation_Injected_mC688777CD9ACA48B55E760856F0B653047238F08 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Animator_get_deltaRotation_Injected_mC688777CD9ACA48B55E760856F0B653047238F08_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static Animator_get_deltaRotation_Injected_mC688777CD9ACA48B55E760856F0B653047238F08_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_deltaRotation_Injected_mC688777CD9ACA48B55E760856F0B653047238F08_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_deltaRotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::SetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_Injected_m3FCA5A1E8B603902FDEC306CF4324BC4551D3737 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___goalPosition1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetGoalPosition_Injected_m3FCA5A1E8B603902FDEC306CF4324BC4551D3737_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_SetGoalPosition_Injected_m3FCA5A1E8B603902FDEC306CF4324BC4551D3737_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalPosition_Injected_m3FCA5A1E8B603902FDEC306CF4324BC4551D3737_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___goal0, ___goalPosition1);
}
// System.Void UnityEngine.Animator::SetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_Injected_m37692B68D8CC4D92559553F9AAE52D714C4699A9 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___goalRotation1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetGoalRotation_Injected_m37692B68D8CC4D92559553F9AAE52D714C4699A9_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static Animator_SetGoalRotation_Injected_m37692B68D8CC4D92559553F9AAE52D714C4699A9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalRotation_Injected_m37692B68D8CC4D92559553F9AAE52D714C4699A9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___goal0, ___goalRotation1);
}
// System.Void UnityEngine.Animator::SetLookAtPositionInternal_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_Injected_mE43763E88F5BEA74AE47D478B1137A48090A38DB (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___lookAtPosition0, const RuntimeMethod* method)
{
	typedef void (*Animator_SetLookAtPositionInternal_Injected_mE43763E88F5BEA74AE47D478B1137A48090A38DB_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_SetLookAtPositionInternal_Injected_mE43763E88F5BEA74AE47D478B1137A48090A38DB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLookAtPositionInternal_Injected_mE43763E88F5BEA74AE47D478B1137A48090A38DB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLookAtPositionInternal_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___lookAtPosition0);
}
// System.Void UnityEngine.Animator::get_pivotPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_pivotPosition_Injected_mB1F3E5A4C30ACA150523947ADE54820B5AA03C68 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Animator_get_pivotPosition_Injected_mB1F3E5A4C30ACA150523947ADE54820B5AA03C68_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_get_pivotPosition_Injected_mB1F3E5A4C30ACA150523947ADE54820B5AA03C68_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_pivotPosition_Injected_mB1F3E5A4C30ACA150523947ADE54820B5AA03C68_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_pivotPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.AnimatorOverrideController::OnInvalidateOverrideController(UnityEngine.AnimatorOverrideController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_OnInvalidateOverrideController_mA538F1349FCF3968C5042F2D8860114F51818CB2 (AnimatorOverrideController_t130F04B57E753FD4288EF3235699ABE7C88FF312 * ___controller0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		AnimatorOverrideController_t130F04B57E753FD4288EF3235699ABE7C88FF312 * L_0 = ___controller0;
		NullCheck(L_0);
		OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * L_1 = L_0->get_OnOverrideControllerDirty_4();
		V_0 = (bool)((!(((RuntimeObject*)(OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		AnimatorOverrideController_t130F04B57E753FD4288EF3235699ABE7C88FF312 * L_3 = ___controller0;
		NullCheck(L_3);
		OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * L_4 = L_3->get_OnOverrideControllerDirty_4();
		NullCheck(L_4);
		OnOverrideControllerDirtyCallback_Invoke_m002CFC2CE3C42A058380BE98F015E654D5F9F177(L_4, /*hidden argument*/NULL);
	}

IL_001a:
	{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E (OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback__ctor_m9277DED194C85B1C3B4C7ABBB1D54CCB43C724D8 (OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m002CFC2CE3C42A058380BE98F015E654D5F9F177 (OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnOverrideControllerDirtyCallback_BeginInvoke_m35CE43BF7D40E88192183CF666F2BB7EFE8C6F9D (OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_EndInvoke_m39CFD9FD2CC3035CFF6809F56447932B1394C08E (OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mD133471910C1ACE0979F3FD11462C9B8BB24CA96 (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_m_FullPath_2();
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_m_Name_0();
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->get_m_Path_1();
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 1;
	}

IL_0026:
	{
		V_1 = (bool)G_B4_0;
		goto IL_0029;
	}

IL_0029:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C  bool AnimatorStateInfo_IsName_mD133471910C1ACE0979F3FD11462C9B8BB24CA96_AdjustorThunk (RuntimeObject * __this, String_t* ___name0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *>(__this + _offset);
	return AnimatorStateInfo_IsName_mD133471910C1ACE0979F3FD11462C9B8BB24CA96(_thisAdjusted, ___name0, method);
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m3AB6A2DB592BB9CA0B9A4EF8A382C4DF3F5F6BBD (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_NormalizedTime_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float AnimatorStateInfo_get_normalizedTime_m3AB6A2DB592BB9CA0B9A4EF8A382C4DF3F5F6BBD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *>(__this + _offset);
	return AnimatorStateInfo_get_normalizedTime_m3AB6A2DB592BB9CA0B9A4EF8A382C4DF3F5F6BBD(_thisAdjusted, method);
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_length_mBEC06803962C9F4E60611516424CD43D7155A56D (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Length_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float AnimatorStateInfo_get_length_mBEC06803962C9F4E60611516424CD43D7155A56D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *>(__this + _offset);
	return AnimatorStateInfo_get_length_mBEC06803962C9F4E60611516424CD43D7155A56D(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke(const AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B& unmarshaled, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_pinvoke& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.get_m_FullPath_0();
	marshaled.___m_UserName_1 = unmarshaled.get_m_UserName_1();
	marshaled.___m_Name_2 = unmarshaled.get_m_Name_2();
	marshaled.___m_HasFixedDuration_3 = static_cast<int32_t>(unmarshaled.get_m_HasFixedDuration_3());
	marshaled.___m_Duration_4 = unmarshaled.get_m_Duration_4();
	marshaled.___m_NormalizedTime_5 = unmarshaled.get_m_NormalizedTime_5();
	marshaled.___m_AnyState_6 = static_cast<int32_t>(unmarshaled.get_m_AnyState_6());
	marshaled.___m_TransitionType_7 = unmarshaled.get_m_TransitionType_7();
}
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke_back(const AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_pinvoke& marshaled, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B& unmarshaled)
{
	int32_t unmarshaled_m_FullPath_temp_0 = 0;
	unmarshaled_m_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.set_m_FullPath_0(unmarshaled_m_FullPath_temp_0);
	int32_t unmarshaled_m_UserName_temp_1 = 0;
	unmarshaled_m_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.set_m_UserName_1(unmarshaled_m_UserName_temp_1);
	int32_t unmarshaled_m_Name_temp_2 = 0;
	unmarshaled_m_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.set_m_Name_2(unmarshaled_m_Name_temp_2);
	bool unmarshaled_m_HasFixedDuration_temp_3 = false;
	unmarshaled_m_HasFixedDuration_temp_3 = static_cast<bool>(marshaled.___m_HasFixedDuration_3);
	unmarshaled.set_m_HasFixedDuration_3(unmarshaled_m_HasFixedDuration_temp_3);
	float unmarshaled_m_Duration_temp_4 = 0.0f;
	unmarshaled_m_Duration_temp_4 = marshaled.___m_Duration_4;
	unmarshaled.set_m_Duration_4(unmarshaled_m_Duration_temp_4);
	float unmarshaled_m_NormalizedTime_temp_5 = 0.0f;
	unmarshaled_m_NormalizedTime_temp_5 = marshaled.___m_NormalizedTime_5;
	unmarshaled.set_m_NormalizedTime_5(unmarshaled_m_NormalizedTime_temp_5);
	bool unmarshaled_m_AnyState_temp_6 = false;
	unmarshaled_m_AnyState_temp_6 = static_cast<bool>(marshaled.___m_AnyState_6);
	unmarshaled.set_m_AnyState_6(unmarshaled_m_AnyState_temp_6);
	int32_t unmarshaled_m_TransitionType_temp_7 = 0;
	unmarshaled_m_TransitionType_temp_7 = marshaled.___m_TransitionType_7;
	unmarshaled.set_m_TransitionType_7(unmarshaled_m_TransitionType_temp_7);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke_cleanup(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_com(const AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B& unmarshaled, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_com& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.get_m_FullPath_0();
	marshaled.___m_UserName_1 = unmarshaled.get_m_UserName_1();
	marshaled.___m_Name_2 = unmarshaled.get_m_Name_2();
	marshaled.___m_HasFixedDuration_3 = static_cast<int32_t>(unmarshaled.get_m_HasFixedDuration_3());
	marshaled.___m_Duration_4 = unmarshaled.get_m_Duration_4();
	marshaled.___m_NormalizedTime_5 = unmarshaled.get_m_NormalizedTime_5();
	marshaled.___m_AnyState_6 = static_cast<int32_t>(unmarshaled.get_m_AnyState_6());
	marshaled.___m_TransitionType_7 = unmarshaled.get_m_TransitionType_7();
}
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_com_back(const AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_com& marshaled, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B& unmarshaled)
{
	int32_t unmarshaled_m_FullPath_temp_0 = 0;
	unmarshaled_m_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.set_m_FullPath_0(unmarshaled_m_FullPath_temp_0);
	int32_t unmarshaled_m_UserName_temp_1 = 0;
	unmarshaled_m_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.set_m_UserName_1(unmarshaled_m_UserName_temp_1);
	int32_t unmarshaled_m_Name_temp_2 = 0;
	unmarshaled_m_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.set_m_Name_2(unmarshaled_m_Name_temp_2);
	bool unmarshaled_m_HasFixedDuration_temp_3 = false;
	unmarshaled_m_HasFixedDuration_temp_3 = static_cast<bool>(marshaled.___m_HasFixedDuration_3);
	unmarshaled.set_m_HasFixedDuration_3(unmarshaled_m_HasFixedDuration_temp_3);
	float unmarshaled_m_Duration_temp_4 = 0.0f;
	unmarshaled_m_Duration_temp_4 = marshaled.___m_Duration_4;
	unmarshaled.set_m_Duration_4(unmarshaled_m_Duration_temp_4);
	float unmarshaled_m_NormalizedTime_temp_5 = 0.0f;
	unmarshaled_m_NormalizedTime_temp_5 = marshaled.___m_NormalizedTime_5;
	unmarshaled.set_m_NormalizedTime_5(unmarshaled_m_NormalizedTime_temp_5);
	bool unmarshaled_m_AnyState_temp_6 = false;
	unmarshaled_m_AnyState_temp_6 = static_cast<bool>(marshaled.___m_AnyState_6);
	unmarshaled.set_m_AnyState_6(unmarshaled_m_AnyState_temp_6);
	int32_t unmarshaled_m_TransitionType_temp_7 = 0;
	unmarshaled_m_TransitionType_temp_7 = marshaled.___m_TransitionType_7;
	unmarshaled.set_m_TransitionType_7(unmarshaled_m_TransitionType_temp_7);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_com_cleanup(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.Avatar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar__ctor_mD1FEFAE6B86B1AFE6097AD2E84AA1B56FF1C04AE (Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Avatar__ctor_mD1FEFAE6B86B1AFE6097AD2E84AA1B56FF1C04AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object__ctor_m091EBAEBC7919B0391ABDAFB7389ADC12206525B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Avatar::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Avatar_get_isValid_mC78A2AF825A7BB15D6D3DDE005882B2ECC59D9E7 (Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * __this, const RuntimeMethod* method)
{
	typedef bool (*Avatar_get_isValid_mC78A2AF825A7BB15D6D3DDE005882B2ECC59D9E7_ftn) (Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B *);
	static Avatar_get_isValid_mC78A2AF825A7BB15D6D3DDE005882B2ECC59D9E7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Avatar_get_isValid_mC78A2AF825A7BB15D6D3DDE005882B2ECC59D9E7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Avatar::get_isValid()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Avatar::get_isHuman()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Avatar_get_isHuman_m9E6F80C42A98C0A3D0CA6B24C0B17BB6BE8ADE85 (Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * __this, const RuntimeMethod* method)
{
	typedef bool (*Avatar_get_isHuman_m9E6F80C42A98C0A3D0CA6B24C0B17BB6BE8ADE85_ftn) (Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B *);
	static Avatar_get_isHuman_m9E6F80C42A98C0A3D0CA6B24C0B17BB6BE8ADE85_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Avatar_get_isHuman_m9E6F80C42A98C0A3D0CA6B24C0B17BB6BE8ADE85_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Avatar::get_isHuman()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.Avatar::GetAxisLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Avatar_GetAxisLength_mB5A06449773F04F82AA5145D064C99F27AF345F3 (Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * __this, int32_t ___humanId0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___humanId0;
		int32_t L_1 = HumanTrait_GetBoneIndexFromMono_mEE030DE71CE19611BB3CC881799CCF3828D0928E(L_0, /*hidden argument*/NULL);
		float L_2 = Avatar_Internal_GetAxisLength_m13F959D5CC665CB2E403B7B99530FE1C0F412DB5(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		float L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Quaternion UnityEngine.Avatar::GetPostRotation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Avatar_GetPostRotation_m273FFBA7712A2E670F2A354F4DD4456D6A01BBC5 (Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * __this, int32_t ___humanId0, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___humanId0;
		int32_t L_1 = HumanTrait_GetBoneIndexFromMono_mEE030DE71CE19611BB3CC881799CCF3828D0928E(L_0, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Avatar_Internal_GetPostRotation_mA92FD1A9C1DE0385FEE43326DB1CD742D23E1C2A(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = V_0;
		return L_3;
	}
}
// System.Single UnityEngine.Avatar::Internal_GetAxisLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Avatar_Internal_GetAxisLength_m13F959D5CC665CB2E403B7B99530FE1C0F412DB5 (Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * __this, int32_t ___humanId0, const RuntimeMethod* method)
{
	typedef float (*Avatar_Internal_GetAxisLength_m13F959D5CC665CB2E403B7B99530FE1C0F412DB5_ftn) (Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B *, int32_t);
	static Avatar_Internal_GetAxisLength_m13F959D5CC665CB2E403B7B99530FE1C0F412DB5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Avatar_Internal_GetAxisLength_m13F959D5CC665CB2E403B7B99530FE1C0F412DB5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Avatar::Internal_GetAxisLength(System.Int32)");
	float retVal = _il2cpp_icall_func(__this, ___humanId0);
	return retVal;
}
// UnityEngine.Quaternion UnityEngine.Avatar::Internal_GetPostRotation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Avatar_Internal_GetPostRotation_mA92FD1A9C1DE0385FEE43326DB1CD742D23E1C2A (Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * __this, int32_t ___humanId0, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___humanId0;
		Avatar_Internal_GetPostRotation_Injected_m70C9E36B4907AAB749AE1B9FD34159B52FEF4037(__this, L_0, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Avatar::Internal_GetPostRotation_Injected(System.Int32,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_Internal_GetPostRotation_Injected_m70C9E36B4907AAB749AE1B9FD34159B52FEF4037 (Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * __this, int32_t ___humanId0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret1, const RuntimeMethod* method)
{
	typedef void (*Avatar_Internal_GetPostRotation_Injected_m70C9E36B4907AAB749AE1B9FD34159B52FEF4037_ftn) (Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B *, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static Avatar_Internal_GetPostRotation_Injected_m70C9E36B4907AAB749AE1B9FD34159B52FEF4037_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Avatar_Internal_GetPostRotation_Injected_m70C9E36B4907AAB749AE1B9FD34159B52FEF4037_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Avatar::Internal_GetPostRotation_Injected(System.Int32,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___humanId0, ___ret1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke(const HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995& unmarshaled, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_pinvoke& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.get_m_BoneName_0());
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_m_HumanName_1());
	marshaled.___limit_2 = unmarshaled.get_limit_2();
}
IL2CPP_EXTERN_C void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke_back(const HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_pinvoke& marshaled, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995& unmarshaled)
{
	unmarshaled.set_m_BoneName_0(il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0));
	unmarshaled.set_m_HumanName_1(il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1));
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  unmarshaled_limit_temp_2;
	memset((&unmarshaled_limit_temp_2), 0, sizeof(unmarshaled_limit_temp_2));
	unmarshaled_limit_temp_2 = marshaled.___limit_2;
	unmarshaled.set_limit_2(unmarshaled_limit_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke_cleanup(HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_com(const HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995& unmarshaled, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_com& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_BoneName_0());
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_HumanName_1());
	marshaled.___limit_2 = unmarshaled.get_limit_2();
}
IL2CPP_EXTERN_C void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_com_back(const HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_com& marshaled, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995& unmarshaled)
{
	unmarshaled.set_m_BoneName_0(il2cpp_codegen_marshal_bstring_result(marshaled.___m_BoneName_0));
	unmarshaled.set_m_HumanName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___m_HumanName_1));
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  unmarshaled_limit_temp_2;
	memset((&unmarshaled_limit_temp_2), 0, sizeof(unmarshaled_limit_temp_2));
	unmarshaled_limit_temp_2 = marshaled.___limit_2;
	unmarshaled.set_limit_2(unmarshaled_limit_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_com_cleanup(HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Conversion methods for marshalling of: UnityEngine.HumanPose
IL2CPP_EXTERN_C void HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71_marshal_pinvoke(const HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71& unmarshaled, HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71_marshaled_pinvoke& marshaled)
{
	marshaled.___bodyPosition_0 = unmarshaled.get_bodyPosition_0();
	marshaled.___bodyRotation_1 = unmarshaled.get_bodyRotation_1();
	marshaled.___muscles_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.get_muscles_2());
}
IL2CPP_EXTERN_C void HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71_marshal_pinvoke_back(const HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71_marshaled_pinvoke& marshaled, HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  unmarshaled_bodyPosition_temp_0;
	memset((&unmarshaled_bodyPosition_temp_0), 0, sizeof(unmarshaled_bodyPosition_temp_0));
	unmarshaled_bodyPosition_temp_0 = marshaled.___bodyPosition_0;
	unmarshaled.set_bodyPosition_0(unmarshaled_bodyPosition_temp_0);
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  unmarshaled_bodyRotation_temp_1;
	memset((&unmarshaled_bodyRotation_temp_1), 0, sizeof(unmarshaled_bodyRotation_temp_1));
	unmarshaled_bodyRotation_temp_1 = marshaled.___bodyRotation_1;
	unmarshaled.set_bodyRotation_1(unmarshaled_bodyRotation_temp_1);
	unmarshaled.set_muscles_2((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, marshaled.___muscles_2));
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanPose
IL2CPP_EXTERN_C void HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71_marshal_pinvoke_cleanup(HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___muscles_2);
	marshaled.___muscles_2 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.HumanPose
IL2CPP_EXTERN_C void HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71_marshal_com(const HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71& unmarshaled, HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71_marshaled_com& marshaled)
{
	marshaled.___bodyPosition_0 = unmarshaled.get_bodyPosition_0();
	marshaled.___bodyRotation_1 = unmarshaled.get_bodyRotation_1();
	marshaled.___muscles_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.get_muscles_2());
}
IL2CPP_EXTERN_C void HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71_marshal_com_back(const HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71_marshaled_com& marshaled, HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  unmarshaled_bodyPosition_temp_0;
	memset((&unmarshaled_bodyPosition_temp_0), 0, sizeof(unmarshaled_bodyPosition_temp_0));
	unmarshaled_bodyPosition_temp_0 = marshaled.___bodyPosition_0;
	unmarshaled.set_bodyPosition_0(unmarshaled_bodyPosition_temp_0);
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  unmarshaled_bodyRotation_temp_1;
	memset((&unmarshaled_bodyRotation_temp_1), 0, sizeof(unmarshaled_bodyRotation_temp_1));
	unmarshaled_bodyRotation_temp_1 = marshaled.___bodyRotation_1;
	unmarshaled.set_bodyRotation_1(unmarshaled_bodyRotation_temp_1);
	unmarshaled.set_muscles_2((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, marshaled.___muscles_2));
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanPose
IL2CPP_EXTERN_C void HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71_marshal_com_cleanup(HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___muscles_2);
	marshaled.___muscles_2 = NULL;
}
// System.Void UnityEngine.HumanPose::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanPose_Init_m61FD03498CCDEC8B2816F15A2659514D4AEC9287 (HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HumanPose_Init_m61FD03498CCDEC8B2816F15A2659514D4AEC9287_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B10_0 = 0;
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = __this->get_muscles_2();
		V_0 = (bool)((!(((RuntimeObject*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_2 = __this->get_muscles_2();
		NullCheck(L_2);
		int32_t L_3 = HumanTrait_get_MuscleCount_mCEFF09E5706A269721965454D93792AE509039F7(/*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_5 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_5, _stringLiteralCD718444951C5BE00D6C575DD6019D1D4C9B44C6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, HumanPose_Init_m61FD03498CCDEC8B2816F15A2659514D4AEC9287_RuntimeMethod_var);
	}

IL_0031:
	{
	}

IL_0032:
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_6 = __this->get_muscles_2();
		V_2 = (bool)((((RuntimeObject*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)L_6) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_8 = HumanTrait_get_MuscleCount_mCEFF09E5706A269721965454D93792AE509039F7(/*hidden argument*/NULL);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_9 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->set_muscles_2(L_9);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_10 = __this->get_address_of_bodyRotation_1();
		float L_11 = L_10->get_x_0();
		if ((!(((float)L_11) == ((float)(0.0f)))))
		{
			goto IL_009a;
		}
	}
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_12 = __this->get_address_of_bodyRotation_1();
		float L_13 = L_12->get_y_1();
		if ((!(((float)L_13) == ((float)(0.0f)))))
		{
			goto IL_009a;
		}
	}
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_14 = __this->get_address_of_bodyRotation_1();
		float L_15 = L_14->get_z_2();
		if ((!(((float)L_15) == ((float)(0.0f)))))
		{
			goto IL_009a;
		}
	}
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_16 = __this->get_address_of_bodyRotation_1();
		float L_17 = L_16->get_w_3();
		G_B10_0 = ((((float)L_17) == ((float)(0.0f)))? 1 : 0);
		goto IL_009b;
	}

IL_009a:
	{
		G_B10_0 = 0;
	}

IL_009b:
	{
		V_3 = (bool)G_B10_0;
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_00b1;
		}
	}
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_19 = __this->get_address_of_bodyRotation_1();
		L_19->set_w_3((1.0f));
	}

IL_00b1:
	{
	}

IL_00b2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void HumanPose_Init_m61FD03498CCDEC8B2816F15A2659514D4AEC9287_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71 * _thisAdjusted = reinterpret_cast<HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71 *>(__this + _offset);
	HumanPose_Init_m61FD03498CCDEC8B2816F15A2659514D4AEC9287(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr UnityEngine.HumanPoseHandler::Internal_Create(UnityEngine.Avatar,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HumanPoseHandler_Internal_Create_m8CFFB638D6C9CA31CA9B39575990B0A0C4213208 (Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * ___avatar0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___root1, const RuntimeMethod* method)
{
	typedef intptr_t (*HumanPoseHandler_Internal_Create_m8CFFB638D6C9CA31CA9B39575990B0A0C4213208_ftn) (Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *);
	static HumanPoseHandler_Internal_Create_m8CFFB638D6C9CA31CA9B39575990B0A0C4213208_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HumanPoseHandler_Internal_Create_m8CFFB638D6C9CA31CA9B39575990B0A0C4213208_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.HumanPoseHandler::Internal_Create(UnityEngine.Avatar,UnityEngine.Transform)");
	intptr_t retVal = _il2cpp_icall_func(___avatar0, ___root1);
	return retVal;
}
// System.Void UnityEngine.HumanPoseHandler::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanPoseHandler_Internal_Destroy_m8702BC57771AD5C018AF79140091C6AA9E17AD3D (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*HumanPoseHandler_Internal_Destroy_m8702BC57771AD5C018AF79140091C6AA9E17AD3D_ftn) (intptr_t);
	static HumanPoseHandler_Internal_Destroy_m8702BC57771AD5C018AF79140091C6AA9E17AD3D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HumanPoseHandler_Internal_Destroy_m8702BC57771AD5C018AF79140091C6AA9E17AD3D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.HumanPoseHandler::Internal_Destroy(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// System.Void UnityEngine.HumanPoseHandler::GetHumanPose(UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanPoseHandler_GetHumanPose_mE867CBBED937238ED757CBC0F5B9EF04EC77B475 (HumanPoseHandler_t6509010E7376853DB31D02C9C9ADA86E47C64ABE * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___bodyPosition0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___bodyRotation1, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___muscles2, const RuntimeMethod* method)
{
	typedef void (*HumanPoseHandler_GetHumanPose_mE867CBBED937238ED757CBC0F5B9EF04EC77B475_ftn) (HumanPoseHandler_t6509010E7376853DB31D02C9C9ADA86E47C64ABE *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*);
	static HumanPoseHandler_GetHumanPose_mE867CBBED937238ED757CBC0F5B9EF04EC77B475_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HumanPoseHandler_GetHumanPose_mE867CBBED937238ED757CBC0F5B9EF04EC77B475_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.HumanPoseHandler::GetHumanPose(UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Single[])");
	_il2cpp_icall_func(__this, ___bodyPosition0, ___bodyRotation1, ___muscles2);
}
// System.Void UnityEngine.HumanPoseHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanPoseHandler_Dispose_m15494203D70121ADB16E8B249B341FFB04C0566A (HumanPoseHandler_t6509010E7376853DB31D02C9C9ADA86E47C64ABE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HumanPoseHandler_Dispose_m15494203D70121ADB16E8B249B341FFB04C0566A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_3 = __this->get_m_Ptr_0();
		HumanPoseHandler_Internal_Destroy_m8702BC57771AD5C018AF79140091C6AA9E17AD3D((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.HumanPoseHandler::.ctor(UnityEngine.Avatar,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanPoseHandler__ctor_mA921C6081505122B96EBF4B9113033E4017087DE (HumanPoseHandler_t6509010E7376853DB31D02C9C9ADA86E47C64ABE * __this, Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * ___avatar0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___root1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HumanPoseHandler__ctor_mA921C6081505122B96EBF4B9113033E4017087DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___root1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, _stringLiteral686BDB3E6D145DC0F38C69AFA63FC73BB310BA20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, HumanPoseHandler__ctor_mA921C6081505122B96EBF4B9113033E4017087DE_RuntimeMethod_var);
	}

IL_0029:
	{
		Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * L_4 = ___avatar0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_7 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_7, _stringLiteralFED0C12B84E61E1937B71F50B6E4A63A14B34AA4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, HumanPoseHandler__ctor_mA921C6081505122B96EBF4B9113033E4017087DE_RuntimeMethod_var);
	}

IL_003f:
	{
		Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * L_8 = ___avatar0;
		NullCheck(L_8);
		bool L_9 = Avatar_get_isValid_mC78A2AF825A7BB15D6D3DDE005882B2ECC59D9E7(L_8, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0057;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_11 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_11, _stringLiteralEDB24151233B36436B52B435C5A4AE87B4C6E119, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, HumanPoseHandler__ctor_mA921C6081505122B96EBF4B9113033E4017087DE_RuntimeMethod_var);
	}

IL_0057:
	{
		Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * L_12 = ___avatar0;
		NullCheck(L_12);
		bool L_13 = Avatar_get_isHuman_m9E6F80C42A98C0A3D0CA6B24C0B17BB6BE8ADE85(L_12, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_006f;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_15 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_15, _stringLiteralC8A47B4FB952AE786387A2014C2EE5A58171D70D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, HumanPoseHandler__ctor_mA921C6081505122B96EBF4B9113033E4017087DE_RuntimeMethod_var);
	}

IL_006f:
	{
		Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * L_16 = ___avatar0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = ___root1;
		intptr_t L_18 = HumanPoseHandler_Internal_Create_m8CFFB638D6C9CA31CA9B39575990B0A0C4213208(L_16, L_17, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_18);
		return;
	}
}
// System.Void UnityEngine.HumanPoseHandler::GetHumanPose(UnityEngine.HumanPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanPoseHandler_GetHumanPose_mE4D34A5D3AFE3F1DB3DB7B28D503AF233BD910BB (HumanPoseHandler_t6509010E7376853DB31D02C9C9ADA86E47C64ABE * __this, HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71 * ___humanPose0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HumanPoseHandler_GetHumanPose_mE4D34A5D3AFE3F1DB3DB7B28D503AF233BD910BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_3 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349(L_3, _stringLiteralE78D48EEB8456CF0C357E6AC2BCD6ED8230120B7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, HumanPoseHandler_GetHumanPose_mE4D34A5D3AFE3F1DB3DB7B28D503AF233BD910BB_RuntimeMethod_var);
	}

IL_0020:
	{
		HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71 * L_4 = ___humanPose0;
		HumanPose_Init_m61FD03498CCDEC8B2816F15A2659514D4AEC9287((HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71 *)L_4, /*hidden argument*/NULL);
		HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71 * L_5 = ___humanPose0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_6 = L_5->get_address_of_bodyPosition_0();
		HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71 * L_7 = ___humanPose0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_8 = L_7->get_address_of_bodyRotation_1();
		HumanPose_tA95B8AF1AC9097B0096192317BC6AD5D32980B71 * L_9 = ___humanPose0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_10 = L_9->get_muscles_2();
		HumanPoseHandler_GetHumanPose_mE867CBBED937238ED757CBC0F5B9EF04EC77B475(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_6, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_8, L_10, /*hidden argument*/NULL);
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
// System.Int32 UnityEngine.HumanTrait::get_MuscleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HumanTrait_get_MuscleCount_mCEFF09E5706A269721965454D93792AE509039F7 (const RuntimeMethod* method)
{
	typedef int32_t (*HumanTrait_get_MuscleCount_mCEFF09E5706A269721965454D93792AE509039F7_ftn) ();
	static HumanTrait_get_MuscleCount_mCEFF09E5706A269721965454D93792AE509039F7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HumanTrait_get_MuscleCount_mCEFF09E5706A269721965454D93792AE509039F7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.HumanTrait::get_MuscleCount()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Int32 UnityEngine.HumanTrait::GetBoneIndexFromMono(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HumanTrait_GetBoneIndexFromMono_mEE030DE71CE19611BB3CC881799CCF3828D0928E (int32_t ___humanId0, const RuntimeMethod* method)
{
	typedef int32_t (*HumanTrait_GetBoneIndexFromMono_mEE030DE71CE19611BB3CC881799CCF3828D0928E_ftn) (int32_t);
	static HumanTrait_GetBoneIndexFromMono_mEE030DE71CE19611BB3CC881799CCF3828D0928E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HumanTrait_GetBoneIndexFromMono_mEE030DE71CE19611BB3CC881799CCF3828D0928E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.HumanTrait::GetBoneIndexFromMono(System.Int32)");
	int32_t retVal = _il2cpp_icall_func(___humanId0);
	return retVal;
}
// System.String[] UnityEngine.HumanTrait::get_MuscleName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* HumanTrait_get_MuscleName_mCEE52B683029B321EDEB7310FBEED3DA986D81AD (const RuntimeMethod* method)
{
	typedef StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* (*HumanTrait_get_MuscleName_mCEE52B683029B321EDEB7310FBEED3DA986D81AD_ftn) ();
	static HumanTrait_get_MuscleName_mCEE52B683029B321EDEB7310FBEED3DA986D81AD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HumanTrait_get_MuscleName_mCEE52B683029B321EDEB7310FBEED3DA986D81AD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.HumanTrait::get_MuscleName()");
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* retVal = _il2cpp_icall_func();
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Motion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Motion__ctor_mAED8097767A0FD4F3B5A8E687D569E33DB6F8443 (Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Motion__ctor_mAED8097767A0FD4F3B5A8E687D569E33DB6F8443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object__ctor_m091EBAEBC7919B0391ABDAFB7389ADC12206525B(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.RuntimeAnimatorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeAnimatorController__ctor_mF55B0DDD5700D725CD4E59521E5A16BD774ABC32 (RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeAnimatorController__ctor_mF55B0DDD5700D725CD4E59521E5A16BD774ABC32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object__ctor_m091EBAEBC7919B0391ABDAFB7389ADC12206525B(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AnimationClip[] UnityEngine.RuntimeAnimatorController::get_animationClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClipU5BU5D_t26BCE82D4E5CBA43CAD83905725B4D6D500B3E36* RuntimeAnimatorController_get_animationClips_mDD7156EB54EF5141D36C686A5C73FAD7DB465AE7 (RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * __this, const RuntimeMethod* method)
{
	typedef AnimationClipU5BU5D_t26BCE82D4E5CBA43CAD83905725B4D6D500B3E36* (*RuntimeAnimatorController_get_animationClips_mDD7156EB54EF5141D36C686A5C73FAD7DB465AE7_ftn) (RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD *);
	static RuntimeAnimatorController_get_animationClips_mDD7156EB54EF5141D36C686A5C73FAD7DB465AE7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RuntimeAnimatorController_get_animationClips_mDD7156EB54EF5141D36C686A5C73FAD7DB465AE7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RuntimeAnimatorController::get_animationClips()");
	AnimationClipU5BU5D_t26BCE82D4E5CBA43CAD83905725B4D6D500B3E36* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke(const SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5& unmarshaled, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.get_name_0());
	marshaled.___parentName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_parentName_1());
	marshaled.___position_2 = unmarshaled.get_position_2();
	marshaled.___rotation_3 = unmarshaled.get_rotation_3();
	marshaled.___scale_4 = unmarshaled.get_scale_4();
}
IL2CPP_EXTERN_C void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke_back(const SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_pinvoke& marshaled, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5& unmarshaled)
{
	unmarshaled.set_name_0(il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	unmarshaled.set_parentName_1(il2cpp_codegen_marshal_string_result(marshaled.___parentName_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  unmarshaled_position_temp_2;
	memset((&unmarshaled_position_temp_2), 0, sizeof(unmarshaled_position_temp_2));
	unmarshaled_position_temp_2 = marshaled.___position_2;
	unmarshaled.set_position_2(unmarshaled_position_temp_2);
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  unmarshaled_rotation_temp_3;
	memset((&unmarshaled_rotation_temp_3), 0, sizeof(unmarshaled_rotation_temp_3));
	unmarshaled_rotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.set_rotation_3(unmarshaled_rotation_temp_3);
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  unmarshaled_scale_temp_4;
	memset((&unmarshaled_scale_temp_4), 0, sizeof(unmarshaled_scale_temp_4));
	unmarshaled_scale_temp_4 = marshaled.___scale_4;
	unmarshaled.set_scale_4(unmarshaled_scale_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke_cleanup(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_com(const SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5& unmarshaled, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_name_0());
	marshaled.___parentName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_parentName_1());
	marshaled.___position_2 = unmarshaled.get_position_2();
	marshaled.___rotation_3 = unmarshaled.get_rotation_3();
	marshaled.___scale_4 = unmarshaled.get_scale_4();
}
IL2CPP_EXTERN_C void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_com_back(const SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_com& marshaled, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5& unmarshaled)
{
	unmarshaled.set_name_0(il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	unmarshaled.set_parentName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___parentName_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  unmarshaled_position_temp_2;
	memset((&unmarshaled_position_temp_2), 0, sizeof(unmarshaled_position_temp_2));
	unmarshaled_position_temp_2 = marshaled.___position_2;
	unmarshaled.set_position_2(unmarshaled_position_temp_2);
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  unmarshaled_rotation_temp_3;
	memset((&unmarshaled_rotation_temp_3), 0, sizeof(unmarshaled_rotation_temp_3));
	unmarshaled_rotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.set_rotation_3(unmarshaled_rotation_temp_3);
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  unmarshaled_scale_temp_4;
	memset((&unmarshaled_scale_temp_4), 0, sizeof(unmarshaled_scale_temp_4));
	unmarshaled_scale_temp_4 = marshaled.___scale_4;
	unmarshaled.set_scale_4(unmarshaled_scale_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_com_cleanup(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateEnter_mAB25325C96611ADDF93038EC6792EC4F76AEF4EE (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateUpdate_mE12079F72B209DDFFAB4088B2B210EA20C2C4266 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateExit_m83F9656CE5265BD15F3B5D1AB91411A211922730 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMove_mAE38B3B50B0A495AF30E6711F52381668B63DAA2 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateIK_mB977958BB73727EF2F721BB449DFEA781529785B (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineEnter_m5497D76EAE53BEF94431E3C1AAD0B58B89E745C7 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, int32_t ___stateMachinePathHash1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineExit_m8A0744B8E90157AE466269DF324C44BFCBB47FF3 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, int32_t ___stateMachinePathHash1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateEnter_mAAD23D49A3F84438928677D2FA3F8E26CFDE2522 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateUpdate_mF1E4E77449D427AE5DDD68FD8EECCAD1E54E1EE9 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateExit_m43A13AA682B9E86F6D2952338F47CE1B2BF9D4A7 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMove_mD8060C6C70456CDC4D678184723C05A7750846F3 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateIK_m09D6AC0300060ACF7B82283AD947E9A260585576 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineEnter_m6DE0F767D565EFC33361BA13A6DCC65AC89D3D07 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, int32_t ___stateMachinePathHash1, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___controller2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineExit_m01575716EA20F88A56C3CB778FACE2CBDA68EF26 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, int32_t ___stateMachinePathHash1, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___controller2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour__ctor_m60289315ADCB494227D881EEFA6C4458BACA79DB (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
