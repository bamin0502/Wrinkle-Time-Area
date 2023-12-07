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
#### 해당 프로젝트의 팀장을 담당하였습니다. 

#### 1. 코드 최적화 및 수정
불필요하고 비효율적인 코드를 제거 및 리팩토링 하였습니다. 또한 다른 팀원이 한 것들을 보고 최적화 및 오류등을 중점으로 최적화 및 수정을 진행하였습니다. 

#### 2. Time Line 제작 및 서버 동기화
![타임라인 설명](https://github.com/bamin0502/3D-ProJect/assets/100828741/acbe8630-bde2-4e92-9247-2cd42f4f05eb)
<br>다음 사진과 같이 총 3개의 TimeLine 컷신을 제작하였습니다. 

![첫번째 컷신](https://github.com/bamin0502/3D-ProJect/assets/100828741/9e15d72a-8b82-4900-bd3b-24b4fd1cbae9)
![첫번째 컷신2](https://github.com/bamin0502/3D-ProJect/assets/100828741/7fb97640-8fee-447a-81e8-a8400ec02c51)
<br>
첫 번째 컷신은 처음에 입장하자마자 바로 플레이되며, 다음과 같이 코드를 통해서 ESC를 통한 스킵이 가능해지고 <br>또한 몬스터가 플레이어를 감지하는 로직이 실행됩니다. <br>컷신이 플레이인 중에는 기존 브금은 재생되지 않고 멈춰있다가 컷신 재생이 끝나면 다시 재생될수 있도록 설정하였습니다. 

![두번째 컷신](https://github.com/bamin0502/3D-ProJect/assets/100828741/f7efafc8-ab4d-47c1-970f-b8094676ef03)
![두번째 컷신2](https://github.com/bamin0502/3D-ProJect/assets/100828741/d172a1f5-dd15-4ea0-8fe0-0bd5d7833cb2)
<br>
두 번째 컷신은 지정해둔 객체에 더 이상 자식(몬스터)가 없을 시에 다 같이 컷신이 실행될수 있도록 설정하였습니다.<br> 마찬가지로 플레이 중에는 기존 브금이 재생되지 않으며 기존에 지나갈수 없던 길을 지나갈수 있도록 NavMesh의 값을 변경시켜줘서 지나갈 수 있도록 설정하였고, 보스도 이 컷신이 끝난 시점부터 로직이 실행되도록 설정하였습니다. 

![마지막 컷신 관련](https://github.com/bamin0502/3D-ProJect/assets/100828741/7a909e08-181e-46f9-8b9f-435167e7e2e5)
<br>
마지막 컷신은 보스의 체력이 0이 되면 실행되도록 설정하였으며 마찬가지로 다 같이 컷신이 실행될수 있도록 설정하였습니다.
#### 3. 데이터 교환 방식 구현 및 암호화
서버에서 원할한 데이터 교환을 위해서 Json방식으로 데이터를 주고 받을수 있도록 Json을 사용하였으며, <br>해당 Json의 값을 변경하지 못하도록 해당 Json파일을 열었을 때 AES암호화 방식으로 암호화 하였습니다. 
<br>자세한 설명은 https://wakeup-technologydirectory.tistory.com/25을 통해서 정리해 두었습니다. 
#### 4. 특정 오브젝트 가림 관련
![사물안보이게하기](https://github.com/bamin0502/3D-ProJect/assets/100828741/56fc6818-0074-4890-81f9-7ea74c9410a8)
![사물 안보이게하기2](https://github.com/bamin0502/3D-ProJect/assets/100828741/2577fef9-9274-47ba-a146-cb8e6bde52ed)
![사물 안보이게 하기 카메라](https://github.com/bamin0502/3D-ProJect/assets/100828741/d31c37a8-4ea6-4844-8d19-ea76e2cd3685)
![사물 안보이게 하기 카메라2](https://github.com/bamin0502/3D-ProJect/assets/100828741/2763e78f-2bdd-484b-a65a-cc71cf364f6b)
![사물 안보이게 하기 카메라3](https://github.com/bamin0502/3D-ProJect/assets/100828741/74557e92-a9ff-4536-9f36-447e4cc26c62)

해당 HideObject 스크립트를 통해서 그 해당 오브젝트에 있는 Renderers를 가져오게 됩니다.<br> 
이 상태에서 플레이어랑 오브젝트가 서로 겹치게 되면 오브젝트의 Renderers를 ShadowOnly로 바꿔서<br>
![장애물이 안보이게 됨](https://github.com/bamin0502/3D-ProJect/assets/100828741/3162fb50-5d4b-4d33-8d3e-f93debe4ddb5)<br>
사진과 같이 그림자만 보이게 되서 자연스럽게 겹치는 문제를 해결하였고 다시 일정거리 이상 멀어지면<br>
다시 Renderers를 On으로 전환하여서<br>
![지나가면 다시 보이게 됨](https://github.com/bamin0502/3D-ProJect/assets/100828741/976c2d78-c663-45b5-af6e-5289b33e8b77)
자연스럽게 오브젝트를 가려도 플레이어가 잘보이도록 하였습니다.

#### 5. 체력 관련 제작 및 서버 동기화
![체력관련 소개](https://github.com/bamin0502/3D-ProJect/assets/100828741/04f4bb1b-4316-44fb-90d8-3af5d0732221)
다음과 같이 총 3개의 체력관련 UI를 제작하였습니다. 
##### 먼저 개인 체력바 관련 스크립트 입니다. 
![개인 체력바](https://github.com/bamin0502/3D-ProJect/assets/100828741/088ad5c4-822b-4443-8ba3-a138834272d8)
##### 개인 상태창 관련 스크립트입니다. 
![개인 상태창](https://github.com/bamin0502/3D-ProJect/assets/100828741/422de077-e94f-4ad4-b261-a7307cc65533)
![개인 상태창2](https://github.com/bamin0502/3D-ProJect/assets/100828741/4f42f70c-33a1-4270-bc25-1f333cdcf1d5)
![개인 상태창3](https://github.com/bamin0502/3D-ProJect/assets/100828741/180c6bb9-1880-4c7f-8911-ce20c3cbf852)
##### 팀 상태창 관련 스크립트입니다. 
![팀 상태창](https://github.com/bamin0502/3D-ProJect/assets/100828741/2fe9599c-4e35-473d-ac91-ce462032eb11)
![팀 상태창2](https://github.com/bamin0502/3D-ProJect/assets/100828741/660aee5e-c328-4877-9fd3-3a3de16b01be)

맨 처음에 닉네임을 입력해서 로비씬에 입장하게 되면 해당 닉네임을 Dictionary 형식으로 만들어서 담아놓습니다. 
그 다음 해당 닉네임을 바탕으로 설정값에 따른 닉네임과 체력을 생성하게 됩니다. 
또한 개인 상태창과 팀 상태창은 체력 상태에 따라서 초록색, 노랑색, 빨강색으로 자동적으로 변하도록 설정하였습니다. 

#### 몬스터 체력 관련 


#### 그 외에도 자세한 코드 내역은 파일 내역중에 Script 폴더안에 넣어두었습니다.
##### 자세한 커밋내역은 https://github.com/bamin0502/3D-ProJect 으로 보실 수 있습니다!

# 빌드본 
- ### 용량 문제로 인한 링크 업로드
##### https://drive.google.com/file/d/14sxA8Sp0y2iOOiTS7-fpw7kdoGDV0flp/view?usp=sharing
# 플레이 영상 링크
- https://youtu.be/xvQ1XfMKI4k

# 플레이 화면
- ## 사진과 달리 일부 달라진 점이 있을수 있습니다.
![스크린샷 2023-11-09 202831](https://github.com/bamin0502/Wrinkle-Time-Area/assets/100828741/4d714ccd-8d78-483c-b8e6-39ae6cc20fc9)
![스크린샷 2023-10-13 025520](https://github.com/bamin0502/Wrinkle-Time-Area/assets/100828741/49aaa0e6-a78b-4029-b578-272a39d36f99)
![스크린샷 2023-10-13 025939](https://github.com/bamin0502/Wrinkle-Time-Area/assets/100828741/a024c2b8-06a1-4900-bb95-c1f197809225) 
![스크린샷 2023-10-13 030717](https://github.com/bamin0502/Wrinkle-Time-Area/assets/100828741/aee9d46d-295d-4b40-a6d0-cc11695f3f6e)

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



