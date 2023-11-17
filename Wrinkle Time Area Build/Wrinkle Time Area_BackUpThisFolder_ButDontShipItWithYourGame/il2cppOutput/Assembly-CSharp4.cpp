#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Func`3<System.Object,System.Byte,System.Object>
struct Func_3_t3CE8E004DADF5BF88EE2744980E5B84C88A5A210;
// System.Func`3<System.String,System.Byte,System.String>
struct Func_3_t5E27852773532487771EB4673CEFBF942A91EA6A;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Queue`1<MNF.Message.StreamBin_RecvBuff>
struct Queue_1_tF5C73170A66C7A3ED5399F3C8E31F1DCB55964D8;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Data.EnemyStat[]
struct EnemyStatU5BU5D_tB5E197CCD02CCC08D0808B4672DDA0223468EFE7;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Data.Itemdata[]
struct ItemdataU5BU5D_tBEC1F95E662308D11A1CC17AC91B6F947EE15696;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Data.PlayerStat[]
struct PlayerStatU5BU5D_t9A42A25B72B9A00D9F45C84FF232E6D79D5BBDB1;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// MNF.Message.StreamBin_RecvBuff[]
struct StreamBin_RecvBuffU5BU5D_t48DB71D27BF179DEA3CA15A5A97DF020B4DABF9F;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Data.WeaponData[]
struct WeaponDataU5BU5D_t05A43D7627BDF16785F5824E1D0E4CA475DB2F65;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Security.Cryptography.Aes
struct Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047;
// mino.AniSetting
struct AniSetting_t3A43D3884B2949A0D376602BB3996564099F2430;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Cinemachine.CinemachineFreeLook
struct CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A;
// Cinemachine.PostFX.CinemachineVolumeSettings
struct CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65;
// Data.DataManager
struct DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// EnemyCut
struct EnemyCut_t95979CEE85AE370FDB13AF4BA6FF73CA4C2C21AE;
// Data.EnemyStat
struct EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F;
// FinalCut
struct FinalCut_t1BF3AF5C39CC2BDB938B386B62465E9C89B28422;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Inventory
struct Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Item
struct Item_tFAF77888D49883A321EB596A7D93CB5615D37E95;
// Data.Itemdata
struct Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B;
// MNF.Crypt.MD5Ref
struct MD5Ref_tCFFE2CE5635109955336840153480CA96D609CCD;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MeleeWeapon
struct MeleeWeapon_tB011A7DB6BAEDB16C5A1D32D7EF06BD71F05C115;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MultiMyStatus
struct MultiMyStatus_t8E6A11BA0E6DB15CAEBA5D83B3DA3CDA2A1E4756;
// MultiPlayerHealth
struct MultiPlayerHealth_tC27A18F8F907AE6D26F7626C475F22A323472367;
// MultiPlayerHealthBar
struct MultiPlayerHealthBar_tDA6B376ABB66AF9BFCA907BB8874BFA90AE44976;
// MultiPlayerMovement
struct MultiPlayerMovement_tABAAAD9DC29135759BCE56534591CC3616497E6E;
// MultiScene
struct MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254;
// MultiTeamstatus
struct MultiTeamstatus_t739C9E62B54E1042915863141B282FC1EEA5BCFC;
// MultiWeaponController
struct MultiWeaponController_t4ED94B619B490BE710C1E810753AC0AD69C4AA24;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// MNF.NetHead
struct NetHead_t809B4FC6347D3B786C431C442EDDCEA390A20C9C;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// ObjectHideCamera
struct ObjectHideCamera_tDDEEE61BE0C921B5F00D305E5FF627ECB6C4D68D;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.Playables.PlayableDirector
struct PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475;
// Data.PlayerStat
struct PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// SlotToolTip
struct SlotToolTip_t6D6E9B56F6A84E6A2965548B92B0D131E1205C40;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// MNF.Message.StreamBinRecver
struct StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F;
// MNF.Message.StreamBin_RecvBuff
struct StreamBin_RecvBuff_t2CB7A36B3E81B541D074ED81C387A8BEA5A4582C;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// ThrownWeaponController
struct ThrownWeaponController_t7EC0B88940B2CBF8C1815596D2D55F5F068100D5;
// UnityEngine.Timeline.TimelineAsset
struct TimelineAsset_tE400C944B07CA9D1349BAD84545E24075ADB3496;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Text.UTF8Encoding
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Weapon
struct Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302;
// Data.WeaponData
struct WeaponData_tD3011DB326C49F5868296C985745CA832E477245;
// Data.DataManager/<DisplayItemMessage>d__25
struct U3CDisplayItemMessageU3Ed__25_t4BCB2C0FCB601FF60842813E06B20C2548BBF64F;
// MNF.Crypt.MD5Ref/<>c
struct U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// MNF.Message.StreamBinRecver/OnRecv_KW
struct OnRecv_KW_tB49CF6FDFF75C8A9228073981DD7CC7E2FC5E243;
// System.Text.UTF8Encoding/UTF8EncodingSealed
struct UTF8EncodingSealed_tF97A34F40CABE9CE1C168967D60396F51C43DD36;

IL2CPP_EXTERN_C RuntimeClass* Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AniSetting_t3A43D3884B2949A0D376602BB3996564099F2430_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t5E27852773532487771EB4673CEFBF942A91EA6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tF5C73170A66C7A3ED5399F3C8E31F1DCB55964D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamBin_RecvBuff_t2CB7A36B3E81B541D074ED81C387A8BEA5A4582C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDisplayItemMessageU3Ed__25_t4BCB2C0FCB601FF60842813E06B20C2548BBF64F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeaponData_tD3011DB326C49F5868296C985745CA832E477245_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____411D3F1D2390FF3F482AC8DF4E730780BB081A192F283D2F373138FD101DC8FE_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____4D84BFD22FF73BBD9906AA465069D4BBA0DB37B52D999EDDA0150AA78D3334AB_1_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01EB28C63D7EB40207A19ED5D02A10F6E7FE5549;
IL2CPP_EXTERN_C String_t* _stringLiteral075D97BDD3A5670022365F1C33A35D9EA04A740F;
IL2CPP_EXTERN_C String_t* _stringLiteral1133BB5F3D2FA6D7FA65FA21E4224DA321B94603;
IL2CPP_EXTERN_C String_t* _stringLiteral24BF3226FFAECF3ADAD2668A80C772975DB7AAA3;
IL2CPP_EXTERN_C String_t* _stringLiteral262860FCC0E832A1B60C6677C1DC326EB3A9B270;
IL2CPP_EXTERN_C String_t* _stringLiteral430B038DD402BC010D84227D958DD4E92B2BE845;
IL2CPP_EXTERN_C String_t* _stringLiteral537E68D8057AACC5BB75E8C4DEDC4C6997F6F115;
IL2CPP_EXTERN_C String_t* _stringLiteral54B143D289AAC65CADF64A40F1FAB5CBB1D714FF;
IL2CPP_EXTERN_C String_t* _stringLiteral5A24569BA19C0F302763EF4C18CAC4574B19DCE3;
IL2CPP_EXTERN_C String_t* _stringLiteral6787E73E2E06405532890242579A8D9EA0E86C10;
IL2CPP_EXTERN_C String_t* _stringLiteral68F5ABCF1226B9EACFBD8EDBCA78645ADF95CE04;
IL2CPP_EXTERN_C String_t* _stringLiteral6B512A5D926BA70E71C218CA0579B0C7F9906327;
IL2CPP_EXTERN_C String_t* _stringLiteral6DB891A53F82548D312196F194FEA8F3F97CAE25;
IL2CPP_EXTERN_C String_t* _stringLiteral889E5939446CB9B4803EBA875DCD023C19C24677;
IL2CPP_EXTERN_C String_t* _stringLiteral8D94C393A366742DD1E93165E4E0FDAE45225BC7;
IL2CPP_EXTERN_C String_t* _stringLiteral970CC57CB5C903AF48E2BA90910F0E408DAC9211;
IL2CPP_EXTERN_C String_t* _stringLiteral9AC1C319FE8109A8CD895AEBA9B5F99BDBA70A95;
IL2CPP_EXTERN_C String_t* _stringLiteralA0B1803C0B000FCC4B108AF7AC4B3FF0D23EF072;
IL2CPP_EXTERN_C String_t* _stringLiteralAC052861893EA586565E8F7CFAD209D29C8B9992;
IL2CPP_EXTERN_C String_t* _stringLiteralB50DAE9190CD5144B14F8D0EEC2B2982A1F333D0;
IL2CPP_EXTERN_C String_t* _stringLiteralBE505E59A5B7D2AB610AFC88391056C7EC96AD5B;
IL2CPP_EXTERN_C String_t* _stringLiteralC07E22FA6C7ADE30902FF281B1DF7403CAD3CB85;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE298750DE4306CD16C3FC6CA687D7CD46DE665FE;
IL2CPP_EXTERN_C String_t* _stringLiteralEEFB6C80B9AC59A5604131FE3F13F1457211DBA2;
IL2CPP_EXTERN_C String_t* _stringLiteralFCE1EA4C527473DF57D33AEB569949A2E114E0E2;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataManager_LoadFromJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_mD7DBBB98B1EFD8423EB11A185E00FF558F6AF160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataManager_LoadFromJsonEncrypted_TisItemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_m1F856BC4CAE4FBB9394F567CB13A792CFD8BBCAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataManager_LoadFromJsonEncrypted_TisPlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7_m6DF66D227281FA47E7FDCEEF44D82D98D794614A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataManager_LoadFromJsonEncrypted_TisWeaponData_tD3011DB326C49F5868296C985745CA832E477245_m4DF55DAF9C732E74AF7BC371994F47F38AB2986E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataManager_SaveToJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_m3D59A9E428A19014A73BCC262247E50C752445D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataManager_SaveToJsonEncrypted_TisItemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_m662A7C18FED39D58A9809A98B353C6168222C0F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataManager_SaveToJsonEncrypted_TisPlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7_m4EABAA5234B0BC971A706856DB8AE403FEEB883C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataManager_SaveToJsonEncrypted_TisWeaponData_tD3011DB326C49F5868296C985745CA832E477245_m9F7F4BD669044B6394DDDC049926E505411B5854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Aggregate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisString_t_m861BDB2562646E093607189F1AC50BB8F51E0FAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m3A282F3D48CE0992315A4DF4DB867B612D18CED7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m388C94C9032FE769FFA18A08F56B7DB691AB765F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m48DDFCBB327411C3F6424C505BCB02959B0A3176_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mD0BDC41E95FD9BAB3F7C2857D57BD77A48E3A3BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDisplayItemMessageU3Ed__25_System_Collections_IEnumerator_Reset_m84474E048244D1705476BB0ACD6391490EBE1E5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CMd5SumToStringU3Eb__2_0_m16793B2D420B497E910FA2154F8D58C800B56B9B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<MNF.Message.StreamBin_RecvBuff>
struct Queue_1_tF5C73170A66C7A3ED5399F3C8E31F1DCB55964D8  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	StreamBin_RecvBuffU5BU5D_t48DB71D27BF179DEA3CA15A5A97DF020B4DABF9F* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};
struct Il2CppArrayBounds;

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// Data.EnemyStat
struct EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F  : public RuntimeObject
{
	// System.Single Data.EnemyStat::EnemyHealth
	float ___EnemyHealth_0;
	// System.Single Data.EnemyStat::damage
	float ___damage_1;
	// System.Single Data.EnemyStat::Health
	float ___Health_2;
	// System.Single Data.EnemyStat::Heal
	float ___Heal_3;
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// Data.Itemdata
struct Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134  : public RuntimeObject
{
	// System.String Data.Itemdata::itemName
	String_t* ___itemName_0;
	// System.Single Data.Itemdata::Health
	float ___Health_1;
	// System.Int32 Data.Itemdata::damage
	int32_t ___damage_2;
	// System.Single Data.Itemdata::dot
	float ___dot_3;
	// System.Single Data.Itemdata::sight
	float ___sight_4;
};

// MNF.Crypt.MD5Ref
struct MD5Ref_tCFFE2CE5635109955336840153480CA96D609CCD  : public RuntimeObject
{
	// System.Security.Cryptography.MD5CryptoServiceProvider MNF.Crypt.MD5Ref::md5
	MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B* ___md5_0;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// MNF.NetHead
struct NetHead_t809B4FC6347D3B786C431C442EDDCEA390A20C9C  : public RuntimeObject
{
	// System.UInt16 MNF.NetHead::m_Head1
	uint16_t ___m_Head1_0;
	// System.UInt16 MNF.NetHead::m_Head2
	uint16_t ___m_Head2_1;
	// System.UInt16 MNF.NetHead::m_Check
	uint16_t ___m_Check_2;
	// System.Byte MNF.NetHead::m_Class
	uint8_t ___m_Class_3;
	// System.Byte MNF.NetHead::m_Event
	uint8_t ___m_Event_4;
};

// Data.PlayerStat
struct PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7  : public RuntimeObject
{
	// System.String Data.PlayerStat::name
	String_t* ___name_0;
	// System.Single Data.PlayerStat::Level
	float ___Level_1;
	// System.Single Data.PlayerStat::Exp
	float ___Exp_2;
	// System.Single Data.PlayerStat::PlayerHealth
	float ___PlayerHealth_3;
	// System.Single Data.PlayerStat::Health
	float ___Health_4;
};

// MNF.Message.StreamBinRecver
struct StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F  : public RuntimeObject
{
	// System.Int32 MNF.Message.StreamBinRecver::max_buffObj
	int32_t ___max_buffObj_2;
	// System.Collections.Generic.Queue`1<MNF.Message.StreamBin_RecvBuff> MNF.Message.StreamBinRecver::qRecvBuff
	Queue_1_tF5C73170A66C7A3ED5399F3C8E31F1DCB55964D8* ___qRecvBuff_3;
};

struct StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F_StaticFields
{
	// MNF.Message.StreamBinRecver MNF.Message.StreamBinRecver::g
	StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F* ___g_0;
	// MNF.Message.StreamBinRecver/OnRecv_KW MNF.Message.StreamBinRecver::onrecv_kw
	OnRecv_KW_tB49CF6FDFF75C8A9228073981DD7CC7E2FC5E243* ___onrecv_kw_1;
};

// MNF.Message.StreamBin_RecvBuff
struct StreamBin_RecvBuff_t2CB7A36B3E81B541D074ED81C387A8BEA5A4582C  : public RuntimeObject
{
	// System.Byte[] MNF.Message.StreamBin_RecvBuff::recvBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___recvBuffer_0;
	// System.IO.MemoryStream MNF.Message.StreamBin_RecvBuff::ms
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___ms_1;
	// System.IO.BinaryReader MNF.Message.StreamBin_RecvBuff::br
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___br_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8  : public RuntimeObject
{
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Data.WeaponData
struct WeaponData_tD3011DB326C49F5868296C985745CA832E477245  : public RuntimeObject
{
	// System.Int32 Data.WeaponData::damage
	int32_t ___damage_0;
	// System.Int32 Data.WeaponData::skillDamage
	int32_t ___skillDamage_1;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Data.DataManager/<DisplayItemMessage>d__25
struct U3CDisplayItemMessageU3Ed__25_t4BCB2C0FCB601FF60842813E06B20C2548BBF64F  : public RuntimeObject
{
	// System.Int32 Data.DataManager/<DisplayItemMessage>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Data.DataManager/<DisplayItemMessage>d__25::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Data.DataManager Data.DataManager/<DisplayItemMessage>d__25::<>4__this
	DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* ___U3CU3E4__this_2;
	// System.String Data.DataManager/<DisplayItemMessage>d__25::message
	String_t* ___message_3;
};

// MNF.Crypt.MD5Ref/<>c
struct U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0  : public RuntimeObject
{
};

struct U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0_StaticFields
{
	// MNF.Crypt.MD5Ref/<>c MNF.Crypt.MD5Ref/<>c::<>9
	U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0* ___U3CU3E9_0;
	// System.Func`3<System.String,System.Byte,System.String> MNF.Crypt.MD5Ref/<>c::<>9__2_0
	Func_3_t5E27852773532487771EB4673CEFBF942A91EA6A* ___U3CU3E9__2_0_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Security.Cryptography.Aes
struct Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047  : public SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8
{
};

struct Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_StaticFields
{
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalBlockSizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalKeySizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalKeySizes_10;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// System.Security.Cryptography.MD5
struct MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Text.UTF8Encoding
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE  : public Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095
{
	// System.Boolean System.Text.UTF8Encoding::_emitUTF8Identifier
	bool ____emitUTF8Identifier_18;
	// System.Boolean System.Text.UTF8Encoding::_isThrowException
	bool ____isThrowException_19;
};

struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_StaticFields
{
	// System.Text.UTF8Encoding/UTF8EncodingSealed System.Text.UTF8Encoding::s_default
	UTF8EncodingSealed_tF97A34F40CABE9CE1C168967D60396F51C43DD36* ___s_default_16;
	// System.Byte[] System.Text.UTF8Encoding::s_preamble
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_preamble_17;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069__padding[32];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::411D3F1D2390FF3F482AC8DF4E730780BB081A192F283D2F373138FD101DC8FE
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___411D3F1D2390FF3F482AC8DF4E730780BB081A192F283D2F373138FD101DC8FE_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::4D84BFD22FF73BBD9906AA465069D4BBA0DB37B52D999EDDA0150AA78D3334AB
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___4D84BFD22FF73BBD9906AA465069D4BBA0DB37B52D999EDDA0150AA78D3334AB_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::687F3D3CFECF5A00BAE9EDDF8C119F5F57ECA5BC70C9BC312793076DB773C6ED
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___687F3D3CFECF5A00BAE9EDDF8C119F5F57ECA5BC70C9BC312793076DB773C6ED_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::D41D85F3CF7065C417F4E59585BC7588FA3B2BC0E61A76860EAF52EA2ABC128D
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___D41D85F3CF7065C417F4E59585BC7588FA3B2BC0E61A76860EAF52EA2ABC128D_3;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Security.Cryptography.CryptoStream
struct CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream System.Security.Cryptography.CryptoStream::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_4;
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.CryptoStream::_transform
	RuntimeObject* ____transform_5;
	// System.Security.Cryptography.CryptoStreamMode System.Security.Cryptography.CryptoStream::_transformMode
	int32_t ____transformMode_6;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_inputBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____inputBuffer_7;
	// System.Int32 System.Security.Cryptography.CryptoStream::_inputBufferIndex
	int32_t ____inputBufferIndex_8;
	// System.Int32 System.Security.Cryptography.CryptoStream::_inputBlockSize
	int32_t ____inputBlockSize_9;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_outputBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____outputBuffer_10;
	// System.Int32 System.Security.Cryptography.CryptoStream::_outputBufferIndex
	int32_t ____outputBufferIndex_11;
	// System.Int32 System.Security.Cryptography.CryptoStream::_outputBlockSize
	int32_t ____outputBlockSize_12;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canRead
	bool ____canRead_13;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canWrite
	bool ____canWrite_14;
	// System.Boolean System.Security.Cryptography.CryptoStream::_finalBlockTransformed
	bool ____finalBlockTransformed_15;
	// System.Threading.SemaphoreSlim System.Security.Cryptography.CryptoStream::_lazyAsyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____lazyAsyncActiveSemaphore_16;
	// System.Boolean System.Security.Cryptography.CryptoStream::_leaveOpen
	bool ____leaveOpen_17;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B  : public MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A
{
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____H_4;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___buff_5;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count_6;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____ProcessingBuffer_7;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_8;
};

struct MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_StaticFields
{
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___K_9;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Func`3<System.String,System.Byte,System.String>
struct Func_3_t5E27852773532487771EB4673CEFBF942A91EA6A  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Item
struct Item_tFAF77888D49883A321EB596A7D93CB5615D37E95  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Item::itemDesc
	String_t* ___itemDesc_4;
	// System.String Item::itemName
	String_t* ___itemName_5;
	// Item/ItemType Item::itemType
	int32_t ___itemType_6;
	// UnityEngine.Sprite Item::itemImage
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___itemImage_7;
	// UnityEngine.GameObject Item::itemPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___itemPrefab_8;
	// System.Int32 Item::cooldownTime
	int32_t ___cooldownTime_9;
	// System.String Item::weaponType
	String_t* ___weaponType_10;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// MNF.Message.StreamBinRecver/OnRecv_KW
struct OnRecv_KW_tB49CF6FDFF75C8A9228073981DD7CC7E2FC5E243  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// mino.AniSetting
struct AniSetting_t3A43D3884B2949A0D376602BB3996564099F2430  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator mino.AniSetting::ani
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___ani_4;
};

struct AniSetting_t3A43D3884B2949A0D376602BB3996564099F2430_StaticFields
{
	// System.Int32 mino.AniSetting::AniPlayer
	int32_t ___AniPlayer_5;
};

// Data.DataManager
struct DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Data.DataManager::<isDead>k__BackingField
	bool ___U3CisDeadU3Ek__BackingField_4;
	// UnityEngine.Events.UnityEvent Data.DataManager::deadEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___deadEvent_5;
	// Data.Itemdata[] Data.DataManager::itemEffects
	ItemdataU5BU5D_tBEC1F95E662308D11A1CC17AC91B6F947EE15696* ___itemEffects_7;
	// Data.WeaponData[] Data.DataManager::weaponEffects
	WeaponDataU5BU5D_t05A43D7627BDF16785F5824E1D0E4CA475DB2F65* ___weaponEffects_8;
	// Data.PlayerStat[] Data.DataManager::playerStats
	PlayerStatU5BU5D_t9A42A25B72B9A00D9F45C84FF232E6D79D5BBDB1* ___playerStats_9;
	// Data.EnemyStat[] Data.DataManager::enemyStats
	EnemyStatU5BU5D_tB5E197CCD02CCC08D0808B4672DDA0223468EFE7* ___enemyStats_10;
	// SlotToolTip Data.DataManager::theSlotToolTip
	SlotToolTip_t6D6E9B56F6A84E6A2965548B92B0D131E1205C40* ___theSlotToolTip_11;
	// TMPro.TMP_Text Data.DataManager::UseItemResultText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___UseItemResultText_12;
	// System.String Data.DataManager::itemName
	String_t* ___itemName_13;
	// Weapon Data.DataManager::weapon
	Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* ___weapon_14;
	// MeleeWeapon Data.DataManager::meleeWeapon
	MeleeWeapon_tB011A7DB6BAEDB16C5A1D32D7EF06BD71F05C115* ___meleeWeapon_15;
	// System.Byte[] Data.DataManager::IV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IV_17;
};

struct DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366_StaticFields
{
	// Data.DataManager Data.DataManager::Inst
	DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* ___Inst_6;
	// System.Byte[] Data.DataManager::EncryptionKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EncryptionKey_16;
};

// MultiPlayerHealth
struct MultiPlayerHealth_tC27A18F8F907AE6D26F7626C475F22A323472367  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 MultiPlayerHealth::MaxHealth
	int32_t ___MaxHealth_4;
	// System.Int32 MultiPlayerHealth::CurrentHealth
	int32_t ___CurrentHealth_5;
	// TMPro.TMP_Text MultiPlayerHealth::deathText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___deathText_6;
	// UnityEngine.UI.Image MultiPlayerHealth::endingImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___endingImage_7;
	// UnityEngine.ParticleSystem MultiPlayerHealth::deathParticle
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___deathParticle_8;
	// UnityEngine.ParticleSystem MultiPlayerHealth::deathBloodParticle
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___deathBloodParticle_9;
	// MultiMyStatus MultiPlayerHealth::_multiMyStatus
	MultiMyStatus_t8E6A11BA0E6DB15CAEBA5D83B3DA3CDA2A1E4756* ____multiMyStatus_11;
	// MultiTeamstatus MultiPlayerHealth::_multiTeamstatus
	MultiTeamstatus_t739C9E62B54E1042915863141B282FC1EEA5BCFC* ____multiTeamstatus_12;
};

struct MultiPlayerHealth_tC27A18F8F907AE6D26F7626C475F22A323472367_StaticFields
{
	// System.Int32 MultiPlayerHealth::DoDie
	int32_t ___DoDie_10;
};

// MultiScene
struct MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MultiScene::bossObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bossObject_5;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> MultiScene::_players
	Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* ____players_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MultiScene::weaponsList
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___weaponsList_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MultiScene::enemyList
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___enemyList_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MultiScene::itemsList
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___itemsList_9;
	// UnityEngine.Transform MultiScene::weaponsListParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___weaponsListParent_10;
	// UnityEngine.Transform MultiScene::enemyListParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___enemyListParent_11;
	// UnityEngine.Transform MultiScene::itemListParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___itemListParent_12;
	// UnityEngine.Playables.PlayableDirector MultiScene::secondPlayableDirector
	PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475* ___secondPlayableDirector_13;
	// UnityEngine.Timeline.TimelineAsset MultiScene::secondCut
	TimelineAsset_tE400C944B07CA9D1349BAD84545E24075ADB3496* ___secondCut_14;
	// UnityEngine.Playables.PlayableDirector MultiScene::lastPlayableDirector
	PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475* ___lastPlayableDirector_15;
	// UnityEngine.Timeline.TimelineAsset MultiScene::lastCut
	TimelineAsset_tE400C944B07CA9D1349BAD84545E24075ADB3496* ___lastCut_16;
	// Inventory MultiScene::inventory
	Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* ___inventory_17;
	// TMPro.TextMeshProUGUI MultiScene::itemUsedText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___itemUsedText_18;
	// TMPro.TextMeshProUGUI MultiScene::noticeText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___noticeText_19;
	// TMPro.TextMeshProUGUI MultiScene::coolText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___coolText_20;
	// UnityEngine.GameObject MultiScene::spaceUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spaceUI_21;
	// Cinemachine.CinemachineFreeLook MultiScene::cineCam
	CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* ___cineCam_22;
	// UnityEngine.Camera MultiScene::playerCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___playerCamera_23;
	// UnityEngine.Camera MultiScene::MinimapCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___MinimapCamera_24;
	// UnityEngine.Transform[] MultiScene::positions
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___positions_25;
	// UnityEngine.GameObject MultiScene::playerPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerPrefab_26;
	// System.String MultiScene::currentUser
	String_t* ___currentUser_27;
	// TMPro.TextMeshProUGUI MultiScene::playerNameText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___playerNameText_28;
	// UnityEngine.UI.GridLayoutGroup MultiScene::gridLayoutGroup
	GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* ___gridLayoutGroup_29;
	// UnityEngine.GameObject MultiScene::statusbar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___statusbar_30;
	// TMPro.TextMeshProUGUI MultiScene::playerMyNameText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___playerMyNameText_31;
	// UnityEngine.GameObject MultiScene::playerMyStatus
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerMyStatus_32;
	// UnityEngine.Canvas MultiScene::playerMyCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___playerMyCanvas_33;
	// ThrownWeaponController MultiScene::currentThrownWeaponController
	ThrownWeaponController_t7EC0B88940B2CBF8C1815596D2D55F5F068100D5* ___currentThrownWeaponController_34;
	// MultiPlayerHealthBar MultiScene::multiPlayerHealthBar
	MultiPlayerHealthBar_tDA6B376ABB66AF9BFCA907BB8874BFA90AE44976* ___multiPlayerHealthBar_35;
	// UnityEngine.UI.Image[] MultiScene::skillImages
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ___skillImages_36;
	// TMPro.TextMeshProUGUI MultiScene::skillText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___skillText_37;
	// ObjectHideCamera MultiScene::objectHideCamera
	ObjectHideCamera_tDDEEE61BE0C921B5F00D305E5FF627ECB6C4D68D* ___objectHideCamera_38;
	// EnemyCut MultiScene::enemyCut
	EnemyCut_t95979CEE85AE370FDB13AF4BA6FF73CA4C2C21AE* ___enemyCut_39;
	// FinalCut MultiScene::finalCut
	FinalCut_t1BF3AF5C39CC2BDB938B386B62465E9C89B28422* ___finalCut_40;
	// UnityEngine.GameObject[] MultiScene::itemPrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___itemPrefabs_41;
	// System.Boolean MultiScene::isMasterClient
	bool ___isMasterClient_42;
	// System.Boolean MultiScene::isMine
	bool ___isMine_43;
	// UnityEngine.GameObject MultiScene::Enemy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Enemy_45;
	// MultiPlayerHealth MultiScene::currentPlayerHealth
	MultiPlayerHealth_tC27A18F8F907AE6D26F7626C475F22A323472367* ___currentPlayerHealth_46;
	// System.Boolean MultiScene::isCutScene
	bool ___isCutScene_47;
	// System.String MultiScene::currenViewPlayer
	String_t* ___currenViewPlayer_48;
	// UnityEngine.UI.Image MultiScene::endingImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___endingImage_49;
	// System.Boolean MultiScene::isDead
	bool ___isDead_50;
	// Cinemachine.PostFX.CinemachineVolumeSettings MultiScene::volumeSettings
	CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6* ___volumeSettings_51;
	// UnityEngine.AI.NavMeshAgent MultiScene::nav
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___nav_52;
};

struct MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254_StaticFields
{
	// MultiScene MultiScene::Instance
	MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254* ___Instance_4;
	// System.Int32 MultiScene::AniEnemy
	int32_t ___AniEnemy_44;
};

// ThrownWeaponController
struct ThrownWeaponController_t7EC0B88940B2CBF8C1815596D2D55F5F068100D5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera ThrownWeaponController::_cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____cam_5;
	// UnityEngine.GameObject ThrownWeaponController::grenadePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___grenadePrefab_6;
	// System.Single ThrownWeaponController::maxThrowRange
	float ___maxThrowRange_7;
	// UnityEngine.LayerMask ThrownWeaponController::groundLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundLayer_8;
	// UnityEngine.GameObject ThrownWeaponController::throwRangeIndicator
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___throwRangeIndicator_9;
	// UnityEngine.GameObject ThrownWeaponController::damageRangeIndicator
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___damageRangeIndicator_10;
	// System.Boolean ThrownWeaponController::isGrenadeMode
	bool ___isGrenadeMode_11;
	// System.Int32 ThrownWeaponController::throwMode
	int32_t ___throwMode_12;
	// System.Single ThrownWeaponController::grenadeFlightTime
	float ___grenadeFlightTime_13;
	// System.Single ThrownWeaponController::spinSpeed
	float ___spinSpeed_14;
	// UnityEngine.GameObject ThrownWeaponController::bowSkillEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bowSkillEffect_15;
	// MultiPlayerMovement ThrownWeaponController::_playerMovement
	MultiPlayerMovement_tABAAAD9DC29135759BCE56534591CC3616497E6E* ____playerMovement_16;
	// MultiWeaponController ThrownWeaponController::_currentWeapon
	MultiWeaponController_t4ED94B619B490BE710C1E810753AC0AD69C4AA24* ____currentWeapon_17;
	// UnityEngine.Collider[] ThrownWeaponController::enemies
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___enemies_18;
	// UnityEngine.LayerMask ThrownWeaponController::enemyLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___enemyLayer_19;
	// UnityEngine.Vector3 ThrownWeaponController::_mousePos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____mousePos_20;
};

struct ThrownWeaponController_t7EC0B88940B2CBF8C1815596D2D55F5F068100D5_StaticFields
{
	// System.Int32 ThrownWeaponController::BowSkillHash
	int32_t ___BowSkillHash_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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


// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Func`3<System.Object,System.Byte,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m0B7C817C61D8FB3922386323C065CB74F77BD9E6_gshared (Func_3_t3CE8E004DADF5BF88EE2744980E5B84C88A5A210* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TAccumulate System.Linq.Enumerable::Aggregate<System.Byte,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Aggregate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m8333C55B463C58E2255444C75915071AE250F48C_gshared (RuntimeObject* ___source0, RuntimeObject* ___seed1, Func_3_t3CE8E004DADF5BF88EE2744980E5B84C88A5A210* ___func2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void Data.DataManager::SaveToJsonEncrypted<System.Object>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_SaveToJsonEncrypted_TisRuntimeObject_m17668A4C109A14B4948312A0DE230ABD749BEEA9_gshared (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, RuntimeObject* ___data0, String_t* ___fileName1, const RuntimeMethod* method) ;
// T Data.DataManager::LoadFromJsonEncrypted<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataManager_LoadFromJsonEncrypted_TisRuntimeObject_m1C1B7497F2209188A14D1B19F8A769455A8C44B5_gshared (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, String_t* ___fileName0, const RuntimeMethod* method) ;

// System.Void MNF.Message.StreamBinRecver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBinRecver__ctor_m24281262583470D0F6FB5EDAE3D4E6C2D1D049E5 (StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F* __this, const RuntimeMethod* method) ;
// System.Void MNF.Message.StreamBinRecver::init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBinRecver_init_m45F670928E2B61948FCECE12C4FD3D31DCED44C8 (StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F* __this, const RuntimeMethod* method) ;
// System.Void MNF.Message.StreamBin_RecvBuff::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBin_RecvBuff__ctor_mD916B410F3E26F6A0F20DD4F1604A97607B73A5A (StreamBin_RecvBuff_t2CB7A36B3E81B541D074ED81C387A8BEA5A4582C* __this, const RuntimeMethod* method) ;
// System.Void MNF.Message.StreamBin_RecvBuff::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBin_RecvBuff_Init_mB8036948C97CAFB40C095A6D54EBFDE304205C09 (StreamBin_RecvBuff_t2CB7A36B3E81B541D074ED81C387A8BEA5A4582C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<MNF.Message.StreamBin_RecvBuff>::Enqueue(T)
inline void Queue_1_Enqueue_m388C94C9032FE769FFA18A08F56B7DB691AB765F (Queue_1_tF5C73170A66C7A3ED5399F3C8E31F1DCB55964D8* __this, StreamBin_RecvBuff_t2CB7A36B3E81B541D074ED81C387A8BEA5A4582C* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF5C73170A66C7A3ED5399F3C8E31F1DCB55964D8*, StreamBin_RecvBuff_t2CB7A36B3E81B541D074ED81C387A8BEA5A4582C*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.Queue`1<MNF.Message.StreamBin_RecvBuff>::get_Count()
inline int32_t Queue_1_get_Count_mD0BDC41E95FD9BAB3F7C2857D57BD77A48E3A3BA_inline (Queue_1_tF5C73170A66C7A3ED5399F3C8E31F1DCB55964D8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tF5C73170A66C7A3ED5399F3C8E31F1DCB55964D8*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<MNF.Message.StreamBin_RecvBuff>::Dequeue()
inline StreamBin_RecvBuff_t2CB7A36B3E81B541D074ED81C387A8BEA5A4582C* Queue_1_Dequeue_m3A282F3D48CE0992315A4DF4DB867B612D18CED7 (Queue_1_tF5C73170A66C7A3ED5399F3C8E31F1DCB55964D8* __this, const RuntimeMethod* method)
{
	return ((  StreamBin_RecvBuff_t2CB7A36B3E81B541D074ED81C387A8BEA5A4582C* (*) (Queue_1_tF5C73170A66C7A3ED5399F3C8E31F1DCB55964D8*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<MNF.Message.StreamBin_RecvBuff>::.ctor()
inline void Queue_1__ctor_m48DDFCBB327411C3F6424C505BCB02959B0A3176 (Queue_1_tF5C73170A66C7A3ED5399F3C8E31F1DCB55964D8* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF5C73170A66C7A3ED5399F3C8E31F1DCB55964D8*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5CryptoServiceProvider__ctor_m3A1A5B12FFB04CB3A02E525558BA83A24F828067 (MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B* __this, const RuntimeMethod* method) ;
// System.Void System.Text.UTF8Encoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_m221CD37E0DBDC63D175FE38646E28CA801D08C00 (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* __this, const RuntimeMethod* method) ;
// System.Byte[] MNF.Crypt.MD5Ref::Md5Sum(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MD5Ref_Md5Sum_m9396F7AEDE24215AA7BC6114128FCD1DB4252C1A (MD5Ref_tCFFE2CE5635109955336840153480CA96D609CCD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___byteToEncrypt0, const RuntimeMethod* method) ;
// System.Void System.Func`3<System.String,System.Byte,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m12C9EB1033B280CF3D4FB2526E300837DDE13883 (Func_3_t5E27852773532487771EB4673CEFBF942A91EA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t5E27852773532487771EB4673CEFBF942A91EA6A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_m0B7C817C61D8FB3922386323C065CB74F77BD9E6_gshared)(__this, ___object0, ___method1, method);
}
// TAccumulate System.Linq.Enumerable::Aggregate<System.Byte,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
inline String_t* Enumerable_Aggregate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisString_t_m861BDB2562646E093607189F1AC50BB8F51E0FAB (RuntimeObject* ___source0, String_t* ___seed1, Func_3_t5E27852773532487771EB4673CEFBF942A91EA6A* ___func2, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, String_t*, Func_3_t5E27852773532487771EB4673CEFBF942A91EA6A*, const RuntimeMethod*))Enumerable_Aggregate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m8333C55B463C58E2255444C75915071AE250F48C_gshared)(___source0, ___seed1, ___func2, method);
}
// System.String System.String::PadLeft(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const RuntimeMethod* method) ;
// System.Byte[] MNF.Crypt.MD5Ref::Md5Sum(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MD5Ref_Md5Sum_mDA70BC75142BCC90CDBEA969BA2203C94A051F1B (MD5Ref_tCFFE2CE5635109955336840153480CA96D609CCD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___byteToEncrypt0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void MNF.Crypt.MD5Ref::_checkMd5Sum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5Ref__checkMd5Sum_m47ACAD42E37873A99FD63050B7E40D5CB85620CF (MD5Ref_tCFFE2CE5635109955336840153480CA96D609CCD* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mFAB8CADA69B3BE03B1C974250EEC30ADF8805710 (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.UInt64 System.BitConverter::ToUInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BitConverter_ToUInt64_mD74DF4F6535FC635EB8697FC5175A7D99E3C62BF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Void MNF.Crypt.MD5Ref/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4781D27BC797691E932BAD0569AB416A07EAC0DE (U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0* __this, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m58CEFC66D90B56A11C21C7B24BB856FD797C93A2 (uint8_t ___value0, int32_t ___toBase1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetInteger(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_mE823EC7492A7FB266FA723C168226D17085DF3E8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D9CACEFDE11FF9DB99207B5CBD251C1EC047939 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Data.DataManager::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_SaveData_m582CB1AD808E635001004C3EE57D3BD4E50DB0F5 (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, const RuntimeMethod* method) ;
// System.Void Data.DataManager::InitializeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_InitializeData_m1EC59E10B69B12ADCDC3933232148EFA1B10183A (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, const RuntimeMethod* method) ;
// System.Void Data.PlayerStat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStat__ctor_m7294254F3EEFF569461501393793C01D28EF6DBA (PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7* __this, const RuntimeMethod* method) ;
// System.Void Data.EnemyStat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyStat__ctor_mE48134E0DFA5E94C6F0E504415B55817880AF221 (EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* __this, const RuntimeMethod* method) ;
// System.Void Data.Itemdata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Itemdata__ctor_mEDCA8F1EEF24E1EE9B7BC73849D0735D761A1506 (Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134* __this, const RuntimeMethod* method) ;
// System.Void Data.WeaponData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponData__ctor_m15AA3F31801C9832C5D8C76B22F581C69CB12B56 (WeaponData_tD3011DB326C49F5868296C985745CA832E477245* __this, const RuntimeMethod* method) ;
// System.Void Data.DataManager::SaveToJsonEncrypted<Data.Itemdata>(T,System.String)
inline void DataManager_SaveToJsonEncrypted_TisItemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_m662A7C18FED39D58A9809A98B353C6168222C0F1 (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134* ___data0, String_t* ___fileName1, const RuntimeMethod* method)
{
	((  void (*) (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366*, Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134*, String_t*, const RuntimeMethod*))DataManager_SaveToJsonEncrypted_TisRuntimeObject_m17668A4C109A14B4948312A0DE230ABD749BEEA9_gshared)(__this, ___data0, ___fileName1, method);
}
// System.Void Data.DataManager::SaveToJsonEncrypted<Data.PlayerStat>(T,System.String)
inline void DataManager_SaveToJsonEncrypted_TisPlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7_m4EABAA5234B0BC971A706856DB8AE403FEEB883C (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7* ___data0, String_t* ___fileName1, const RuntimeMethod* method)
{
	((  void (*) (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366*, PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7*, String_t*, const RuntimeMethod*))DataManager_SaveToJsonEncrypted_TisRuntimeObject_m17668A4C109A14B4948312A0DE230ABD749BEEA9_gshared)(__this, ___data0, ___fileName1, method);
}
// System.Void Data.DataManager::SaveToJsonEncrypted<Data.EnemyStat>(T,System.String)
inline void DataManager_SaveToJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_m3D59A9E428A19014A73BCC262247E50C752445D5 (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* ___data0, String_t* ___fileName1, const RuntimeMethod* method)
{
	((  void (*) (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366*, EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F*, String_t*, const RuntimeMethod*))DataManager_SaveToJsonEncrypted_TisRuntimeObject_m17668A4C109A14B4948312A0DE230ABD749BEEA9_gshared)(__this, ___data0, ___fileName1, method);
}
// System.Void Data.DataManager::SaveToJsonEncrypted<Data.WeaponData>(T,System.String)
inline void DataManager_SaveToJsonEncrypted_TisWeaponData_tD3011DB326C49F5868296C985745CA832E477245_m9F7F4BD669044B6394DDDC049926E505411B5854 (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, WeaponData_tD3011DB326C49F5868296C985745CA832E477245* ___data0, String_t* ___fileName1, const RuntimeMethod* method)
{
	((  void (*) (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366*, WeaponData_tD3011DB326C49F5868296C985745CA832E477245*, String_t*, const RuntimeMethod*))DataManager_SaveToJsonEncrypted_TisRuntimeObject_m17668A4C109A14B4948312A0DE230ABD749BEEA9_gshared)(__this, ___data0, ___fileName1, method);
}
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.Security.Cryptography.Aes System.Security.Cryptography.Aes::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* Aes_Create_mA7AA221AEC418AC59B642AB2C536766C1309C006 (const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CryptoStream::.ctor(System.IO.Stream,System.Security.Cryptography.ICryptoTransform,System.Security.Cryptography.CryptoStreamMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6 (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, RuntimeObject* ___transform1, int32_t ___mode2, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CryptoStream::FlushFinalBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoStream_FlushFinalBlock_m21F69C3EC538EB149CFBF9183650FF3A004E0D05 (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* __this, const RuntimeMethod* method) ;
// System.String System.String::TrimEnd(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_mDB4D96F8312F563656D4115A9F280062E05D2EE8 (String_t* __this, Il2CppChar ___trimChar0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_mBBC742FA17F8BD4156C4CB98480BEFBFB0BBB6D9 (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// T Data.DataManager::LoadFromJsonEncrypted<Data.PlayerStat>(System.String)
inline PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7* DataManager_LoadFromJsonEncrypted_TisPlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7_m6DF66D227281FA47E7FDCEEF44D82D98D794614A (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, String_t* ___fileName0, const RuntimeMethod* method)
{
	return ((  PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7* (*) (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366*, String_t*, const RuntimeMethod*))DataManager_LoadFromJsonEncrypted_TisRuntimeObject_m1C1B7497F2209188A14D1B19F8A769455A8C44B5_gshared)(__this, ___fileName0, method);
}
// T Data.DataManager::LoadFromJsonEncrypted<Data.Itemdata>(System.String)
inline Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134* DataManager_LoadFromJsonEncrypted_TisItemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_m1F856BC4CAE4FBB9394F567CB13A792CFD8BBCAB (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, String_t* ___fileName0, const RuntimeMethod* method)
{
	return ((  Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134* (*) (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366*, String_t*, const RuntimeMethod*))DataManager_LoadFromJsonEncrypted_TisRuntimeObject_m1C1B7497F2209188A14D1B19F8A769455A8C44B5_gshared)(__this, ___fileName0, method);
}
// T Data.DataManager::LoadFromJsonEncrypted<Data.WeaponData>(System.String)
inline WeaponData_tD3011DB326C49F5868296C985745CA832E477245* DataManager_LoadFromJsonEncrypted_TisWeaponData_tD3011DB326C49F5868296C985745CA832E477245_m4DF55DAF9C732E74AF7BC371994F47F38AB2986E (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, String_t* ___fileName0, const RuntimeMethod* method)
{
	return ((  WeaponData_tD3011DB326C49F5868296C985745CA832E477245* (*) (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366*, String_t*, const RuntimeMethod*))DataManager_LoadFromJsonEncrypted_TisRuntimeObject_m1C1B7497F2209188A14D1B19F8A769455A8C44B5_gshared)(__this, ___fileName0, method);
}
// T Data.DataManager::LoadFromJsonEncrypted<Data.EnemyStat>(System.String)
inline EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* DataManager_LoadFromJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_mD7DBBB98B1EFD8423EB11A185E00FF558F6AF160 (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, String_t* ___fileName0, const RuntimeMethod* method)
{
	return ((  EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* (*) (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366*, String_t*, const RuntimeMethod*))DataManager_LoadFromJsonEncrypted_TisRuntimeObject_m1C1B7497F2209188A14D1B19F8A769455A8C44B5_gshared)(__this, ___fileName0, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void MultiPlayerHealth::UpdateHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiPlayerHealth_UpdateHealth_mC9ED8936D12AC13A15E2C8723943338D02C94496 (MultiPlayerHealth_tC27A18F8F907AE6D26F7626C475F22A323472367* __this, const RuntimeMethod* method) ;
// System.Void MultiScene::BroadCastingItemUse(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiScene_BroadCastingItemUse_mCAD6049DE1AF7CF710C3DC7640915641DCBA81C7 (MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254* __this, int32_t ___itemType0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Data.DataManager::DisplayItemMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataManager_DisplayItemMessage_m8754D3904EC00543890BAE96DDF8AD729D58F0D7 (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Data.DataManager/<DisplayItemMessage>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayItemMessageU3Ed__25__ctor_m9D9B67875633F12E0FA267C81739CA70560DA8C4 (U3CDisplayItemMessageU3Ed__25_t4BCB2C0FCB601FF60842813E06B20C2548BBF64F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MNF.Message.StreamBinRecver::Alloc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBinRecver_Alloc_m1FBB101B771BE5FA3CC843B67AC59ED432EA11FF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// g = new StreamBinRecver();
		StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F* L_0 = (StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F*)il2cpp_codegen_object_new(StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StreamBinRecver__ctor_m24281262583470D0F6FB5EDAE3D4E6C2D1D049E5(L_0, NULL);
		((StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F_StaticFields*)il2cpp_codegen_static_fields_for(StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F_il2cpp_TypeInfo_var))->___g_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F_StaticFields*)il2cpp_codegen_static_fields_for(StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F_il2cpp_TypeInfo_var))->___g_0), (void*)L_0);
		// g.init();
		StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F* L_1 = ((StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F_StaticFields*)il2cpp_codegen_static_fields_for(StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F_il2cpp_TypeInfo_var))->___g_0;
		NullCheck(L_1);
		StreamBinRecver_init_m45F670928E2B61948FCECE12C4FD3D31DCED44C8(L_1, NULL);
		// }
		return;
	}
}
// System.Void MNF.Message.StreamBinRecver::init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBinRecver_init_m45F670928E2B61948FCECE12C4FD3D31DCED44C8 (StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m388C94C9032FE769FFA18A08F56B7DB691AB765F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamBin_RecvBuff_t2CB7A36B3E81B541D074ED81C387A8BEA5A4582C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StreamBin_RecvBuff_t2CB7A36B3E81B541D074ED81C387A8BEA5A4582C* V_1 = NULL;
	{
		// for( int i = 0 ; i < max_buffObj ; i++ )
		V_0 = 0;
		goto IL_0020;
	}

IL_0004:
	{
		// StreamBin_RecvBuff obj =    new StreamBin_RecvBuff();
		StreamBin_RecvBuff_t2CB7A36B3E81B541D074ED81C387A8BEA5A4582C* L_0 = (StreamBin_RecvBuff_t2CB7A36B3E81B541D074ED81C387A8BEA5A4582C*)il2cpp_codegen_object_new(StreamBin_RecvBuff_t2CB7A36B3E81B541D074ED81C387A8BEA5A4582C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StreamBin_RecvBuff__ctor_mD916B410F3E26F6A0F20DD4F1604A97607B73A5A(L_0, NULL);
		V_1 = L_0;
		// obj.Init();
		StreamBin_RecvBuff_t2CB7A36B3E81B541D074ED81C387A8BEA5A4582C* L_1 = V_1;
		NullCheck(L_1);
		StreamBin_RecvBuff_Init_mB8036948C97CAFB40C095A6D54EBFDE304205C09(L_1, NULL);
		// qRecvBuff.Enqueue( obj );
		Queue_1_tF5C73170A66C7A3ED5399F3C8E31F1DCB55964D8* L_2 = __this->___qRecvBuff_3;
		StreamBin_RecvBuff_t2CB7A36B3E81B541D074ED81C387A8BEA5A4582C* L_3 = V_1;
		NullCheck(L_2);
		Queue_1_Enqueue_m388C94C9032FE769FFA18A08F56B7DB691AB765F(L_2, L_3, Queue_1_Enqueue_m388C94C9032FE769FFA18A08F56B7DB691AB765F_RuntimeMethod_var);
		// for( int i = 0 ; i < max_buffObj ; i++ )
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0020:
	{
		// for( int i = 0 ; i < max_buffObj ; i++ )
		int32_t L_5 = V_0;
		int32_t L_6 = __this->___max_buffObj_2;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// MNF.Message.StreamBin_RecvBuff MNF.Message.StreamBinRecver::GetRecvBuffObj()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamBin_RecvBuff_t2CB7A36B3E81B541D074ED81C387A8BEA5A4582C* StreamBinRecver_GetRecvBuffObj_m0576F0D8A004310086B869873FE773AA2F25E188 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m3A282F3D48CE0992315A4DF4DB867B612D18CED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mD0BDC41E95FD9BAB3F7C2857D57BD77A48E3A3BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DB891A53F82548D312196F194FEA8F3F97CAE25);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( g.qRecvBuff.Count < 1 )
		StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F* L_0 = ((StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F_StaticFields*)il2cpp_codegen_static_fields_for(StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F_il2cpp_TypeInfo_var))->___g_0;
		NullCheck(L_0);
		Queue_1_tF5C73170A66C7A3ED5399F3C8E31F1DCB55964D8* L_1 = L_0->___qRecvBuff_3;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Queue_1_get_Count_mD0BDC41E95FD9BAB3F7C2857D57BD77A48E3A3BA_inline(L_1, Queue_1_get_Count_mD0BDC41E95FD9BAB3F7C2857D57BD77A48E3A3BA_RuntimeMethod_var);
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		// Debug.LogError( "!!! GetRecvBuffObj : g.qRecvBuff.Count < 1 " );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral6DB891A53F82548D312196F194FEA8F3F97CAE25, NULL);
		// return null;
		return (StreamBin_RecvBuff_t2CB7A36B3E81B541D074ED81C387A8BEA5A4582C*)NULL;
	}

IL_001e:
	{
		// return g.qRecvBuff.Dequeue();
		StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F* L_3 = ((StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F_StaticFields*)il2cpp_codegen_static_fields_for(StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F_il2cpp_TypeInfo_var))->___g_0;
		NullCheck(L_3);
		Queue_1_tF5C73170A66C7A3ED5399F3C8E31F1DCB55964D8* L_4 = L_3->___qRecvBuff_3;
		NullCheck(L_4);
		StreamBin_RecvBuff_t2CB7A36B3E81B541D074ED81C387A8BEA5A4582C* L_5;
		L_5 = Queue_1_Dequeue_m3A282F3D48CE0992315A4DF4DB867B612D18CED7(L_4, Queue_1_Dequeue_m3A282F3D48CE0992315A4DF4DB867B612D18CED7_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void MNF.Message.StreamBinRecver::ReturnRecvBuffObj(MNF.Message.StreamBin_RecvBuff)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBinRecver_ReturnRecvBuffObj_mBD57E1BE36A7722D817C12FB0888C24131A06300 (StreamBin_RecvBuff_t2CB7A36B3E81B541D074ED81C387A8BEA5A4582C* ___buff_obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m388C94C9032FE769FFA18A08F56B7DB691AB765F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// g.qRecvBuff.Enqueue( buff_obj );
		StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F* L_0 = ((StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F_StaticFields*)il2cpp_codegen_static_fields_for(StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F_il2cpp_TypeInfo_var))->___g_0;
		NullCheck(L_0);
		Queue_1_tF5C73170A66C7A3ED5399F3C8E31F1DCB55964D8* L_1 = L_0->___qRecvBuff_3;
		StreamBin_RecvBuff_t2CB7A36B3E81B541D074ED81C387A8BEA5A4582C* L_2 = ___buff_obj0;
		NullCheck(L_1);
		Queue_1_Enqueue_m388C94C9032FE769FFA18A08F56B7DB691AB765F(L_1, L_2, Queue_1_Enqueue_m388C94C9032FE769FFA18A08F56B7DB691AB765F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MNF.Message.StreamBinRecver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBinRecver__ctor_m24281262583470D0F6FB5EDAE3D4E6C2D1D049E5 (StreamBinRecver_tA46EFD7A142B3D278095A09357D3325C3809960F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m48DDFCBB327411C3F6424C505BCB02959B0A3176_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tF5C73170A66C7A3ED5399F3C8E31F1DCB55964D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly int max_buffObj = 200;
		__this->___max_buffObj_2 = ((int32_t)200);
		// public readonly Queue<StreamBin_RecvBuff>qRecvBuff = new Queue<StreamBin_RecvBuff>();
		Queue_1_tF5C73170A66C7A3ED5399F3C8E31F1DCB55964D8* L_0 = (Queue_1_tF5C73170A66C7A3ED5399F3C8E31F1DCB55964D8*)il2cpp_codegen_object_new(Queue_1_tF5C73170A66C7A3ED5399F3C8E31F1DCB55964D8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_m48DDFCBB327411C3F6424C505BCB02959B0A3176(L_0, Queue_1__ctor_m48DDFCBB327411C3F6424C505BCB02959B0A3176_RuntimeMethod_var);
		__this->___qRecvBuff_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___qRecvBuff_3), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
void OnRecv_KW_Invoke_m7BF471DDE75A72B284B860B977923DA13AD750B6_Multicast(OnRecv_KW_tB49CF6FDFF75C8A9228073981DD7CC7E2FC5E243* __this, NetHead_t809B4FC6347D3B786C431C442EDDCEA390A20C9C* ___head0, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___br1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnRecv_KW_tB49CF6FDFF75C8A9228073981DD7CC7E2FC5E243* currentDelegate = reinterpret_cast<OnRecv_KW_tB49CF6FDFF75C8A9228073981DD7CC7E2FC5E243*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, NetHead_t809B4FC6347D3B786C431C442EDDCEA390A20C9C*, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___head0, ___br1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnRecv_KW_Invoke_m7BF471DDE75A72B284B860B977923DA13AD750B6_OpenInst(OnRecv_KW_tB49CF6FDFF75C8A9228073981DD7CC7E2FC5E243* __this, NetHead_t809B4FC6347D3B786C431C442EDDCEA390A20C9C* ___head0, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___br1, const RuntimeMethod* method)
{
	NullCheck(___head0);
	typedef void (*FunctionPointerType) (NetHead_t809B4FC6347D3B786C431C442EDDCEA390A20C9C*, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___head0, ___br1, method);
}
void OnRecv_KW_Invoke_m7BF471DDE75A72B284B860B977923DA13AD750B6_OpenStatic(OnRecv_KW_tB49CF6FDFF75C8A9228073981DD7CC7E2FC5E243* __this, NetHead_t809B4FC6347D3B786C431C442EDDCEA390A20C9C* ___head0, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___br1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (NetHead_t809B4FC6347D3B786C431C442EDDCEA390A20C9C*, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___head0, ___br1, method);
}
void OnRecv_KW_Invoke_m7BF471DDE75A72B284B860B977923DA13AD750B6_OpenVirtual(OnRecv_KW_tB49CF6FDFF75C8A9228073981DD7CC7E2FC5E243* __this, NetHead_t809B4FC6347D3B786C431C442EDDCEA390A20C9C* ___head0, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___br1, const RuntimeMethod* method)
{
	NullCheck(___head0);
	VirtualActionInvoker1< BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* >::Invoke(il2cpp_codegen_method_get_slot(method), ___head0, ___br1);
}
void OnRecv_KW_Invoke_m7BF471DDE75A72B284B860B977923DA13AD750B6_OpenInterface(OnRecv_KW_tB49CF6FDFF75C8A9228073981DD7CC7E2FC5E243* __this, NetHead_t809B4FC6347D3B786C431C442EDDCEA390A20C9C* ___head0, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___br1, const RuntimeMethod* method)
{
	NullCheck(___head0);
	InterfaceActionInvoker1< BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___head0, ___br1);
}
void OnRecv_KW_Invoke_m7BF471DDE75A72B284B860B977923DA13AD750B6_OpenGenericVirtual(OnRecv_KW_tB49CF6FDFF75C8A9228073981DD7CC7E2FC5E243* __this, NetHead_t809B4FC6347D3B786C431C442EDDCEA390A20C9C* ___head0, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___br1, const RuntimeMethod* method)
{
	NullCheck(___head0);
	GenericVirtualActionInvoker1< BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* >::Invoke(method, ___head0, ___br1);
}
void OnRecv_KW_Invoke_m7BF471DDE75A72B284B860B977923DA13AD750B6_OpenGenericInterface(OnRecv_KW_tB49CF6FDFF75C8A9228073981DD7CC7E2FC5E243* __this, NetHead_t809B4FC6347D3B786C431C442EDDCEA390A20C9C* ___head0, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___br1, const RuntimeMethod* method)
{
	NullCheck(___head0);
	GenericInterfaceActionInvoker1< BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* >::Invoke(method, ___head0, ___br1);
}
// System.Void MNF.Message.StreamBinRecver/OnRecv_KW::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRecv_KW__ctor_m5C421566F19AACA1860098B56A10EB7DCEBE81B7 (OnRecv_KW_tB49CF6FDFF75C8A9228073981DD7CC7E2FC5E243* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&OnRecv_KW_Invoke_m7BF471DDE75A72B284B860B977923DA13AD750B6_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnRecv_KW_Invoke_m7BF471DDE75A72B284B860B977923DA13AD750B6_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnRecv_KW_Invoke_m7BF471DDE75A72B284B860B977923DA13AD750B6_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnRecv_KW_Invoke_m7BF471DDE75A72B284B860B977923DA13AD750B6_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnRecv_KW_Invoke_m7BF471DDE75A72B284B860B977923DA13AD750B6_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnRecv_KW_Invoke_m7BF471DDE75A72B284B860B977923DA13AD750B6_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnRecv_KW_Invoke_m7BF471DDE75A72B284B860B977923DA13AD750B6_Multicast;
}
// System.Void MNF.Message.StreamBinRecver/OnRecv_KW::Invoke(MNF.NetHead,System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRecv_KW_Invoke_m7BF471DDE75A72B284B860B977923DA13AD750B6 (OnRecv_KW_tB49CF6FDFF75C8A9228073981DD7CC7E2FC5E243* __this, NetHead_t809B4FC6347D3B786C431C442EDDCEA390A20C9C* ___head0, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___br1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, NetHead_t809B4FC6347D3B786C431C442EDDCEA390A20C9C*, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___head0, ___br1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MNF.Message.StreamBinRecver/OnRecv_KW::BeginInvoke(MNF.NetHead,System.IO.BinaryReader,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnRecv_KW_BeginInvoke_mF6BC20DFA7D61F4D293874C60A6D4405CBCB3E93 (OnRecv_KW_tB49CF6FDFF75C8A9228073981DD7CC7E2FC5E243* __this, NetHead_t809B4FC6347D3B786C431C442EDDCEA390A20C9C* ___head0, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___br1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___head0;
	__d_args[1] = ___br1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void MNF.Message.StreamBinRecver/OnRecv_KW::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRecv_KW_EndInvoke_m7CDD2EF6CC8AF3C3AA21D7FE133594AEE8393ABC (OnRecv_KW_tB49CF6FDFF75C8A9228073981DD7CC7E2FC5E243* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void MNF.Crypt.MD5Ref::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5Ref__ctor_mA65004AC48BAA7C8EB06253E991BE7AF2331F5FA (MD5Ref_tCFFE2CE5635109955336840153480CA96D609CCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MD5Ref()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// md5 = new MD5CryptoServiceProvider();
		MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B* L_0 = (MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B*)il2cpp_codegen_object_new(MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MD5CryptoServiceProvider__ctor_m3A1A5B12FFB04CB3A02E525558BA83A24F828067(L_0, NULL);
		__this->___md5_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___md5_0), (void*)L_0);
		// }
		return;
	}
}
// System.String MNF.Crypt.MD5Ref::Md5SumToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MD5Ref_Md5SumToString_m85646B6D1766BBDC86D20F1750A46D5007ABA11A (MD5Ref_tCFFE2CE5635109955336840153480CA96D609CCD* __this, String_t* ___strToEncrypt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Aggregate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisString_t_m861BDB2562646E093607189F1AC50BB8F51E0FAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t5E27852773532487771EB4673CEFBF942A91EA6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CMd5SumToStringU3Eb__2_0_m16793B2D420B497E910FA2154F8D58C800B56B9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* V_0 = NULL;
	Func_3_t5E27852773532487771EB4673CEFBF942A91EA6A* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_2 = NULL;
	Func_3_t5E27852773532487771EB4673CEFBF942A91EA6A* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_2 = NULL;
	{
		// var ue = new UTF8Encoding();
		UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* L_0 = (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE*)il2cpp_codegen_object_new(UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UTF8Encoding__ctor_m221CD37E0DBDC63D175FE38646E28CA801D08C00(L_0, NULL);
		V_0 = L_0;
		// var hashBytes = Md5Sum(ue.GetBytes(strToEncrypt));
		UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* L_1 = V_0;
		String_t* L_2 = ___strToEncrypt0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = MD5Ref_Md5Sum_m9396F7AEDE24215AA7BC6114128FCD1DB4252C1A(__this, L_3, NULL);
		// string hashString = hashBytes.Aggregate("", (current, t) => current + System.Convert.ToString(t, 16).PadLeft(2, '0'));
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0_il2cpp_TypeInfo_var);
		Func_3_t5E27852773532487771EB4673CEFBF942A91EA6A* L_5 = ((U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1;
		Func_3_t5E27852773532487771EB4673CEFBF942A91EA6A* L_6 = L_5;
		G_B1_0 = L_6;
		G_B1_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B1_2 = L_4;
		if (L_6)
		{
			G_B2_0 = L_6;
			G_B2_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			G_B2_2 = L_4;
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0_il2cpp_TypeInfo_var);
		U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0* L_7 = ((U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_3_t5E27852773532487771EB4673CEFBF942A91EA6A* L_8 = (Func_3_t5E27852773532487771EB4673CEFBF942A91EA6A*)il2cpp_codegen_object_new(Func_3_t5E27852773532487771EB4673CEFBF942A91EA6A_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Func_3__ctor_m12C9EB1033B280CF3D4FB2526E300837DDE13883(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3CMd5SumToStringU3Eb__2_0_m16793B2D420B497E910FA2154F8D58C800B56B9B_RuntimeMethod_var), NULL);
		Func_3_t5E27852773532487771EB4673CEFBF942A91EA6A* L_9 = L_8;
		((U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1), (void*)L_9);
		G_B2_0 = L_9;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0037:
	{
		String_t* L_10;
		L_10 = Enumerable_Aggregate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisString_t_m861BDB2562646E093607189F1AC50BB8F51E0FAB((RuntimeObject*)G_B2_2, G_B2_1, G_B2_0, Enumerable_Aggregate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisString_t_m861BDB2562646E093607189F1AC50BB8F51E0FAB_RuntimeMethod_var);
		// return hashString.PadLeft(32, '0');
		NullCheck(L_10);
		String_t* L_11;
		L_11 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_10, ((int32_t)32), ((int32_t)48), NULL);
		return L_11;
	}
}
// System.Byte[] MNF.Crypt.MD5Ref::Md5Sum(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MD5Ref_Md5Sum_mA072EA205DAF0CA5CA9FD4812BCBA00299BD901C (MD5Ref_tCFFE2CE5635109955336840153480CA96D609CCD* __this, String_t* ___strToEncrypt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* V_0 = NULL;
	{
		// var ue = new UTF8Encoding();
		UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* L_0 = (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE*)il2cpp_codegen_object_new(UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UTF8Encoding__ctor_m221CD37E0DBDC63D175FE38646E28CA801D08C00(L_0, NULL);
		V_0 = L_0;
		// return Md5Sum(ue.GetBytes(strToEncrypt));
		UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* L_1 = V_0;
		String_t* L_2 = ___strToEncrypt0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = MD5Ref_Md5Sum_m9396F7AEDE24215AA7BC6114128FCD1DB4252C1A(__this, L_3, NULL);
		return L_4;
	}
}
// System.Byte[] MNF.Crypt.MD5Ref::Md5Sum(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MD5Ref_Md5Sum_m9396F7AEDE24215AA7BC6114128FCD1DB4252C1A (MD5Ref_tCFFE2CE5635109955336840153480CA96D609CCD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___byteToEncrypt0, const RuntimeMethod* method) 
{
	{
		// return Md5Sum(byteToEncrypt, 0, byteToEncrypt.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___byteToEncrypt0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___byteToEncrypt0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = MD5Ref_Md5Sum_mDA70BC75142BCC90CDBEA969BA2203C94A051F1B(__this, L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		return L_2;
	}
}
// System.Byte[] MNF.Crypt.MD5Ref::Md5Sum(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MD5Ref_Md5Sum_mDA70BC75142BCC90CDBEA969BA2203C94A051F1B (MD5Ref_tCFFE2CE5635109955336840153480CA96D609CCD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___byteToEncrypt0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		// _checkMd5Sum();
		MD5Ref__checkMd5Sum_m47ACAD42E37873A99FD63050B7E40D5CB85620CF(__this, NULL);
		// return md5.ComputeHash(byteToEncrypt, offset, count);
		MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B* L_0 = __this->___md5_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___byteToEncrypt0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = HashAlgorithm_ComputeHash_mFAB8CADA69B3BE03B1C974250EEC30ADF8805710(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void MNF.Crypt.MD5Ref::_checkMd5Sum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5Ref__checkMd5Sum_m47ACAD42E37873A99FD63050B7E40D5CB85620CF (MD5Ref_tCFFE2CE5635109955336840153480CA96D609CCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// md5 ??= new MD5CryptoServiceProvider();
		MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B* L_0 = __this->___md5_0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B* L_1 = (MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B*)il2cpp_codegen_object_new(MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MD5CryptoServiceProvider__ctor_m3A1A5B12FFB04CB3A02E525558BA83A24F828067(L_1, NULL);
		__this->___md5_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___md5_0), (void*)L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void MNF.Crypt.MD5Ref::convertToInteger(System.Byte[],System.UInt64&,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5Ref_convertToInteger_mADDF2D0CB5BED67536241A3E50A22F5666003503 (MD5Ref_tCFFE2CE5635109955336840153480CA96D609CCD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encryptedByte0, uint64_t* ___checksum11, uint64_t* ___checksum22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// checksum1 = BitConverter.ToUInt64(encryptedByte, 0);
		uint64_t* L_0 = ___checksum11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___encryptedByte0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = BitConverter_ToUInt64_mD74DF4F6535FC635EB8697FC5175A7D99E3C62BF(L_1, 0, NULL);
		*((int64_t*)L_0) = (int64_t)L_2;
		// checksum2 = BitConverter.ToUInt64(encryptedByte, 8);
		uint64_t* L_3 = ___checksum22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___encryptedByte0;
		uint64_t L_5;
		L_5 = BitConverter_ToUInt64_mD74DF4F6535FC635EB8697FC5175A7D99E3C62BF(L_4, 8, NULL);
		*((int64_t*)L_3) = (int64_t)L_5;
		// }
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
// System.Void MNF.Crypt.MD5Ref/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD501B0E9FD2CC6A9FB862C557A6AA5C2089CC4E2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0* L_0 = (U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0*)il2cpp_codegen_object_new(U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m4781D27BC797691E932BAD0569AB416A07EAC0DE(L_0, NULL);
		((U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void MNF.Crypt.MD5Ref/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4781D27BC797691E932BAD0569AB416A07EAC0DE (U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String MNF.Crypt.MD5Ref/<>c::<Md5SumToString>b__2_0(System.String,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CMd5SumToStringU3Eb__2_0_m16793B2D420B497E910FA2154F8D58C800B56B9B (U3CU3Ec_t68E89A2FEA525B4AD449AA5095BD72ECD529DAF0* __this, String_t* ___current0, uint8_t ___t1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string hashString = hashBytes.Aggregate("", (current, t) => current + System.Convert.ToString(t, 16).PadLeft(2, '0'));
		String_t* L_0 = ___current0;
		uint8_t L_1 = ___t1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m58CEFC66D90B56A11C21C7B24BB856FD797C93A2(L_1, ((int32_t)16), NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_2, 2, ((int32_t)48), NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, L_3, NULL);
		return L_4;
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
// System.Void mino.AniSetting::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AniSetting_Start_m404FB5E6C35E5186C89DD9DFAD7F1BA1FE38FFD9 (AniSetting_t3A43D3884B2949A0D376602BB3996564099F2430* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ani = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___ani_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ani_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void mino.AniSetting::ChangeAnimation(mino.PlayerState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AniSetting_ChangeAnimation_mDAB9C863BA5717600E7F3F13BAB1ED4980D2DC30 (AniSetting_t3A43D3884B2949A0D376602BB3996564099F2430* __this, int32_t ___aniNumber0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AniSetting_t3A43D3884B2949A0D376602BB3996564099F2430_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ani.SetInteger(AniPlayer, (int)aniNumber);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___ani_4;
		il2cpp_codegen_runtime_class_init_inline(AniSetting_t3A43D3884B2949A0D376602BB3996564099F2430_il2cpp_TypeInfo_var);
		int32_t L_1 = ((AniSetting_t3A43D3884B2949A0D376602BB3996564099F2430_StaticFields*)il2cpp_codegen_static_fields_for(AniSetting_t3A43D3884B2949A0D376602BB3996564099F2430_il2cpp_TypeInfo_var))->___AniPlayer_5;
		int32_t L_2 = ___aniNumber0;
		NullCheck(L_0);
		Animator_SetInteger_mE823EC7492A7FB266FA723C168226D17085DF3E8(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void mino.AniSetting::SetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AniSetting_SetTrigger_mD0F5AA1C28FBFF5573FBB90D4A50B079FB8E177C (AniSetting_t3A43D3884B2949A0D376602BB3996564099F2430* __this, int32_t ___aniNumber0, const RuntimeMethod* method) 
{
	{
		// ani.SetTrigger(aniNumber);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___ani_4;
		int32_t L_1 = ___aniNumber0;
		NullCheck(L_0);
		Animator_SetTrigger_m2D9CACEFDE11FF9DB99207B5CBD251C1EC047939(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void mino.AniSetting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AniSetting__ctor_m7708195F39761751256FA979923169BEA75FC562 (AniSetting_t3A43D3884B2949A0D376602BB3996564099F2430* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void mino.AniSetting::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AniSetting__cctor_mCB0FADC051DF62349205E5D89A31A4A8EFE0EF45 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AniSetting_t3A43D3884B2949A0D376602BB3996564099F2430_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A24569BA19C0F302763EF4C18CAC4574B19DCE3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int AniPlayer = Animator.StringToHash("aniPlayer");
		int32_t L_0;
		L_0 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(_stringLiteral5A24569BA19C0F302763EF4C18CAC4574B19DCE3, NULL);
		((AniSetting_t3A43D3884B2949A0D376602BB3996564099F2430_StaticFields*)il2cpp_codegen_static_fields_for(AniSetting_t3A43D3884B2949A0D376602BB3996564099F2430_il2cpp_TypeInfo_var))->___AniPlayer_5 = L_0;
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
// System.Void Data.PlayerStat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStat__ctor_m7294254F3EEFF569461501393793C01D28EF6DBA (PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string name = "";
		__this->___name_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Data.EnemyStat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyStat__ctor_mE48134E0DFA5E94C6F0E504415B55817880AF221 (EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Data.Itemdata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Itemdata__ctor_mEDCA8F1EEF24E1EE9B7BC73849D0735D761A1506 (Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string itemName = ""; // ???? ??
		__this->___itemName_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___itemName_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Data.WeaponData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponData__ctor_m15AA3F31801C9832C5D8C76B22F581C69CB12B56 (WeaponData_tD3011DB326C49F5868296C985745CA832E477245* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Data.DataManager::get_isDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataManager_get_isDead_mEDD3F7D038764AC3282338A5202DFA40BD749CE0 (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, const RuntimeMethod* method) 
{
	{
		// public bool isDead { get; set; }
		bool L_0 = __this->___U3CisDeadU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Data.DataManager::set_isDead(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_set_isDead_mF018D3E2A37C9E7E4EB79B4503703E4CDFAC1D6B (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isDead { get; set; }
		bool L_0 = ___value0;
		__this->___U3CisDeadU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Data.DataManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_Start_mF9C59B147AB920516771D251429A36DB86C6FDC8 (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, const RuntimeMethod* method) 
{
	{
		// SaveData();
		DataManager_SaveData_m582CB1AD808E635001004C3EE57D3BD4E50DB0F5(__this, NULL);
		// InitializeData();
		DataManager_InitializeData_m1EC59E10B69B12ADCDC3933232148EFA1B10183A(__this, NULL);
		// }
		return;
	}
}
// System.Void Data.DataManager::InitializeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_InitializeData_m1EC59E10B69B12ADCDC3933232148EFA1B10183A (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_SaveToJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_m3D59A9E428A19014A73BCC262247E50C752445D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_SaveToJsonEncrypted_TisItemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_m662A7C18FED39D58A9809A98B353C6168222C0F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_SaveToJsonEncrypted_TisPlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7_m4EABAA5234B0BC971A706856DB8AE403FEEB883C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_SaveToJsonEncrypted_TisWeaponData_tD3011DB326C49F5868296C985745CA832E477245_m9F7F4BD669044B6394DDDC049926E505411B5854_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeaponData_tD3011DB326C49F5868296C985745CA832E477245_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral430B038DD402BC010D84227D958DD4E92B2BE845);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54B143D289AAC65CADF64A40F1FAB5CBB1D714FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6787E73E2E06405532890242579A8D9EA0E86C10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970CC57CB5C903AF48E2BA90910F0E408DAC9211);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE505E59A5B7D2AB610AFC88391056C7EC96AD5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEFB6C80B9AC59A5604131FE3F13F1457211DBA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCE1EA4C527473DF57D33AEB569949A2E114E0E2);
		s_Il2CppMethodInitialized = true;
	}
	PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7* V_0 = NULL;
	EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* V_1 = NULL;
	EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* V_2 = NULL;
	EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* V_3 = NULL;
	Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134* V_4 = NULL;
	WeaponData_tD3011DB326C49F5868296C985745CA832E477245* V_5 = NULL;
	{
		// var playerStat = new PlayerStat
		// {
		//     name = "",
		//     Level = 1,
		//     Exp = 0,
		//     Health = 1000,
		//     PlayerHealth = 1000
		// };
		PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7* L_0 = (PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7*)il2cpp_codegen_object_new(PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PlayerStat__ctor_m7294254F3EEFF569461501393793C01D28EF6DBA(L_0, NULL);
		PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7* L_1 = L_0;
		NullCheck(L_1);
		L_1->___name_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___name_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7* L_2 = L_1;
		NullCheck(L_2);
		L_2->___Level_1 = (1.0f);
		PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7* L_3 = L_2;
		NullCheck(L_3);
		L_3->___Exp_2 = (0.0f);
		PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7* L_4 = L_3;
		NullCheck(L_4);
		L_4->___Health_4 = (1000.0f);
		PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7* L_5 = L_4;
		NullCheck(L_5);
		L_5->___PlayerHealth_3 = (1000.0f);
		V_0 = L_5;
		// var enemyStat1 = new EnemyStat
		// {
		//     EnemyHealth = 100,
		//     damage = 30,
		//     Health = 100,
		//     Heal=20
		// };
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_6 = (EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F*)il2cpp_codegen_object_new(EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		EnemyStat__ctor_mE48134E0DFA5E94C6F0E504415B55817880AF221(L_6, NULL);
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_7 = L_6;
		NullCheck(L_7);
		L_7->___EnemyHealth_0 = (100.0f);
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_8 = L_7;
		NullCheck(L_8);
		L_8->___damage_1 = (30.0f);
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_9 = L_8;
		NullCheck(L_9);
		L_9->___Health_2 = (100.0f);
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_10 = L_9;
		NullCheck(L_10);
		L_10->___Heal_3 = (20.0f);
		V_1 = L_10;
		// var enemyStat2 = new EnemyStat
		// {
		//     EnemyHealth = 300,
		//     damage = 50,
		//     Health = 300
		// };
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_11 = (EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F*)il2cpp_codegen_object_new(EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EnemyStat__ctor_mE48134E0DFA5E94C6F0E504415B55817880AF221(L_11, NULL);
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_12 = L_11;
		NullCheck(L_12);
		L_12->___EnemyHealth_0 = (300.0f);
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_13 = L_12;
		NullCheck(L_13);
		L_13->___damage_1 = (50.0f);
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_14 = L_13;
		NullCheck(L_14);
		L_14->___Health_2 = (300.0f);
		V_2 = L_14;
		// var enemyStat3 = new EnemyStat
		// {
		//     EnemyHealth = 50,
		//     damage = 40,
		//     Health = 50
		// };
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_15 = (EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F*)il2cpp_codegen_object_new(EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		EnemyStat__ctor_mE48134E0DFA5E94C6F0E504415B55817880AF221(L_15, NULL);
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_16 = L_15;
		NullCheck(L_16);
		L_16->___EnemyHealth_0 = (50.0f);
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_17 = L_16;
		NullCheck(L_17);
		L_17->___damage_1 = (40.0f);
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_18 = L_17;
		NullCheck(L_18);
		L_18->___Health_2 = (50.0f);
		V_3 = L_18;
		// var Item = new Itemdata
		// {
		//     itemName = "Potion",
		//     Health = 100,
		//     damage = 30
		// };
		Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134* L_19 = (Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134*)il2cpp_codegen_object_new(Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Itemdata__ctor_mEDCA8F1EEF24E1EE9B7BC73849D0735D761A1506(L_19, NULL);
		Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134* L_20 = L_19;
		NullCheck(L_20);
		L_20->___itemName_0 = _stringLiteral970CC57CB5C903AF48E2BA90910F0E408DAC9211;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___itemName_0), (void*)_stringLiteral970CC57CB5C903AF48E2BA90910F0E408DAC9211);
		Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134* L_21 = L_20;
		NullCheck(L_21);
		L_21->___Health_1 = (100.0f);
		Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134* L_22 = L_21;
		NullCheck(L_22);
		L_22->___damage_2 = ((int32_t)30);
		V_4 = L_22;
		// var weapon = new WeaponData
		// {
		//     damage = 30
		// };
		WeaponData_tD3011DB326C49F5868296C985745CA832E477245* L_23 = (WeaponData_tD3011DB326C49F5868296C985745CA832E477245*)il2cpp_codegen_object_new(WeaponData_tD3011DB326C49F5868296C985745CA832E477245_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		WeaponData__ctor_m15AA3F31801C9832C5D8C76B22F581C69CB12B56(L_23, NULL);
		WeaponData_tD3011DB326C49F5868296C985745CA832E477245* L_24 = L_23;
		NullCheck(L_24);
		L_24->___damage_0 = ((int32_t)30);
		V_5 = L_24;
		// SaveToJsonEncrypted(Item, "Itemdata.json");
		Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134* L_25 = V_4;
		DataManager_SaveToJsonEncrypted_TisItemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_m662A7C18FED39D58A9809A98B353C6168222C0F1(__this, L_25, _stringLiteral430B038DD402BC010D84227D958DD4E92B2BE845, DataManager_SaveToJsonEncrypted_TisItemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_m662A7C18FED39D58A9809A98B353C6168222C0F1_RuntimeMethod_var);
		// SaveToJsonEncrypted(playerStat, "PlayerStat.json");
		PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7* L_26 = V_0;
		DataManager_SaveToJsonEncrypted_TisPlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7_m4EABAA5234B0BC971A706856DB8AE403FEEB883C(__this, L_26, _stringLiteral6787E73E2E06405532890242579A8D9EA0E86C10, DataManager_SaveToJsonEncrypted_TisPlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7_m4EABAA5234B0BC971A706856DB8AE403FEEB883C_RuntimeMethod_var);
		// SaveToJsonEncrypted(enemyStat1, "EnemyStat1.json");
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_27 = V_1;
		DataManager_SaveToJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_m3D59A9E428A19014A73BCC262247E50C752445D5(__this, L_27, _stringLiteral54B143D289AAC65CADF64A40F1FAB5CBB1D714FF, DataManager_SaveToJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_m3D59A9E428A19014A73BCC262247E50C752445D5_RuntimeMethod_var);
		// SaveToJsonEncrypted(enemyStat2, "EnemyStat2.json");
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_28 = V_2;
		DataManager_SaveToJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_m3D59A9E428A19014A73BCC262247E50C752445D5(__this, L_28, _stringLiteralEEFB6C80B9AC59A5604131FE3F13F1457211DBA2, DataManager_SaveToJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_m3D59A9E428A19014A73BCC262247E50C752445D5_RuntimeMethod_var);
		// SaveToJsonEncrypted(enemyStat3, "EnemyStat3.json");
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_29 = V_3;
		DataManager_SaveToJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_m3D59A9E428A19014A73BCC262247E50C752445D5(__this, L_29, _stringLiteralBE505E59A5B7D2AB610AFC88391056C7EC96AD5B, DataManager_SaveToJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_m3D59A9E428A19014A73BCC262247E50C752445D5_RuntimeMethod_var);
		// SaveToJsonEncrypted(weapon, "WeaponData.json");
		WeaponData_tD3011DB326C49F5868296C985745CA832E477245* L_30 = V_5;
		DataManager_SaveToJsonEncrypted_TisWeaponData_tD3011DB326C49F5868296C985745CA832E477245_m9F7F4BD669044B6394DDDC049926E505411B5854(__this, L_30, _stringLiteralFCE1EA4C527473DF57D33AEB569949A2E114E0E2, DataManager_SaveToJsonEncrypted_TisWeaponData_tD3011DB326C49F5868296C985745CA832E477245_m9F7F4BD669044B6394DDDC049926E505411B5854_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Byte[] Data.DataManager::Encrypt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DataManager_Encrypt_m0805CF04C3AB06449D642EE4888C89FF1A605BF4 (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* V_1 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_2 = NULL;
	CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		// byte[] rawData = Encoding.UTF8.GetBytes(data);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_1 = ___data0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		// using (Aes aesAlg = Aes.Create())
		il2cpp_codegen_runtime_class_init_inline(Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_il2cpp_TypeInfo_var);
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_3;
		L_3 = Aes_Create_mA7AA221AEC418AC59B642AB2C536766C1309C006(NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006c:
			{// begin finally (depth: 1)
				{
					Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_4 = V_1;
					if (!L_4)
					{
						goto IL_0075;
					}
				}
				{
					Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0075:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// aesAlg.Key = EncryptionKey;
				Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_6 = V_1;
				il2cpp_codegen_runtime_class_init_inline(DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ((DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366_il2cpp_TypeInfo_var))->___EncryptionKey_16;
				NullCheck(L_6);
				VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(12 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_6, L_7);
				// aesAlg.IV = IV;
				Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_8 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___IV_17;
				NullCheck(L_8);
				VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_8, L_9);
				// using (MemoryStream msEncrypt = new MemoryStream())
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
				NullCheck(L_10);
				MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_10, NULL);
				V_2 = L_10;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0062_1:
					{// begin finally (depth: 2)
						{
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_2;
							if (!L_11)
							{
								goto IL_006b_1;
							}
						}
						{
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_12 = V_2;
							NullCheck(L_12);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
						}

IL_006b_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// using (CryptoStream csEncrypt = new CryptoStream(msEncrypt, aesAlg.CreateEncryptor(), CryptoStreamMode.Write))
						MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_13 = V_2;
						Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_14 = V_1;
						NullCheck(L_14);
						RuntimeObject* L_15;
						L_15 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(20 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor() */, L_14);
						CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_16 = (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65*)il2cpp_codegen_object_new(CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
						NullCheck(L_16);
						CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6(L_16, L_13, L_15, 1, NULL);
						V_3 = L_16;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0058_2:
							{// begin finally (depth: 3)
								{
									CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_17 = V_3;
									if (!L_17)
									{
										goto IL_0061_2;
									}
								}
								{
									CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_18 = V_3;
									NullCheck(L_18);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_18);
								}

IL_0061_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							// csEncrypt.Write(rawData, 0, rawData.Length);
							CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_19 = V_3;
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
							NullCheck(L_21);
							NullCheck(L_19);
							VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_19, L_20, 0, ((int32_t)(((RuntimeArray*)L_21)->max_length)));
							// csEncrypt.FlushFinalBlock();
							CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_22 = V_3;
							NullCheck(L_22);
							CryptoStream_FlushFinalBlock_m21F69C3EC538EB149CFBF9183650FF3A004E0D05(L_22, NULL);
							// byte[] encryptedData = msEncrypt.ToArray();
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_23 = V_2;
							NullCheck(L_23);
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
							L_24 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(40 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_23);
							// return encryptedData;
							V_4 = L_24;
							goto IL_0076;
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0076:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_4;
		return L_25;
	}
}
// System.String Data.DataManager::Decrypt(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataManager_Decrypt_mE7A66365A314FA5EE03570D219238A6836CD1EC7 (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encryptedData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* V_0 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		// using (Aes aesAlg = Aes.Create())
		il2cpp_codegen_runtime_class_init_inline(Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_il2cpp_TypeInfo_var);
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_0;
		L_0 = Aes_Create_mA7AA221AEC418AC59B642AB2C536766C1309C006(NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008c:
			{// begin finally (depth: 1)
				{
					Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0095;
					}
				}
				{
					Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0095:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// aesAlg.Key = EncryptionKey;
				Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_3 = V_0;
				il2cpp_codegen_runtime_class_init_inline(DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366_il2cpp_TypeInfo_var))->___EncryptionKey_16;
				NullCheck(L_3);
				VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(12 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_3, L_4);
				// aesAlg.IV = IV;
				Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_5 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___IV_17;
				NullCheck(L_5);
				VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_5, L_6);
				// aesAlg.IV = IV;
				Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_7 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___IV_17;
				NullCheck(L_7);
				VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_7, L_8);
				// using (MemoryStream msDecrypt = new MemoryStream())
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_9, NULL);
				V_1 = L_9;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0082_1:
					{// begin finally (depth: 2)
						{
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = V_1;
							if (!L_10)
							{
								goto IL_008b_1;
							}
						}
						{
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_1;
							NullCheck(L_11);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
						}

IL_008b_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// using (CryptoStream csDecrypt = new CryptoStream(msDecrypt, aesAlg.CreateDecryptor(aesAlg.Key, aesAlg.IV), CryptoStreamMode.Write))
						MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_12 = V_1;
						Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_13 = V_0;
						Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_14 = V_0;
						NullCheck(L_14);
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
						L_15 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key() */, L_14);
						Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_16 = V_0;
						NullCheck(L_16);
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
						L_17 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV() */, L_16);
						NullCheck(L_13);
						RuntimeObject* L_18;
						L_18 = VirtualFuncInvoker2< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(23 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor(System.Byte[],System.Byte[]) */, L_13, L_15, L_17);
						CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_19 = (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65*)il2cpp_codegen_object_new(CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
						NullCheck(L_19);
						CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6(L_19, L_12, L_18, 1, NULL);
						V_3 = L_19;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_005c_2:
							{// begin finally (depth: 3)
								{
									CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_20 = V_3;
									if (!L_20)
									{
										goto IL_0065_2;
									}
								}
								{
									CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_21 = V_3;
									NullCheck(L_21);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_21);
								}

IL_0065_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							// csDecrypt.Write(encryptedData, 0, encryptedData.Length);
							CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_22 = V_3;
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___encryptedData0;
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___encryptedData0;
							NullCheck(L_24);
							NullCheck(L_22);
							VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_22, L_23, 0, ((int32_t)(((RuntimeArray*)L_24)->max_length)));
							// csDecrypt.FlushFinalBlock(); // Flush the final block to the memory stream
							CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_25 = V_3;
							NullCheck(L_25);
							CryptoStream_FlushFinalBlock_m21F69C3EC538EB149CFBF9183650FF3A004E0D05(L_25, NULL);
							// }
							goto IL_0066_2;
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_0066_2:
					{
						// byte[] decryptedBytes = msDecrypt.ToArray();
						MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_26 = V_1;
						NullCheck(L_26);
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
						L_27 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(40 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_26);
						V_2 = L_27;
						// return Encoding.UTF8.GetString(decryptedBytes).TrimEnd('\0'); // Remove padding characters
						Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_28;
						L_28 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_2;
						NullCheck(L_28);
						String_t* L_30;
						L_30 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_28, L_29);
						NullCheck(L_30);
						String_t* L_31;
						L_31 = String_TrimEnd_mDB4D96F8312F563656D4115A9F280062E05D2EE8(L_30, 0, NULL);
						V_4 = L_31;
						goto IL_0096;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0096:
	{
		// }
		String_t* L_32 = V_4;
		return L_32;
	}
}
// System.String Data.DataManager::GetFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataManager_GetFilePath_mAE010CB58CEE7936C3486A49D30CAB80EA1E8ED3 (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, String_t* ___fileName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral262860FCC0E832A1B60C6677C1DC326EB3A9B270);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Path.Combine(Application.dataPath + "/StreamingAssets", fileName);
		String_t* L_0;
		L_0 = Application_get_dataPath_mBBC742FA17F8BD4156C4CB98480BEFBFB0BBB6D9(NULL);
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteral262860FCC0E832A1B60C6677C1DC326EB3A9B270, NULL);
		String_t* L_2 = ___fileName0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Data.DataManager::UseItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataManager_UseItem_mA51E696664483050E5043AF2C6CDA24174F6D460 (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ____item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_LoadFromJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_mD7DBBB98B1EFD8423EB11A185E00FF558F6AF160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_LoadFromJsonEncrypted_TisItemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_m1F856BC4CAE4FBB9394F567CB13A792CFD8BBCAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_LoadFromJsonEncrypted_TisPlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7_m6DF66D227281FA47E7FDCEEF44D82D98D794614A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_LoadFromJsonEncrypted_TisWeaponData_tD3011DB326C49F5868296C985745CA832E477245_m4DF55DAF9C732E74AF7BC371994F47F38AB2986E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral430B038DD402BC010D84227D958DD4E92B2BE845);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54B143D289AAC65CADF64A40F1FAB5CBB1D714FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6787E73E2E06405532890242579A8D9EA0E86C10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral889E5939446CB9B4803EBA875DCD023C19C24677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB50DAE9190CD5144B14F8D0EEC2B2982A1F333D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCE1EA4C527473DF57D33AEB569949A2E114E0E2);
		s_Il2CppMethodInitialized = true;
	}
	MultiPlayerHealth_tC27A18F8F907AE6D26F7626C475F22A323472367* V_0 = NULL;
	ThrownWeaponController_t7EC0B88940B2CBF8C1815596D2D55F5F068100D5* V_1 = NULL;
	{
		// PlayerStat playerStat = LoadFromJsonEncrypted<PlayerStat>("PlayerStat.json");
		PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7* L_0;
		L_0 = DataManager_LoadFromJsonEncrypted_TisPlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7_m6DF66D227281FA47E7FDCEEF44D82D98D794614A(__this, _stringLiteral6787E73E2E06405532890242579A8D9EA0E86C10, DataManager_LoadFromJsonEncrypted_TisPlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7_m6DF66D227281FA47E7FDCEEF44D82D98D794614A_RuntimeMethod_var);
		// Itemdata itemdata = LoadFromJsonEncrypted<Itemdata>("Itemdata.json");
		Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134* L_1;
		L_1 = DataManager_LoadFromJsonEncrypted_TisItemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_m1F856BC4CAE4FBB9394F567CB13A792CFD8BBCAB(__this, _stringLiteral430B038DD402BC010D84227D958DD4E92B2BE845, DataManager_LoadFromJsonEncrypted_TisItemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_m1F856BC4CAE4FBB9394F567CB13A792CFD8BBCAB_RuntimeMethod_var);
		// WeaponData weaponData = LoadFromJsonEncrypted<WeaponData>("WeaponData.json");
		WeaponData_tD3011DB326C49F5868296C985745CA832E477245* L_2;
		L_2 = DataManager_LoadFromJsonEncrypted_TisWeaponData_tD3011DB326C49F5868296C985745CA832E477245_m4DF55DAF9C732E74AF7BC371994F47F38AB2986E(__this, _stringLiteralFCE1EA4C527473DF57D33AEB569949A2E114E0E2, DataManager_LoadFromJsonEncrypted_TisWeaponData_tD3011DB326C49F5868296C985745CA832E477245_m4DF55DAF9C732E74AF7BC371994F47F38AB2986E_RuntimeMethod_var);
		// EnemyStat enemyStat = LoadFromJsonEncrypted<EnemyStat>("EnemyStat1.json");
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_3;
		L_3 = DataManager_LoadFromJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_mD7DBBB98B1EFD8423EB11A185E00FF558F6AF160(__this, _stringLiteral54B143D289AAC65CADF64A40F1FAB5CBB1D714FF, DataManager_LoadFromJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_mD7DBBB98B1EFD8423EB11A185E00FF558F6AF160_RuntimeMethod_var);
		// MultiPlayerHealth currentPlayerHealth = MultiScene.Instance.currentPlayerHealth;
		il2cpp_codegen_runtime_class_init_inline(MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254_il2cpp_TypeInfo_var);
		MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254* L_4 = ((MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254_StaticFields*)il2cpp_codegen_static_fields_for(MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_4);
		MultiPlayerHealth_tC27A18F8F907AE6D26F7626C475F22A323472367* L_5 = L_4->___currentPlayerHealth_46;
		V_0 = L_5;
		// if (_item.itemType == Item.ItemType.Throw)
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_6 = ____item0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___itemType_6;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_007f;
		}
	}
	{
		// var thrownWeaponController = MultiScene.Instance.currentThrownWeaponController;
		il2cpp_codegen_runtime_class_init_inline(MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254_il2cpp_TypeInfo_var);
		MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254* L_8 = ((MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254_StaticFields*)il2cpp_codegen_static_fields_for(MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_8);
		ThrownWeaponController_t7EC0B88940B2CBF8C1815596D2D55F5F068100D5* L_9 = L_8->___currentThrownWeaponController_34;
		V_1 = L_9;
		// if (!thrownWeaponController.isGrenadeMode)
		ThrownWeaponController_t7EC0B88940B2CBF8C1815596D2D55F5F068100D5* L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = L_10->___isGrenadeMode_11;
		if (L_11)
		{
			goto IL_007f;
		}
	}
	{
		// thrownWeaponController.isGrenadeMode = true;
		ThrownWeaponController_t7EC0B88940B2CBF8C1815596D2D55F5F068100D5* L_12 = V_1;
		NullCheck(L_12);
		L_12->___isGrenadeMode_11 = (bool)1;
		// thrownWeaponController.throwMode = 0;
		ThrownWeaponController_t7EC0B88940B2CBF8C1815596D2D55F5F068100D5* L_13 = V_1;
		NullCheck(L_13);
		L_13->___throwMode_12 = 0;
		// thrownWeaponController.throwRangeIndicator.SetActive(true);
		ThrownWeaponController_t7EC0B88940B2CBF8C1815596D2D55F5F068100D5* L_14 = V_1;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = L_14->___throwRangeIndicator_9;
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
		// thrownWeaponController.damageRangeIndicator.SetActive(true);
		ThrownWeaponController_t7EC0B88940B2CBF8C1815596D2D55F5F068100D5* L_16 = V_1;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = L_16->___damageRangeIndicator_10;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		// return true;
		return (bool)1;
	}

IL_007f:
	{
		// if (_item.itemType == Item.ItemType.Buff)
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_18 = ____item0;
		NullCheck(L_18);
		int32_t L_19 = L_18->___itemType_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)2))))
		{
			goto IL_00bf;
		}
	}
	{
		// currentPlayerHealth.MaxHealth += 500;
		MultiPlayerHealth_tC27A18F8F907AE6D26F7626C475F22A323472367* L_20 = V_0;
		MultiPlayerHealth_tC27A18F8F907AE6D26F7626C475F22A323472367* L_21 = L_20;
		NullCheck(L_21);
		int32_t L_22 = L_21->___MaxHealth_4;
		NullCheck(L_21);
		L_21->___MaxHealth_4 = ((int32_t)il2cpp_codegen_add(L_22, ((int32_t)500)));
		// currentPlayerHealth.UpdateHealth();
		MultiPlayerHealth_tC27A18F8F907AE6D26F7626C475F22A323472367* L_23 = V_0;
		NullCheck(L_23);
		MultiPlayerHealth_UpdateHealth_mC9ED8936D12AC13A15E2C8723943338D02C94496(L_23, NULL);
		// MultiScene.Instance.BroadCastingItemUse((int)Item.ItemType.Buff);
		il2cpp_codegen_runtime_class_init_inline(MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254_il2cpp_TypeInfo_var);
		MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254* L_24 = ((MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254_StaticFields*)il2cpp_codegen_static_fields_for(MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_24);
		MultiScene_BroadCastingItemUse_mCAD6049DE1AF7CF710C3DC7640915641DCBA81C7(L_24, 2, NULL);
		// StartCoroutine(DisplayItemMessage("?? ??? 100 ???????!"));
		RuntimeObject* L_25;
		L_25 = DataManager_DisplayItemMessage_m8754D3904EC00543890BAE96DDF8AD729D58F0D7(__this, _stringLiteralB50DAE9190CD5144B14F8D0EEC2B2982A1F333D0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_26;
		L_26 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_25, NULL);
		// return true;
		return (bool)1;
	}

IL_00bf:
	{
		// if (_item.itemType == Item.ItemType.Used)
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_27 = ____item0;
		NullCheck(L_27);
		int32_t L_28 = L_27->___itemType_6;
		if (L_28)
		{
			goto IL_0128;
		}
	}
	{
		// if (currentPlayerHealth.CurrentHealth < currentPlayerHealth.MaxHealth)
		MultiPlayerHealth_tC27A18F8F907AE6D26F7626C475F22A323472367* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = L_29->___CurrentHealth_5;
		MultiPlayerHealth_tC27A18F8F907AE6D26F7626C475F22A323472367* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = L_31->___MaxHealth_4;
		if ((((int32_t)L_30) >= ((int32_t)L_32)))
		{
			goto IL_0126;
		}
	}
	{
		// currentPlayerHealth.CurrentHealth += 500;
		MultiPlayerHealth_tC27A18F8F907AE6D26F7626C475F22A323472367* L_33 = V_0;
		MultiPlayerHealth_tC27A18F8F907AE6D26F7626C475F22A323472367* L_34 = L_33;
		NullCheck(L_34);
		int32_t L_35 = L_34->___CurrentHealth_5;
		NullCheck(L_34);
		L_34->___CurrentHealth_5 = ((int32_t)il2cpp_codegen_add(L_35, ((int32_t)500)));
		// if (currentPlayerHealth.CurrentHealth >= currentPlayerHealth.MaxHealth)
		MultiPlayerHealth_tC27A18F8F907AE6D26F7626C475F22A323472367* L_36 = V_0;
		NullCheck(L_36);
		int32_t L_37 = L_36->___CurrentHealth_5;
		MultiPlayerHealth_tC27A18F8F907AE6D26F7626C475F22A323472367* L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39 = L_38->___MaxHealth_4;
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_0101;
		}
	}
	{
		// currentPlayerHealth.CurrentHealth = currentPlayerHealth.MaxHealth;
		MultiPlayerHealth_tC27A18F8F907AE6D26F7626C475F22A323472367* L_40 = V_0;
		MultiPlayerHealth_tC27A18F8F907AE6D26F7626C475F22A323472367* L_41 = V_0;
		NullCheck(L_41);
		int32_t L_42 = L_41->___MaxHealth_4;
		NullCheck(L_40);
		L_40->___CurrentHealth_5 = L_42;
	}

IL_0101:
	{
		// currentPlayerHealth.UpdateHealth();
		MultiPlayerHealth_tC27A18F8F907AE6D26F7626C475F22A323472367* L_43 = V_0;
		NullCheck(L_43);
		MultiPlayerHealth_UpdateHealth_mC9ED8936D12AC13A15E2C8723943338D02C94496(L_43, NULL);
		// MultiScene.Instance.BroadCastingItemUse((int)Item.ItemType.Used);
		il2cpp_codegen_runtime_class_init_inline(MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254_il2cpp_TypeInfo_var);
		MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254* L_44 = ((MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254_StaticFields*)il2cpp_codegen_static_fields_for(MultiScene_tF0B25342AF8A318664FCA872C08099D7C74E5254_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_44);
		MultiScene_BroadCastingItemUse_mCAD6049DE1AF7CF710C3DC7640915641DCBA81C7(L_44, 0, NULL);
		// StartCoroutine(DisplayItemMessage("??? ??????!"));
		RuntimeObject* L_45;
		L_45 = DataManager_DisplayItemMessage_m8754D3904EC00543890BAE96DDF8AD729D58F0D7(__this, _stringLiteral889E5939446CB9B4803EBA875DCD023C19C24677, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_46;
		L_46 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_45, NULL);
		// return true;
		return (bool)1;
	}

IL_0126:
	{
		// return false;
		return (bool)0;
	}

IL_0128:
	{
		// return false;
		return (bool)0;
	}
}
// System.Collections.IEnumerator Data.DataManager::DisplayItemMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataManager_DisplayItemMessage_m8754D3904EC00543890BAE96DDF8AD729D58F0D7 (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDisplayItemMessageU3Ed__25_t4BCB2C0FCB601FF60842813E06B20C2548BBF64F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDisplayItemMessageU3Ed__25_t4BCB2C0FCB601FF60842813E06B20C2548BBF64F* L_0 = (U3CDisplayItemMessageU3Ed__25_t4BCB2C0FCB601FF60842813E06B20C2548BBF64F*)il2cpp_codegen_object_new(U3CDisplayItemMessageU3Ed__25_t4BCB2C0FCB601FF60842813E06B20C2548BBF64F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDisplayItemMessageU3Ed__25__ctor_m9D9B67875633F12E0FA267C81739CA70560DA8C4(L_0, 0, NULL);
		U3CDisplayItemMessageU3Ed__25_t4BCB2C0FCB601FF60842813E06B20C2548BBF64F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CDisplayItemMessageU3Ed__25_t4BCB2C0FCB601FF60842813E06B20C2548BBF64F* L_2 = L_1;
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		L_2->___message_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___message_3), (void*)L_3);
		return L_2;
	}
}
// System.Void Data.DataManager::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_SaveData_m582CB1AD808E635001004C3EE57D3BD4E50DB0F5 (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_LoadFromJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_mD7DBBB98B1EFD8423EB11A185E00FF558F6AF160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_LoadFromJsonEncrypted_TisItemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_m1F856BC4CAE4FBB9394F567CB13A792CFD8BBCAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_LoadFromJsonEncrypted_TisPlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7_m6DF66D227281FA47E7FDCEEF44D82D98D794614A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_LoadFromJsonEncrypted_TisWeaponData_tD3011DB326C49F5868296C985745CA832E477245_m4DF55DAF9C732E74AF7BC371994F47F38AB2986E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_SaveToJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_m3D59A9E428A19014A73BCC262247E50C752445D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_SaveToJsonEncrypted_TisItemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_m662A7C18FED39D58A9809A98B353C6168222C0F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_SaveToJsonEncrypted_TisPlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7_m4EABAA5234B0BC971A706856DB8AE403FEEB883C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_SaveToJsonEncrypted_TisWeaponData_tD3011DB326C49F5868296C985745CA832E477245_m9F7F4BD669044B6394DDDC049926E505411B5854_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01EB28C63D7EB40207A19ED5D02A10F6E7FE5549);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral075D97BDD3A5670022365F1C33A35D9EA04A740F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1133BB5F3D2FA6D7FA65FA21E4224DA321B94603);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24BF3226FFAECF3ADAD2668A80C772975DB7AAA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral430B038DD402BC010D84227D958DD4E92B2BE845);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral537E68D8057AACC5BB75E8C4DEDC4C6997F6F115);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54B143D289AAC65CADF64A40F1FAB5CBB1D714FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6787E73E2E06405532890242579A8D9EA0E86C10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68F5ABCF1226B9EACFBD8EDBCA78645ADF95CE04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B512A5D926BA70E71C218CA0579B0C7F9906327);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D94C393A366742DD1E93165E4E0FDAE45225BC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AC1C319FE8109A8CD895AEBA9B5F99BDBA70A95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0B1803C0B000FCC4B108AF7AC4B3FF0D23EF072);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC052861893EA586565E8F7CFAD209D29C8B9992);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE505E59A5B7D2AB610AFC88391056C7EC96AD5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC07E22FA6C7ADE30902FF281B1DF7403CAD3CB85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE298750DE4306CD16C3FC6CA687D7CD46DE665FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEFB6C80B9AC59A5604131FE3F13F1457211DBA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCE1EA4C527473DF57D33AEB569949A2E114E0E2);
		s_Il2CppMethodInitialized = true;
	}
	PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7* V_0 = NULL;
	EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* V_1 = NULL;
	EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* V_2 = NULL;
	EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* V_3 = NULL;
	WeaponData_tD3011DB326C49F5868296C985745CA832E477245* V_4 = NULL;
	Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134* V_5 = NULL;
	Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134* V_6 = NULL;
	{
		// PlayerStat playerStat = LoadFromJsonEncrypted<PlayerStat>("PlayerStat.json");
		PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7* L_0;
		L_0 = DataManager_LoadFromJsonEncrypted_TisPlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7_m6DF66D227281FA47E7FDCEEF44D82D98D794614A(__this, _stringLiteral6787E73E2E06405532890242579A8D9EA0E86C10, DataManager_LoadFromJsonEncrypted_TisPlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7_m6DF66D227281FA47E7FDCEEF44D82D98D794614A_RuntimeMethod_var);
		V_0 = L_0;
		// Debug.Log("name: " + playerStat.name + ", Level: " + playerStat.Level + ", Exp: " + playerStat.Exp + ", Health: " + playerStat.Health + ", PlayerHealth: " + playerStat.PlayerHealth);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralE298750DE4306CD16C3FC6CA687D7CD46DE665FE);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralE298750DE4306CD16C3FC6CA687D7CD46DE665FE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___name_0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1133BB5F3D2FA6D7FA65FA21E4224DA321B94603);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1133BB5F3D2FA6D7FA65FA21E4224DA321B94603);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7* L_8 = V_0;
		NullCheck(L_8);
		float* L_9 = (&L_8->___Level_1);
		String_t* L_10;
		L_10 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_9, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralA0B1803C0B000FCC4B108AF7AC4B3FF0D23EF072);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA0B1803C0B000FCC4B108AF7AC4B3FF0D23EF072);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7* L_13 = V_0;
		NullCheck(L_13);
		float* L_14 = (&L_13->___Exp_2);
		String_t* L_15;
		L_15 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_14, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral537E68D8057AACC5BB75E8C4DEDC4C6997F6F115);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral537E68D8057AACC5BB75E8C4DEDC4C6997F6F115);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7* L_18 = V_0;
		NullCheck(L_18);
		float* L_19 = (&L_18->___Health_4);
		String_t* L_20;
		L_20 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_19, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_17;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral9AC1C319FE8109A8CD895AEBA9B5F99BDBA70A95);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral9AC1C319FE8109A8CD895AEBA9B5F99BDBA70A95);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7* L_23 = V_0;
		NullCheck(L_23);
		float* L_24 = (&L_23->___PlayerHealth_3);
		String_t* L_25;
		L_25 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_24, NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_25);
		String_t* L_26;
		L_26 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_22, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_26, NULL);
		// SaveToJsonEncrypted(playerStat, "PlayerStat.json");
		PlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7* L_27 = V_0;
		DataManager_SaveToJsonEncrypted_TisPlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7_m4EABAA5234B0BC971A706856DB8AE403FEEB883C(__this, L_27, _stringLiteral6787E73E2E06405532890242579A8D9EA0E86C10, DataManager_SaveToJsonEncrypted_TisPlayerStat_t4FDCFB0810166E023C4B17187204CE12538A19D7_m4EABAA5234B0BC971A706856DB8AE403FEEB883C_RuntimeMethod_var);
		// EnemyStat enemyStat1 = LoadFromJsonEncrypted<EnemyStat>("EnemyStat1.json");
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_28;
		L_28 = DataManager_LoadFromJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_mD7DBBB98B1EFD8423EB11A185E00FF558F6AF160(__this, _stringLiteral54B143D289AAC65CADF64A40F1FAB5CBB1D714FF, DataManager_LoadFromJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_mD7DBBB98B1EFD8423EB11A185E00FF558F6AF160_RuntimeMethod_var);
		V_1 = L_28;
		// Debug.Log("EnemyHealth: " + enemyStat1.EnemyHealth + ", Health:" + enemyStat1.Health + ",damage:" + enemyStat1.damage+"Heal:"+enemyStat1.Heal);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral68F5ABCF1226B9EACFBD8EDBCA78645ADF95CE04);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral68F5ABCF1226B9EACFBD8EDBCA78645ADF95CE04);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_32 = V_1;
		NullCheck(L_32);
		float* L_33 = (&L_32->___EnemyHealth_0);
		String_t* L_34;
		L_34 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_33, NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_34);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_31;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteralAC052861893EA586565E8F7CFAD209D29C8B9992);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralAC052861893EA586565E8F7CFAD209D29C8B9992);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_35;
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_37 = V_1;
		NullCheck(L_37);
		float* L_38 = (&L_37->___Health_2);
		String_t* L_39;
		L_39 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_38, NULL);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_39);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_36;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteral01EB28C63D7EB40207A19ED5D02A10F6E7FE5549);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral01EB28C63D7EB40207A19ED5D02A10F6E7FE5549);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_40;
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_42 = V_1;
		NullCheck(L_42);
		float* L_43 = (&L_42->___damage_1);
		String_t* L_44;
		L_44 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_43, NULL);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_44);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = L_41;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, _stringLiteral075D97BDD3A5670022365F1C33A35D9EA04A740F);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral075D97BDD3A5670022365F1C33A35D9EA04A740F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_45;
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_47 = V_1;
		NullCheck(L_47);
		float* L_48 = (&L_47->___Heal_3);
		String_t* L_49;
		L_49 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_48, NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_49);
		String_t* L_50;
		L_50 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_46, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_50, NULL);
		// SaveToJsonEncrypted(enemyStat1, "EnemyStat1.json");
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_51 = V_1;
		DataManager_SaveToJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_m3D59A9E428A19014A73BCC262247E50C752445D5(__this, L_51, _stringLiteral54B143D289AAC65CADF64A40F1FAB5CBB1D714FF, DataManager_SaveToJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_m3D59A9E428A19014A73BCC262247E50C752445D5_RuntimeMethod_var);
		// EnemyStat enemyStat2 = LoadFromJsonEncrypted<EnemyStat>("EnemyStat2.json");
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_52;
		L_52 = DataManager_LoadFromJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_mD7DBBB98B1EFD8423EB11A185E00FF558F6AF160(__this, _stringLiteralEEFB6C80B9AC59A5604131FE3F13F1457211DBA2, DataManager_LoadFromJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_mD7DBBB98B1EFD8423EB11A185E00FF558F6AF160_RuntimeMethod_var);
		V_2 = L_52;
		// Debug.Log("EnemyHealth: " + enemyStat2.EnemyHealth + ", Health:" + enemyStat2.Health + ",damage:" + enemyStat2.damage);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = L_53;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, _stringLiteral68F5ABCF1226B9EACFBD8EDBCA78645ADF95CE04);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral68F5ABCF1226B9EACFBD8EDBCA78645ADF95CE04);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_55 = L_54;
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_56 = V_2;
		NullCheck(L_56);
		float* L_57 = (&L_56->___EnemyHealth_0);
		String_t* L_58;
		L_58 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_57, NULL);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_58);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_58);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_59 = L_55;
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, _stringLiteralAC052861893EA586565E8F7CFAD209D29C8B9992);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralAC052861893EA586565E8F7CFAD209D29C8B9992);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = L_59;
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_61 = V_2;
		NullCheck(L_61);
		float* L_62 = (&L_61->___Health_2);
		String_t* L_63;
		L_63 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_62, NULL);
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_63);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_63);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = L_60;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteral01EB28C63D7EB40207A19ED5D02A10F6E7FE5549);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral01EB28C63D7EB40207A19ED5D02A10F6E7FE5549);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = L_64;
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_66 = V_2;
		NullCheck(L_66);
		float* L_67 = (&L_66->___damage_1);
		String_t* L_68;
		L_68 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_67, NULL);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_68);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_68);
		String_t* L_69;
		L_69 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_65, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_69, NULL);
		// SaveToJsonEncrypted(enemyStat2, "EnemyStat2.json");
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_70 = V_2;
		DataManager_SaveToJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_m3D59A9E428A19014A73BCC262247E50C752445D5(__this, L_70, _stringLiteralEEFB6C80B9AC59A5604131FE3F13F1457211DBA2, DataManager_SaveToJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_m3D59A9E428A19014A73BCC262247E50C752445D5_RuntimeMethod_var);
		// EnemyStat enemyStat3 = LoadFromJsonEncrypted<EnemyStat>("EnemyStat3.json");
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_71;
		L_71 = DataManager_LoadFromJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_mD7DBBB98B1EFD8423EB11A185E00FF558F6AF160(__this, _stringLiteralBE505E59A5B7D2AB610AFC88391056C7EC96AD5B, DataManager_LoadFromJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_mD7DBBB98B1EFD8423EB11A185E00FF558F6AF160_RuntimeMethod_var);
		V_3 = L_71;
		// Debug.Log("EnemyHealth: " + enemyStat3.EnemyHealth + ", Health:" + enemyStat3.Health + ",damage:" + enemyStat3.damage);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = L_72;
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, _stringLiteral68F5ABCF1226B9EACFBD8EDBCA78645ADF95CE04);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral68F5ABCF1226B9EACFBD8EDBCA78645ADF95CE04);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_74 = L_73;
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_75 = V_3;
		NullCheck(L_75);
		float* L_76 = (&L_75->___EnemyHealth_0);
		String_t* L_77;
		L_77 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_76, NULL);
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_77);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_77);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_78 = L_74;
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, _stringLiteralAC052861893EA586565E8F7CFAD209D29C8B9992);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralAC052861893EA586565E8F7CFAD209D29C8B9992);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_79 = L_78;
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_80 = V_3;
		NullCheck(L_80);
		float* L_81 = (&L_80->___Health_2);
		String_t* L_82;
		L_82 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_81, NULL);
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, L_82);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_82);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = L_79;
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, _stringLiteral01EB28C63D7EB40207A19ED5D02A10F6E7FE5549);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral01EB28C63D7EB40207A19ED5D02A10F6E7FE5549);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_84 = L_83;
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_85 = V_3;
		NullCheck(L_85);
		float* L_86 = (&L_85->___damage_1);
		String_t* L_87;
		L_87 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_86, NULL);
		NullCheck(L_84);
		ArrayElementTypeCheck (L_84, L_87);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_87);
		String_t* L_88;
		L_88 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_84, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_88, NULL);
		// SaveToJsonEncrypted(enemyStat3, "EnemyStat3.json");
		EnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F* L_89 = V_3;
		DataManager_SaveToJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_m3D59A9E428A19014A73BCC262247E50C752445D5(__this, L_89, _stringLiteralBE505E59A5B7D2AB610AFC88391056C7EC96AD5B, DataManager_SaveToJsonEncrypted_TisEnemyStat_tDD191B564A9113D7F1DCF419442E3E13FEDC378F_m3D59A9E428A19014A73BCC262247E50C752445D5_RuntimeMethod_var);
		// WeaponData weaponData = LoadFromJsonEncrypted<WeaponData>("WeaponData.json");
		WeaponData_tD3011DB326C49F5868296C985745CA832E477245* L_90;
		L_90 = DataManager_LoadFromJsonEncrypted_TisWeaponData_tD3011DB326C49F5868296C985745CA832E477245_m4DF55DAF9C732E74AF7BC371994F47F38AB2986E(__this, _stringLiteralFCE1EA4C527473DF57D33AEB569949A2E114E0E2, DataManager_LoadFromJsonEncrypted_TisWeaponData_tD3011DB326C49F5868296C985745CA832E477245_m4DF55DAF9C732E74AF7BC371994F47F38AB2986E_RuntimeMethod_var);
		V_4 = L_90;
		// Debug.Log("WeaponDamage:" + weaponData.damage);
		WeaponData_tD3011DB326C49F5868296C985745CA832E477245* L_91 = V_4;
		NullCheck(L_91);
		int32_t* L_92 = (&L_91->___damage_0);
		String_t* L_93;
		L_93 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_92, NULL);
		String_t* L_94;
		L_94 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralC07E22FA6C7ADE30902FF281B1DF7403CAD3CB85, L_93, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_94, NULL);
		// SaveToJsonEncrypted(weaponData, "WeaponData.json");
		WeaponData_tD3011DB326C49F5868296C985745CA832E477245* L_95 = V_4;
		DataManager_SaveToJsonEncrypted_TisWeaponData_tD3011DB326C49F5868296C985745CA832E477245_m9F7F4BD669044B6394DDDC049926E505411B5854(__this, L_95, _stringLiteralFCE1EA4C527473DF57D33AEB569949A2E114E0E2, DataManager_SaveToJsonEncrypted_TisWeaponData_tD3011DB326C49F5868296C985745CA832E477245_m9F7F4BD669044B6394DDDC049926E505411B5854_RuntimeMethod_var);
		// Itemdata potion = LoadFromJsonEncrypted<Itemdata>("Itemdata.json");
		Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134* L_96;
		L_96 = DataManager_LoadFromJsonEncrypted_TisItemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_m1F856BC4CAE4FBB9394F567CB13A792CFD8BBCAB(__this, _stringLiteral430B038DD402BC010D84227D958DD4E92B2BE845, DataManager_LoadFromJsonEncrypted_TisItemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_m1F856BC4CAE4FBB9394F567CB13A792CFD8BBCAB_RuntimeMethod_var);
		V_5 = L_96;
		// Debug.Log("??? ??:" + potion.Health);
		Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134* L_97 = V_5;
		NullCheck(L_97);
		float* L_98 = (&L_97->___Health_1);
		String_t* L_99;
		L_99 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_98, NULL);
		String_t* L_100;
		L_100 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral8D94C393A366742DD1E93165E4E0FDAE45225BC7, L_99, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_100, NULL);
		// SaveToJsonEncrypted(potion, "Itemdata.json");
		Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134* L_101 = V_5;
		DataManager_SaveToJsonEncrypted_TisItemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_m662A7C18FED39D58A9809A98B353C6168222C0F1(__this, L_101, _stringLiteral430B038DD402BC010D84227D958DD4E92B2BE845, DataManager_SaveToJsonEncrypted_TisItemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_m662A7C18FED39D58A9809A98B353C6168222C0F1_RuntimeMethod_var);
		// Itemdata adrophine = LoadFromJsonEncrypted<Itemdata>("Itemdata.json");
		Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134* L_102;
		L_102 = DataManager_LoadFromJsonEncrypted_TisItemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_m1F856BC4CAE4FBB9394F567CB13A792CFD8BBCAB(__this, _stringLiteral430B038DD402BC010D84227D958DD4E92B2BE845, DataManager_LoadFromJsonEncrypted_TisItemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_m1F856BC4CAE4FBB9394F567CB13A792CFD8BBCAB_RuntimeMethod_var);
		V_6 = L_102;
		// Debug.Log("Damage Increase:" + adrophine.damage);
		Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134* L_103 = V_6;
		NullCheck(L_103);
		int32_t* L_104 = (&L_103->___damage_2);
		String_t* L_105;
		L_105 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_104, NULL);
		String_t* L_106;
		L_106 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral24BF3226FFAECF3ADAD2668A80C772975DB7AAA3, L_105, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_106, NULL);
		// SaveToJsonEncrypted(adrophine, "Itemdata.json");
		Itemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134* L_107 = V_6;
		DataManager_SaveToJsonEncrypted_TisItemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_m662A7C18FED39D58A9809A98B353C6168222C0F1(__this, L_107, _stringLiteral430B038DD402BC010D84227D958DD4E92B2BE845, DataManager_SaveToJsonEncrypted_TisItemdata_tE1B78927C66D8B6089A112DB57FDDA6CDD307134_m662A7C18FED39D58A9809A98B353C6168222C0F1_RuntimeMethod_var);
		// Debug.Log("??? ?? ??.");
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral6B512A5D926BA70E71C218CA0579B0C7F9906327, NULL);
		// }
		return;
	}
}
// System.Void Data.DataManager::LevelUP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_LevelUP_m687C48D5515E58F37D2765F3AF4929D4BADAD4E0 (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Data.DataManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager__ctor_mB08D7AA947E82B4685959CF885D230D7B9EADE88 (DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____411D3F1D2390FF3F482AC8DF4E730780BB081A192F283D2F373138FD101DC8FE_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityEvent deadEvent = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___deadEvent_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deadEvent_5), (void*)L_0);
		// private byte[] IV = new byte[]
		// {
		// // 16???(128??) ??? IV
		// 0x01, 0x23, 0x45, 0x67, 0x89, 0xAB, 0xCD, 0xEF,
		// 0xFE, 0xDC, 0xBA, 0x98, 0x76, 0x54, 0x32, 0x10
		// };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____411D3F1D2390FF3F482AC8DF4E730780BB081A192F283D2F373138FD101DC8FE_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_2, L_3, NULL);
		__this->___IV_17 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IV_17), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Data.DataManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager__cctor_mC5090C203168DCE2FBA38185613D06722A6648B7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____4D84BFD22FF73BBD9906AA465069D4BBA0DB37B52D999EDDA0150AA78D3334AB_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly byte[] EncryptionKey = new byte[]
		// {
		// // 32???(256??) ??? ?
		// 0x01, 0x23, 0x45, 0x67, 0x89, 0xAB, 0xCD, 0xEF,
		// 0xFE, 0xDC, 0xBA, 0x98, 0x76, 0x54, 0x32, 0x10,
		// 0x10, 0x32, 0x54, 0x76, 0x98, 0xBA, 0xDC, 0xFE,
		// 0xEF, 0xCD, 0xAB, 0x89, 0x67, 0x45, 0x23, 0x01
		// };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____4D84BFD22FF73BBD9906AA465069D4BBA0DB37B52D999EDDA0150AA78D3334AB_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366_il2cpp_TypeInfo_var))->___EncryptionKey_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366_il2cpp_TypeInfo_var))->___EncryptionKey_16), (void*)L_1);
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
// System.Void Data.DataManager/<DisplayItemMessage>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayItemMessageU3Ed__25__ctor_m9D9B67875633F12E0FA267C81739CA70560DA8C4 (U3CDisplayItemMessageU3Ed__25_t4BCB2C0FCB601FF60842813E06B20C2548BBF64F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Data.DataManager/<DisplayItemMessage>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayItemMessageU3Ed__25_System_IDisposable_Dispose_m32C08B7A1494E4206C4D2BDD6BD591F19A6F5AC5 (U3CDisplayItemMessageU3Ed__25_t4BCB2C0FCB601FF60842813E06B20C2548BBF64F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Data.DataManager/<DisplayItemMessage>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDisplayItemMessageU3Ed__25_MoveNext_mC49DC915B7646C0D8C93668EC680650772E9E202 (U3CDisplayItemMessageU3Ed__25_t4BCB2C0FCB601FF60842813E06B20C2548BBF64F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0053;
			}
			case 2:
			{
				goto IL_007a;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// UseItemResultText.text = message;
		DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* L_3 = V_1;
		NullCheck(L_3);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = L_3->___UseItemResultText_12;
		String_t* L_5 = __this->___message_3;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_5);
		// yield return new WaitForSeconds(2);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0053:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// UseItemResultText.text = "";
		DataManager_tC28D53FA58A355ED9C0C51AB9D3A3FB7DB25B366* L_7 = V_1;
		NullCheck(L_7);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_8 = L_7->___UseItemResultText_12;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_007a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object Data.DataManager/<DisplayItemMessage>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisplayItemMessageU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m639B0D6E9FF6CA66D2FFA413CC053C9AFF6D8ECE (U3CDisplayItemMessageU3Ed__25_t4BCB2C0FCB601FF60842813E06B20C2548BBF64F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Data.DataManager/<DisplayItemMessage>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayItemMessageU3Ed__25_System_Collections_IEnumerator_Reset_m84474E048244D1705476BB0ACD6391490EBE1E5F (U3CDisplayItemMessageU3Ed__25_t4BCB2C0FCB601FF60842813E06B20C2548BBF64F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDisplayItemMessageU3Ed__25_System_Collections_IEnumerator_Reset_m84474E048244D1705476BB0ACD6391490EBE1E5F_RuntimeMethod_var)));
	}
}
// System.Object Data.DataManager/<DisplayItemMessage>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisplayItemMessageU3Ed__25_System_Collections_IEnumerator_get_Current_m304FE6C18B05D61334C60382678AD91443530B1E (U3CDisplayItemMessageU3Ed__25_t4BCB2C0FCB601FF60842813E06B20C2548BBF64F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
