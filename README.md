# 프로젝트 명
[![Typing SVG](https://readme-typing-svg.demolab.com?font=Playpen+Sans&size=50&pause=500&color=7CF5F7&center=%EA%B1%B0%EC%A7%93&vCenter=%EA%B1%B0%EC%A7%93&multiline=true&repeat=%EC%A7%84%EC%8B%A4&random=%EA%B1%B0%EC%A7%93&width=500&height=70&lines=Wrinkle+Time+Area)](https://git.io/typing-svg)

##### 해당 프로젝트는 영리적인 목적이 아닌 포트폴리오 전용입니다. 이 해당 빌드본을 가지고 영리적으로 이용하지 마십시오
##### 해당 프로젝트는 타학과와의 협업을 통해서 만들어진 작품입니다.

# 제작 기간
[![Typing SVG](https://readme-typing-svg.demolab.com?font=Playpen+Sans&pause=500&color=6248F7&center=%EA%B1%B0%EC%A7%93&vCenter=%EA%B1%B0%EC%A7%93&multiline=true&repeat=%EC%A7%84%EC%8B%A4&random=%EA%B1%B0%EC%A7%93&width=435&height=70&lines=%ED%95%B4%EB%8B%B9+%ED%94%84%EB%A1%9C%EC%A0%9D%ED%8A%B8%EB%8A%94+2023-03%EB%B6%80%ED%84%B0+;2023-11%EC%9B%94%EA%B9%8C%EC%A7%80+%EC%A7%84%ED%96%89%ED%95%9C+%ED%94%84%EB%A1%9C%EC%A0%9D%ED%8A%B8%EC%9E%85%EB%8B%88%EB%8B%A4.)](https://git.io/typing-svg)

# 사용한 것 소개
### 사용 툴
<!--Unity-->
<img src="https://img.shields.io/badge/Unity-ffffff?style=flat-square&logo=Unity&logoColor=black"/>
<!--Rider-->
<img src="https://img.shields.io/badge/Rider-000000?style=flat-square&logo=Rider&logoColor=white"/>
<!--Git Hub-->
<img src="https://img.shields.io/badge/git-F05032?style=flat-square&logo=git&logoColor=white">

### 사용 언어
<!--C#-->
<img src="https://img.shields.io/badge/c%23-%23239120.svg?style=flat-square&logo=C-sharp&logoColor=white"/>

# 프로젝트 소개
#### 해당 프로젝트의 팀장을 담당하였으며, 모든 리소스와 코드관련 최적화를 맡았습니다.

## 1. 코드 최적화 및 수정
불필요하고 비효율적인 코드를 제거 및 리팩토링 하였습니다. 또한 다른 팀원이 한 것들을 보고 최적화 및 오류등을 중점으로 최적화 및 수정을 진행하였습니다. 

## 2. Time Line 제작 및 서버 동기화
![타임라인 설명](https://github.com/bamin0502/3D-ProJect/assets/100828741/acbe8630-bde2-4e92-9247-2cd42f4f05eb)
<br>다음 사진과 같이 총 3개의 TimeLine 컷신을 제작하였습니다. 
### 첫번째 컷신 스크립트
```C#
using System.Collections;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;
public class StartCut : MonoBehaviour
{
    public PlayableDirector _playableDirector;
    public TimelineAsset FirstCut;
    private void Awake()
    {
        _playableDirector = GetComponent<PlayableDirector>();
    }
    void Start()
    {
        if (_playableDirector.playableAsset == FirstCut)
        {
            // 컷신이 시작되면 BGM을 중지
            SoundManager.instance.bgmAudioSource.Stop();
        }
        // 컷신 종료 이벤트 핸들러 등록
        _playableDirector.stopped += OnCutsceneEnd;
    }
    private void Update()
    {
        if (!Input.GetKeyDown(KeyCode.Escape)) return;
        // 'Esc' 키를 누르면 컷신을 넘깁니다.
        _playableDirector.time = _playableDirector.duration;
        StartCoroutine(SetEnemy());
    }
    private IEnumerator SetEnemy()
    {
        yield return new WaitForSeconds(1f);

        foreach (GameObject enemy in MultiScene.Instance.enemyList)
        {
            if (enemy.TryGetComponent<MultiEnemy>(out var e))
            {
                e.DetectCoroutine = e.StartCoroutine(e.PlayerDetect());
                e.AttackCoroutine = e.StartCoroutine(e.TryAttack());
                e.SetIndex();
            }
            else
            {
                Debug.LogWarning("MultiEnemy 컴포넌트를 찾을 수 없습니다. GameObject 이름: " + enemy.name);
            }
        }
        MultiScene.Instance._players.TryGetValue(MultiScene.Instance.currentUser, out GameObject player);
        if (player == null) yield break;
        var weaponController = player.GetComponent<MultiWeaponController>();
        if (weaponController != null)
        {
            weaponController.StartCoroutine(weaponController.CheckCanPickupWeapon());
        }
    }

    // 컷신 종료 시 호출될 이벤트 핸들러
    private void OnCutsceneEnd(PlayableDirector director)
    {
        // BGM을 다시 재생
        SoundManager.instance.bgmAudioSource.Play();
        StartCoroutine(SetEnemy());
    }
}
```
첫 번째 컷신은 처음에 입장하자마자 바로 플레이되며, 다음과 같이 코드를 통해서 ESC를 통한 스킵이 가능해지고 <br>또한 몬스터가 플레이어를 감지하는 로직이 실행됩니다. <br>컷신이 플레이인 중에는 기존 브금은 재생되지 않고 멈춰있다가 컷신 재생이 끝나면 다시 재생될수 있도록 설정하였습니다. 
### 두번째 컷신 스크립트
```C#
using System.Collections;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;
using UnityEngine.AI;
public class EnemyCut : MonoBehaviour
{
    //실행시킬 2번째 타임라인
    public PlayableDirector playableDirector;
    public TimelineAsset SecondCut;
    //해당 오브젝트에 자식이 있는지 없는지 검사시킬 오브젝트
    public GameObject checkObject;
    private bool isCutScene = false;
    public MultiPlayerMovement playerMovement;
    void Start()
    {
        checkObject = MultiScene.Instance.Enemy;
        MultiScene.Instance.secondPlayableDirector = playableDirector;
        playableDirector.stopped += OnCutsceneEnd;
    }
    private void Awake()
    {
        playableDirector = GetComponent<PlayableDirector>();
    }

    private void OnCutsceneEnd(PlayableDirector director)
    {
        // BGM을 다시 재생
        SoundManager.instance.bgmAudioSource.Play();
        StartCoroutine(bossCutScene());
        playerMovement.ResumeMovement();
    }
    void Update()
    {
        StartSecondScene();
    }
    public void StartSecondScene()
    {
        if (checkObject.transform.childCount != 0 || isCutScene) return;
        isCutScene = true;
        MultiScene.Instance.nav.areaMask=NavMesh.AllAreas;
        playableDirector.playableAsset = SecondCut;
        playableDirector.Play();
        playerMovement.StopMovement();
        if (playableDirector.playableAsset == SecondCut)
        {
            // 컷신이 시작되면 BGM을 중지
            SoundManager.instance.bgmAudioSource.Stop();
        }
        MultiScene.Instance.BroadCastingSecondCutSceneStart(true);
        Debug.LogWarning("컷신 나오는지 확인용");
    }
    IEnumerator bossCutScene()
    {
        yield return new WaitForSeconds(1f);
        MultiScene.Instance.bossObject.TryGetComponent(out MultiBoss multiBoss);
        if (multiBoss == null) yield break;
        Debug.LogWarning("Setting");
        multiBoss.StartCoroutine(multiBoss.PlayerDetect());
        multiBoss.StartCoroutine(multiBoss.ChangeTarget());
        multiBoss.StartCoroutine(multiBoss.StartThink());
    }
}
```
```C#
    public void BroadCastingSecondCutSceneStart(bool isTrigger = false)
    {
        UserSession userSession= NetGameManager.instance.GetRoomUserSession(
            NetGameManager.instance.m_userHandle.m_szUserID);
        var data = new SECOND_CUTSCENE
        {
            USER = userSession.m_szUserID,
            DATA = (int)DataType.SECOND_CUTSCENE,
            CUTSCENE_NUM=1,
            CUTSCENE_TYPE = isTrigger,
        };
        string sendData = LitJson.JsonMapper.ToJson(data);
        NetGameManager.instance.RoomBroadcast(sendData);
    }
```
<br>
두 번째 컷신은 지정해둔 객체에 더 이상 자식(몬스터)가 없을 시에 다 같이 컷신이 실행될수 있도록 설정하였습니다.<br> 마찬가지로 플레이 중에는 기존 브금이 재생되지 않으며 기존에 지나갈수 없던 길을 지나갈수 있도록 NavMesh의 값을 변경시켜줘서 지나갈 수 있도록 설정하였고, 보스도 이 컷신이 끝난 시점부터 로직이 실행되도록 설정하였습니다. 

### 세번째 컷신 스크립트
```C#
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;
public class FinalCut : MonoBehaviour
{
    //실행시킬 마지막 타임라인
    public PlayableDirector playableDirector;
    public TimelineAsset lastcut;
    private bool isCutScene = false;
    public MultiPlayerMovement playerMovement;
    void Start()
    {
        MultiScene.Instance.lastPlayableDirector = playableDirector;
        playableDirector.stopped += OnlastCutsceneEnd;
    }
    private void OnlastCutsceneEnd(PlayableDirector director)
    {
        SoundManager.instance.bgmAudioSource.Play();
        playerMovement.StopMovement();
    }
    private void Update()
    {
        if (isCutScene || !MultiScene.Instance.bossObject) return;
        if (!MultiScene.Instance.bossObject.TryGetComponent(out EnemyHealth enemyHealth)) return;
        if (enemyHealth.currentHealth <= 0)
        {
            LastCutScene();
        }
    }
    public void LastCutScene()
    {
        isCutScene = true;
        playableDirector.playableAsset = lastcut;
        playableDirector.Play();
        if(playableDirector.playableAsset==lastcut)
        {
            SoundManager.instance.bgmAudioSource.Stop();
        }
        MultiScene.Instance.BroadCastingLastCutSceneStart(true);
        Debug.LogWarning("마지막 컷신 확인");
    }
}
```
```C#
 public void BroadCastingLastCutSceneStart(bool isTrigger = false)
    {
        UserSession userSession= NetGameManager.instance.GetRoomUserSession(
            NetGameManager.instance.m_userHandle.m_szUserID);
        var data = new LAST_CUTSCENE
        {
             USER = userSession.m_szUserID,
             DATA = (int)DataType.LAST_CUTSCENE,
             CUTSCENE_NUM = 2,
             CUTSCENE_TYPE = isTrigger,
        };
        string sendData = LitJson.JsonMapper.ToJson(data);
        NetGameManager.instance.RoomBroadcast(sendData);
    }
```
마지막 컷신은 보스의 체력이 0이 되면 실행되도록 설정하였으며 마찬가지로 다 같이 컷신이 실행될수 있도록 설정하였습니다.

## 3. 데이터 교환 방식 구현 및 암호화
```C#
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using System.IO;
using System.Security.Cryptography;
using System.Text;
using System;
[Serializable]
public class PlayerStat
{
    public string name = "";
    public float Level = 0;
    public float Exp = 0;
    public float PlayerHealth = 0;
    public float Health = 0;
}
[Serializable]
public class EnemyStat
{
    public float EnemyHealth = 0;
    public float damage = 0;
    public float Health = 0;
}
[Serializable]
public class Itemdata
{
    public string itemName = ""; // 아이템의 이름
    public float Health = 0; //아이템 회복량
    public int damage = 0; //아이템 데미지
    public float dot = 0; //아이템 지속시간 설정
    public float sight = 0; //아이템 시야설정
}
[Serializable]
public class WeaponData
{
    public int damage = 0;
}
public class DataManager : MonoBehaviour 
{
    public static DataManager Inst;
    private static readonly byte[] EncryptionKey = new byte[]
    {
    // 32바이트(256비트) 암호화 키
    0x01, 0x23, 0x45, 0x67, 0x89, 0xAB, 0xCD, 0xEF,
    0xFE, 0xDC, 0xBA, 0x98, 0x76, 0x54, 0x32, 0x10,
    0x10, 0x32, 0x54, 0x76, 0x98, 0xBA, 0xDC, 0xFE,
    0xEF, 0xCD, 0xAB, 0x89, 0x67, 0x45, 0x23, 0x01
    };
    private byte[] IV = new byte[]
    { 
    // 16바이트(128비트) 암호화 IV
    0x01, 0x23, 0x45, 0x67, 0x89, 0xAB, 0xCD, 0xEF,
    0xFE, 0xDC, 0xBA, 0x98, 0x76, 0x54, 0x32, 0x10
    };

    private void Start()
    {
        SaveData();    
    }
    //여기다가 var타입으로 만들고 SaveToJson방식으로 저장시킬거임
    private void InitializeData()
    {
        var playerStat = new PlayerStat
        {
            name = "",
            Level = 1,
            Exp = 0,
            Health = 1000,
            PlayerHealth = 1000
        };
        var enemyStat1 = new EnemyStat
        {
            EnemyHealth = 100,
            damage = 30,
            Health = 100
        };
        var enemyStat2 = new EnemyStat
        {
            EnemyHealth = 70,
            damage = 20,
            Health = 70
        };

        var enemyStat3 = new EnemyStat
        {
            EnemyHealth = 50,
            damage = 40,
            Health = 50
        };
        var potion = new Itemdata
        {
            itemName = "Potion",
            Health = 30
        };
        var adrophine = new Itemdata 
        { 
            itemName= "adrophine",
            damage=30,
            dot=180
        };
        var weapon = new WeaponData { damage = 30 };
        SaveToJsonEncrypted(adrophine, "Itemdata.json");
        SaveToJsonEncrypted(potion, "Itemdata.json");
        SaveToJsonEncrypted(playerStat, "PlayerStat.json");
        SaveToJsonEncrypted(enemyStat1, "EnemyStat1.json");
        SaveToJsonEncrypted(enemyStat2, "EnemyStat2.json");
        SaveToJsonEncrypted(enemyStat3, "EnemyStat3.json");
        SaveToJsonEncrypted(weapon, "WeaponData.json");
    }
    //자동으로 저장시켜줄거임
    private void SaveToJsonEncrypted<T>(T data, string fileName)
    {
        string jsonData = JsonConvert.SerializeObject(data);
        byte[] encryptedData = Encrypt(jsonData);
        // 암호화된 데이터의 길이를 저장
        int encryptedDataLength = encryptedData.Length;
        // 저장할 데이터 배열 생성 (길이 정보 + 암호화된 데이터)
        byte[] savedData = new byte[4 + encryptedDataLength];
        // 길이 정보를 바이트 배열로 변환하여 저장
        byte[] lengthBytes = BitConverter.GetBytes(encryptedDataLength);
        Buffer.BlockCopy(lengthBytes, 0, savedData, 0, 4);
        // 암호화된 데이터를 저장
        Buffer.BlockCopy(encryptedData, 0, savedData, 4, encryptedDataLength);
        string filePath = GetFilePath(fileName);       
        File.WriteAllBytes(filePath, savedData);     
        //Debug.Log("암호화된 데이터를 저장했습니다: " + filePath);
    }
    //자동으로 로딩시킬거임
    private T LoadFromJsonEncrypted<T>(string fileName)
    {
        string fileNameWithoutExtension = Path.GetFileNameWithoutExtension(fileName);       
        string filePath = GetFilePath(fileName);
        byte[] savedData = File.ReadAllBytes(filePath);
        if (savedData.Length < 4)
        {
            Debug.LogError("암호화된 데이터의 길이 정보가 올바르지 않습니다.");
            return default(T);
        }
        // 저장된 데이터 배열에서 길이 정보를 읽어옴
        int encryptedDataLength = BitConverter.ToInt32(savedData, 0);

        if (encryptedDataLength != savedData.Length - 4)
        {
            Debug.LogError("암호화된 데이터의 길이가 올바르지 않습니다.");
            return default(T);
        }
        // 길이 정보를 제외한 실제 암호화된 데이터 배열 생성
        byte[] encryptedData = new byte[encryptedDataLength];
        Buffer.BlockCopy(savedData, 4, encryptedData, 0, encryptedDataLength);
        string decryptedJsonData = Decrypt(encryptedData); // 복호화된 JSON 데이터를 가져옵니다.
        T data = JsonConvert.DeserializeObject<T>(decryptedJsonData);
        return data;
    }
    //해당 코드를 암호화 시킴
    private byte[] Encrypt(string data)
    {
        byte[] rawData = Encoding.UTF8.GetBytes(data);

        using (Aes aesAlg = Aes.Create())
        {
            aesAlg.Key = EncryptionKey;
            aesAlg.IV = IV;

            using (MemoryStream msEncrypt = new MemoryStream())
            {
                using (CryptoStream csEncrypt = new CryptoStream(msEncrypt, aesAlg.CreateEncryptor(), CryptoStreamMode.Write))
                {
                    csEncrypt.Write(rawData, 0, rawData.Length);
                    csEncrypt.FlushFinalBlock();

                    byte[] encryptedData = msEncrypt.ToArray();
                    return encryptedData;
                }
            }
        }
    }
    //해당 코드를 다시 복호화 시킬거임
    private string Decrypt(byte[] encryptedData)
    {
        using (Aes aesAlg = Aes.Create())
        {
            aesAlg.Key = EncryptionKey;
            aesAlg.IV = IV;
            aesAlg.IV = IV;

            using (MemoryStream msDecrypt = new MemoryStream())
            {
                using (CryptoStream csDecrypt = new CryptoStream(msDecrypt, aesAlg.CreateDecryptor(aesAlg.Key, aesAlg.IV), CryptoStreamMode.Write))
                {
                    csDecrypt.Write(encryptedData, 0, encryptedData.Length);
                    csDecrypt.FlushFinalBlock(); 
                }

                byte[] decryptedBytes = msDecrypt.ToArray();
                return Encoding.UTF8.GetString(decryptedBytes).TrimEnd('\0'); 
            }
        }
    }
    string GetFilePath(string fileName)
    {        
        return Path.Combine(Application.dataPath+"/StreamingAssets", fileName);
    }

    private void SaveData()
    {
        PlayerStat playerStat = LoadFromJsonEncrypted<PlayerStat>("PlayerStat.json");
        SaveToJsonEncrypted(playerStat, "PlayerStat.json");
        EnemyStat enemyStat1 = LoadFromJsonEncrypted<EnemyStat>("EnemyStat1.json");
        SaveToJsonEncrypted(enemyStat1, "EnemyStat1.json");
        EnemyStat enemyStat2 = LoadFromJsonEncrypted<EnemyStat>("EnemyStat2.json");
        SaveToJsonEncrypted(enemyStat2, "EnemyStat2.json");
        EnemyStat enemyStat3 = LoadFromJsonEncrypted<EnemyStat>("EnemyStat3.json");
        SaveToJsonEncrypted(enemyStat3, "EnemyStat3.json");
        WeaponData weaponData = LoadFromJsonEncrypted<WeaponData>("WeaponData.json");
        Debug.Log("WeaponDamage:" + weaponData.damage);
        SaveToJsonEncrypted(weaponData, "WeaponData.json");
        Itemdata potion = LoadFromJsonEncrypted<Itemdata>("Itemdata.json");
        SaveToJsonEncrypted(potion, "Itemdata.json");
        Itemdata adrophine = LoadFromJsonEncrypted<Itemdata>("Itemdata.json");
        SaveToJsonEncrypted(adrophine, "Itemdata.json");
    }
}
```
서버에서 원할한 데이터 교환을 위해서 Json방식으로 데이터를 주고 받을수 있도록 Json을 사용하였으며, <br>해당 Json의 값을 변경하지 못하도록 해당 Json파일을 열었을 때 AES암호화 방식으로 암호화 하였습니다. 
 <br>해당 사진을 통해서 암호화가 적용되어있는걸 확인할수 있습니다.
![다운로드](https://github.com/bamin0502/3D-ProJect/assets/100828741/c5cfe9a3-4c3a-45df-ad41-c448af649dfd)
## 4. 특정 오브젝트 가림 관련
#### 오브젝트 관련
```C#
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Rendering;
public class HideObject : MonoBehaviour
{
    //숨길 오브젝트 지정
    private HideObject _hideObject;
    private static readonly Dictionary<Collider,HideObject>hideObjectsMap = new Dictionary<Collider, HideObject>();
    [SerializeField] public GameObject Renderers;
    public Collider Collider = null;
    void Start()
    {
       InitHideObject(); 
    }
    public static void InitHideObject()
    {
        foreach (var obj in hideObjectsMap.Values.Where(obj => obj != null && obj.Renderers != null))
        {
            obj.SetVisible(true);
            obj._hideObject = null;
        }
        
        hideObjectsMap.Clear();
        
        foreach (var obj in FindObjectsOfType<HideObject>())
        {
            if (obj.Collider != null)
            {
                hideObjectsMap[obj.Collider]=obj;
            }   
        }
    }
    public static HideObject GetHideObject(Collider collider)
    {
        return hideObjectsMap.TryGetValue(collider, out var obj) ? GetRoot(obj) : null;
    }
    public static HideObject GetRoot(HideObject obj)
    {
        while (true)
        {
            if (obj._hideObject == null)
                return obj;
            else
            {
                obj = obj._hideObject;
            }
        }
    }
    public void SetVisible(bool visible)
    {
       Renderer rend= Renderers.GetComponent<Renderer>();

       if (rend != null && rend.gameObject.activeInHierarchy && hideObjectsMap.ContainsKey(rend.GetComponent<Collider>()))
       {
           rend.shadowCastingMode = visible ? ShadowCastingMode.On : ShadowCastingMode.ShadowsOnly;
       }
           
    }
}

```
#### 카메라 관련
```C#
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class ObjectHideCamera : MonoBehaviour
{
    public Transform target = null;
    
    //이 감지거리 안에 플레이어가 있으면 해당 구조물을 안보이게 할거임 
    [SerializeField] private float sphereCastRadius = 0.5f;

    private readonly RaycastHit[] hitBuffer = new RaycastHit[32];
    
    private List<HideObject> hiddenObjects = new List<HideObject>();
    private List<HideObject> previouslyhiddenObjects = new List<HideObject>();

    public GameObject tPlayer;
    
    private void LateUpdate()
    {
        RefreshHiddenObjects();

        if (tPlayer.activeInHierarchy) return;
        foreach (var hideable in previouslyhiddenObjects.Where(hideable 
                     => Vector3.Distance(transform.position, hideable.transform.position) >0.1f))
        {
            hideable.SetVisible(true);
        }

    }


    private void RefreshHiddenObjects()
    {
        if (tPlayer == null)
        {
            if (tPlayer != null)
            {
                target = tPlayer.transform;
            }
            Debug.LogWarning("플레이어가 없습니다!");
            return;
        }

        var position = transform.position;
        var toTarget= target.position - position;
        var targetDistance = toTarget.magnitude;
        var targetDirection = toTarget / targetDistance;
        
        targetDistance -= sphereCastRadius * 1.1f;
        
        hiddenObjects.Clear();
        int hitCount= Physics.SphereCastNonAlloc(position, 
            sphereCastRadius, targetDirection, hitBuffer, targetDistance, 
            -1, QueryTriggerInteraction.Ignore);

        for (int i = 0; i < hitCount; i++)
        {
            var hit = hitBuffer[i];
            var hideable = HideObject.GetHideObject(hit.collider);

            if (hideable != null)
                hiddenObjects.Add(hideable);
        }

        foreach (var hideable in hiddenObjects.Where(hideable => !previouslyhiddenObjects.Contains(hideable)))
        {
            hideable.SetVisible(false);
        }

        foreach (var hideable in previouslyhiddenObjects.Where(hideable => !hiddenObjects.Contains(hideable)))
        {
            hideable.SetVisible(true);
        }

        (hiddenObjects, previouslyhiddenObjects) = (previouslyhiddenObjects, hiddenObjects);
        
    }
}

```
해당 HideObject 스크립트를 통해서 그 해당 오브젝트에 있는 Renderers를 가져오게 됩니다.<br> 
이 상태에서 플레이어랑 오브젝트가 서로 겹치게 되면 오브젝트의 Renderers를 ShadowOnly로 바꿔서<br>
![장애물이 안보이게 됨](https://github.com/bamin0502/3D-ProJect/assets/100828741/3162fb50-5d4b-4d33-8d3e-f93debe4ddb5)<br>
사진과 같이 그림자만 보이게 되서 자연스럽게 겹치는 문제를 해결하였고 다시 일정거리 이상 멀어지면<br>
다시 Renderers를 On으로 전환하여서<br>
![지나가면 다시 보이게 됨](https://github.com/bamin0502/3D-ProJect/assets/100828741/976c2d78-c663-45b5-af6e-5289b33e8b77)
자연스럽게 오브젝트를 가려도 플레이어가 잘보이도록 하였습니다.

## 5. 체력 관련 제작 및 서버 동기화
![체력관련 소개](https://github.com/bamin0502/3D-ProJect/assets/100828741/04f4bb1b-4316-44fb-90d8-3af5d0732221)
다음과 같이 총 3개의 체력관련 UI를 제작하였습니다. 
### 개인 체력바 관련 스크립트
```C#
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class MultiPlayerHealthBar : MonoBehaviour
{
    public Image healthBar;
    public TextMeshProUGUI healthText;
    private MultiPlayerHealth _playerHealth;
    private string _playerName;
    public string playerName = "";
    public TextMeshProUGUI nameText;
    
    public void CreateUiStatus(string _playerName)
    {
        MultiScene.Instance._players.TryGetValue(_playerName, out var playerPrefab);
        
        if (playerPrefab == null) return;
        MultiPlayerHealthBar _playerHealthBar = GameObject.Find("HpBase").GetComponent<MultiPlayerHealthBar>();
        _playerHealthBar._playerName = _playerName;
        _playerHealth = playerPrefab.GetComponent<MultiPlayerHealth>();

        if (_playerHealth != null)
        {
            Debug.Log(playerPrefab.name + " 체력바 생성");
            healthText.text = _playerHealth.CurrentHealth + "/" + _playerHealth.MaxHealth;
            UpdatePlayerHp();
        }
        else
        {
            Debug.LogError(playerPrefab.name + "체력바 생성에 실패했습니다.");
        }
    }
    public void UpdatePlayerHp()
    {
        healthBar.fillAmount = (float)_playerHealth.CurrentHealth / _playerHealth.MaxHealth;
        healthText.text = _playerHealth.CurrentHealth + "/" + _playerHealth.MaxHealth;
    }
    
}

```
### 개인 상태창 관련 스크립트
```C#
using TMPro;
using UnityEngine;
using UnityEngine.UI;
public class MultiMyStatus : MonoBehaviour
{
    public Image playerHpImage;
    public string myplayerName = "";
    public TextMeshProUGUI mynameText;
    public Canvas mystatus;
    [SerializeField]public GameObject mynameStatusPrefab;
    private Camera _cam;
    private bool isDestroyed = false;
    private MultiPlayerHealth _playerHealth;
    private Quaternion rotation = new (0, 0, 0, 0);
    private GameObject nameStatus;
    public Gradient gradient;
    public void CreateMyStatus(string myPlayerName, Vector3 playerPosition)
    {
        // 각 캐릭터마다 자신만의 UI 요소를 생성하고 위치를 조정
        nameStatus = Instantiate(mynameStatusPrefab, playerPosition + new Vector3(0, 1, 0), Quaternion.identity);
        MultiMyStatus teamStatus = nameStatus.GetComponent<MultiMyStatus>();
        teamStatus.myplayerName = myplayerName;
        teamStatus.mynameText = nameStatus.GetComponentInChildren<TextMeshProUGUI>();
        teamStatus.mynameText.text = myplayerName;
        //플레이어 체력 관련
        MultiScene.Instance._players.TryGetValue(myPlayerName,out var playerPrefab);
        if (playerPrefab != null) _playerHealth = playerPrefab.GetComponent<MultiPlayerHealth>();
        Transform playerHpTransform = nameStatus.transform.Find("Hp Image");
        if (playerHpTransform != null)
        {
            playerHpImage = playerHpTransform.GetComponent<Image>(); // playerHpImage를 초기화
        }
        
        // 상태창의 회전을 고정,캔버스도 회전을 막아야 함 
        teamStatus.transform.rotation = new Quaternion(0, 180, 0, 0);
        mystatus.transform.rotation = new Quaternion(0, 180, 0, 0);
        // mystatus Canvas의 자식으로 추가
        nameStatus.transform.SetParent(mystatus.transform);
        nameStatus.transform.rotation = new Quaternion(0, 180, 0, 0);
    }

    void Start()
    {
        _cam = Camera.main;
        rotation = transform.rotation;
        // mystatus 초기화
        mystatus = GameObject.FindGameObjectWithTag("MyStatus").GetComponent<Canvas>();
        if (mystatus == null)
        {
            Debug.LogError("캔버스를 불러올 수 없습니다.");
        }
        GradientColorKey[] colorKeys = new GradientColorKey[6];
        colorKeys[0].color = Color.red;
        colorKeys[0].time = 0.0f;
        colorKeys[1].color = Color.red;
        colorKeys[1].time = 0.25f;
        colorKeys[2].color = Color.yellow;
        colorKeys[2].time = 0.25f;
        colorKeys[3].color = Color.yellow;
        colorKeys[3].time = 0.75f;
        colorKeys[4].color = Color.green;
        colorKeys[4].time = 0.75f;
        colorKeys[5].color = Color.green;
        colorKeys[5].time = 1f;
        GradientAlphaKey[] alphaKeys = new GradientAlphaKey[6];
        for (int i = 0; i < 6; i++)
        {
            alphaKeys[i].alpha = 1.0f;
            alphaKeys[i].time = colorKeys[i].time;
        }
        gradient = new Gradient();
        gradient.SetKeys(colorKeys, alphaKeys);
    }
    private void Update()
    {
        if (!isDestroyed && nameStatus != null)
        {
            nameStatus.transform.rotation = rotation;
        }
    }
    public void UpdatePlayerHp()
    {
        playerHpImage.fillAmount = (float)_playerHealth.CurrentHealth / _playerHealth.MaxHealth;
        float fillAmount = (float)_playerHealth.CurrentHealth / _playerHealth.MaxHealth;
        playerHpImage.fillAmount = fillAmount;
        playerHpImage.color = gradient.Evaluate(fillAmount);
    }
    public void Awake()
    {
        mystatus = GameObject.FindGameObjectWithTag("MyStatus").GetComponent<Canvas>();
    }
    private void OnDestroy()
    {
        isDestroyed = true;
    }
}

```
### 팀 상태창 관련 스크립트
```C#
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class MultiTeamstatus : MonoBehaviour
{
    public string playerName = "";
    public TextMeshProUGUI nameText;
    [SerializeField]public GridLayoutGroup gridLayoutGroup;
    public Image playerHpImage;
    public GameObject statusbar;
    private MultiPlayerHealth _playerHealth;
    public Gradient gradient;
    
    public void CreateTeamStatus(string PlayerName)
    {   
        GameObject teamStatusObject = Instantiate(statusbar, gridLayoutGroup.transform);
        MultiTeamstatus teamStatus = teamStatusObject.GetComponent<MultiTeamstatus>();
        MultiScene.Instance._players.TryGetValue(PlayerName, out var player);
        _playerHealth = player!.GetComponent<MultiPlayerHealth>();
        teamStatus.playerName = playerName;
        teamStatus.nameText.text = playerName;
        TextMeshProUGUI textComponent = teamStatusObject.GetComponentInChildren<TextMeshProUGUI>();
        Transform playerHpTransform = teamStatusObject.transform.Find("PlayerHp");
        if (playerHpTransform != null)
        {
            playerHpImage = playerHpTransform.GetComponent<Image>(); // playerHpImage를 초기화
        }
        GradientColorKey[] colorKeys = new GradientColorKey[6];
        colorKeys[0].color = Color.red;
        colorKeys[0].time = 0.0f;
        colorKeys[1].color = Color.red;
        colorKeys[1].time = 0.25f;
        colorKeys[2].color = Color.yellow;
        colorKeys[2].time = 0.25f;
        colorKeys[3].color = Color.yellow;
        colorKeys[3].time = 0.75f;
        colorKeys[4].color = Color.green;
        colorKeys[4].time = 0.75f;
        colorKeys[5].color = Color.green;
        colorKeys[5].time = 1f;
        GradientAlphaKey[] alphaKeys = new GradientAlphaKey[6];
        for (int i = 0; i < 6; i++)
        {
            alphaKeys[i].alpha = 1.0f;
            alphaKeys[i].time = colorKeys[i].time;
        }
        gradient = new Gradient();
        gradient.SetKeys(colorKeys, alphaKeys);
    }

    public void DestroyTeamStatus(string PlayerName)
    {
        GameObject[] teamStatusObjects = GameObject.FindGameObjectsWithTag("TeamStatus");
        foreach (GameObject teamStatusObject in teamStatusObjects)
        {
            MultiTeamstatus teamStatus = teamStatusObject.GetComponent<MultiTeamstatus>();
            if (teamStatus.playerName.Equals(PlayerName))
            {
                Destroy(teamStatusObject);
            }
        }
    }
    public void UpdatePlayerHp()
    {
        playerHpImage.fillAmount = (float)_playerHealth.CurrentHealth / _playerHealth.MaxHealth;
        float fillAmount = (float)_playerHealth.CurrentHealth / _playerHealth.MaxHealth;
        playerHpImage.fillAmount = fillAmount;
        playerHpImage.color = gradient.Evaluate(fillAmount);
    }
    
}

```
맨 처음에 닉네임을 입력해서 로비씬에 입장하게 되면 해당 닉네임을 Dictionary 형식으로 만들어서 담아놓습니다. 
그 다음 해당 닉네임을 바탕으로 설정값에 따른 닉네임과 체력을 생성하게 됩니다. 
또한 개인 상태창과 팀 상태창은 체력 상태에 따라서 초록색, 노랑색, 빨강색으로 자동적으로 변하도록 설정하였습니다. 

#### 그 외에도 자세한 코드 내역은 파일 내역중에 Script 폴더안에 넣어두었습니다.
##### 자세한 커밋내역은 https://github.com/bamin0502/3D-ProJect 으로 보실 수 있습니다!

# 빌드본 
- ### 용량 문제로 인한 링크 업로드
##### https://drive.google.com/file/d/14sxA8Sp0y2iOOiTS7-fpw7kdoGDV0flp/view?usp=sharing
# 플레이 영상 링크
- https://youtu.be/xvQ1XfMKI4k

# 플레이 화면
- ## 사진과 달리 일부 달라진 점이 있을수 있습니다.

### 시작 화면 및 옵션 화면
![스크린샷 2023-11-09 202831](https://github.com/bamin0502/Wrinkle-Time-Area/assets/100828741/4d714ccd-8d78-483c-b8e6-39ae6cc20fc9)<br>
<div align="center">
처음에 게임이 시작되면 뜨는 창  
</div>

![옵션](https://github.com/bamin0502/3D-ProJect/assets/100828741/5de6cd1d-3675-41cd-b2d7-064f30209f00)<br>
<div align="center">
옵션 버튼을 누르면 뜨는 창  
</div>

![스크린샷 2023-12-07 155834](https://github.com/bamin0502/3D-ProJect/assets/100828741/a0328eb0-cdaa-4340-b09d-1a35da5e2c3e)
<div align="center">
ALT+F4,종료 버튼을 누르면 뜨는 모달 창  
</div>

### 로비 화면 및 로그인 화면
![로그인 창](https://github.com/bamin0502/3D-ProJect/assets/100828741/f46caef6-49f4-47d5-a0f4-67b25e845ece)<br>
<div align="center">
게임시작을 누르면 뜨는 창   
</div>

![로그인 실패](https://github.com/bamin0502/3D-ProJect/assets/100828741/dd801669-8a91-4a01-b829-adb9217d17db)<br>
<div align="center">
로그인에 실패했을때 뜨는 창  
</div>

![들어왔을때](https://github.com/bamin0502/3D-ProJect/assets/100828741/1aa84881-e9a2-4038-adf5-1e65e9584168)
<div align="center">
들어왔을때 뜨는 창   
</div>

### 로딩 씬 관련 이미지
![로딩 이미지](https://github.com/bamin0502/3D-ProJect/assets/100828741/77c27787-755a-4941-b178-341a6d90e81d)
<div align="center">
씬 이동할때 뜨는 창
</div>

### 게임 씬 관련 이미지
![게임씬 처음](https://github.com/bamin0502/3D-ProJect/assets/100828741/ecc720cf-9117-4a92-a23e-2b94662f5e7b)
![게임씬 진행](https://github.com/bamin0502/3D-ProJect/assets/100828741/b8790eb4-4047-4a19-8086-b29f1be16c2a)
![보스전](https://github.com/bamin0502/3D-ProJect/assets/100828741/9792bc05-3ae7-44c5-abb2-4722b87b058c)
![보스전2](https://github.com/bamin0502/3D-ProJect/assets/100828741/c38d4ec8-e9ef-4731-9aa7-f60ce7d843b3)
![보스전3](https://github.com/bamin0502/3D-ProJect/assets/100828741/45e9f7ba-d745-434b-b2bf-874ca563efc6)
![스크린샷 2023-11-01 225718](https://github.com/bamin0502/bamin0502.github.io/assets/100828741/fcaf51fe-6651-47ed-b115-14cb72c25a2b)

# 플레이 방법 소개
- 1인에서 5인까지 가능합니다.
- 컷신대로 몬스터를 모두 잡고 보스를 잡으면 되는 게임입니다.
- 서버를 통한 동기화가 되어있습니다.
  
  
# 현재 있는 문제점
- 처음에 서버 접속 실패하면 다시 접속이 불가능하던 현상 (2023-11-16일 기준 수정 완료)
- 방장이 나가면 다시 들어온 사람이 방장이 여러명으로 보이는 현상
- 서버가 좋지 않은 관계로 일부 끊김이 발생할수 있습니다!
- 게임 씬 메뉴버튼을 통해 돌아갔을경우 재접속 관련 문제
- 예상치 못한 버그나 테스트 하면서 발견하지 못한 버그가 발생할 수도 있습니다.
  

# 플레이 시연 환경 사양들
#### 이 이하 사양을 제외한 나머지에서는 테스트 하지 못했습니다. 노트북 기본 내장 그래픽으로는 힘들 수도 있습니다.
- Cpu= AMD Ryzen 5800x, Gpu=RTX 3070TI, Ram=32GB
- Cpu= Intel i5-9500, Gpu=Geforce GTX 1070, Ram=16GB
- Cpu= Intel i5-6500, Gpu=Geforce GTX 1050, Ram=16GB

# 유로 에셋 사용 내역
#### 해당 프로젝트에 사용된 에셋들은 전부 구매 완료된 에셋들입니다.
- DamageNumbersPro
- Hot Reload
- DotWeen Pro
- URP VFX Mega Bundle
- Top Down Effect
- Epic Toon VFX 2
- 100+ Stylized Weapons Bundle
- 100 Special Skills Effects
- The Lost Temple
- POLYGON Particle FX - Low Poly 3D Art by Synty       

# 저작권 출처 표시 
### 출처 표시
#### Font:넥슨 LV.1,LV2 고딕
#### http://levelup.nexon.com/font/index.aspx

#### BGM: 로스트아크(Lost Survival / LOST ARK Official Soundtrack)
#### https://www.youtube.com/watch?v=bSvufwVtZjo
#### 이 게임은 뮤팟이 제작한 배경음악을 사용했습니다
#### Battle of Boss - https://youtu.be/1FoCvK77O8U
#### Over And Over - Download: https://www.mewpot.com/songs/6011
#### 최대한 적긴 적었으나 까먹음등의 문제로 쓰지못한 것들이 있을 수도 있습니다!



