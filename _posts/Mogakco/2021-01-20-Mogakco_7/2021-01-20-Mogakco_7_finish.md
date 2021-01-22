---
layout: post
date: 2021-01-20 17:59:20
title: "모각코 7일차 후기"
categories: Mogakco
published: true
---

<center><img src="/assets/images/2021-01-20-15-44-41.png" width="400" height="300" alt="import and make tile"/></center>

관절과 리깅을 해놓은 모델을 유니티로 불러들이고, 타일을 만들어 올려준다.

<center><img src="/assets/images/2021-01-20-15-46-58.png" width="400" height="200" alt="import and make tile"/></center>
테스트에서 건드려줘야 할 컴포넌트들은 Collider, RigidBody, Script.

<center><img src="/assets/images/2021-01-20-16-50-54.png" width="400" height="600" alt="import and make tile"/></center>

RigidBody로 test모델링을 강체설정해주고,
Capsule collider 설정을 통해 충돌체를 지정해주며,
Player Script를 넣어 조작 가능하게 한다.

<center><img src="/assets/images/2021-01-20-17-02-30.png" width="400" height="300" alt="import and make tile"/></center>

대충 이런식으로... 플레이어 스크립트를 짜주고, 엔진상에서 스피드를 적당히 설정해준다.

<center><img src="/assets/images/5.gif" width="400" height="400" alt="import and make tile"/></center>

블렌더에서 만든 파일로 조작 가능한 것을 확인 가능하다.
