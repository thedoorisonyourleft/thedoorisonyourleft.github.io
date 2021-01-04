---
layout: post
date: 2020-12-30 19:00:28
title: "모각코 2일차 후기"
categories: Mogakco
published: true
---

## Can making

<center><img src="/assets/images/2020-12-30-22-18-01.png" width="500" height="500" alt="objet making"/></center>

먼저, 이번 조작에서 쓸 캔을 하나 만들어봤다. 와이어프레임 뷰.

## 3D point

<center><img src="/assets/images/2020-12-30-20-03-41.png" width="100" height="100" alt="prop select"/></center>

이 원점은 3D 커서라고 함. Shift + A로 이동 가능. 다른방식으로도 사용 가능.

---

## Window

<center><img src="/assets/images/2020-12-30-19-44-34.png" width="300" height="300" alt="outliner"/></center>

블렌더의 우측 상단에 Scene collection이라는 윈도우가 있다. 모델링에서 차지하는 조명, 카메라, 오브젝트를 한 윈도우에서 관리 가능. 컬렉션이라고 함.

<center><img src="/assets/images/2020-12-30-19-52-41.png" width="200" height="400" alt="prop select"/></center>

속성편집창. 오브젝트인지, 광원인지,카메라인지에 따라 나오는 속성들이 알아서 달라짐.

<center><img src="/assets/images/2020-12-30-21-55-22.png" width="300" height="400" alt="material"/></center>

위 속성편집창에서, Material부분을 조정해서 얻은 결과.
Principled BSDF Shader을 사용하고, Metalic을 1, Roughness를 0.2정도로 설정해서 나온 Material Preview.

<a href="https://meshmason.tistory.com/10"><center><img src="/assets/images/2020-12-30-22-10-15.png" width="450" height="400" alt="principled BSDF properties?"/></center></a>

위 Principled BSDF shader의 properties에 관한 내용..

이유는 모르겠지만, F12로 렌더링을 해보면 아래와 같이 제대로 나오지 않는다. 더 알아봐야겠다.

<center><img src="/assets/images/2020-12-30-22-02-21.png" width="300" height="400" alt="cant preview.."/></center>

카메라를 올려보니, 광원이 표현된 것까지는 확인 가능했다.

<center><img src="/assets/images/2020-12-30-22-03-59.png" width="300" height="400" alt="F12 rendering"/></center>

---

## Other Properties

<center><img src="/assets/images/2020-12-30-22-07-50.png" width="150" height="400" alt="prop select"/></center>

1번영역 > Scene에 관련된 부분. 동적으로 만들것이 아니라, 모델링만을 사용할거니 일단 넘어간다.
2번영역 > 선택한 것에 따라 달라지는 영역. 오브젝트는 오브젝트별 속성, 광원은 세기나 종류 등, 카메라는 피사체 심도 등등을 조정할 수 있다.
3번영역 > 텍스쳐.

오브젝트에 관한 것만 만질 수 있을 것이라고 생각했는데, 광원이나 카메라 설정도 만질 수 있을줄은 몰랐다. 다음에 추가로 봐야겠다.
