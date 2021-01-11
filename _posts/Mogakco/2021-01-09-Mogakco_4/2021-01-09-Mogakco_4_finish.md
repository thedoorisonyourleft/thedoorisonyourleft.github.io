---
layout: post
date: 2021-01-09 18:58:28
title: "모각코 4일차 후기"
categories: Mogakco
published: true
---

## Sample making

<center><img src="/assets/images/2021-01-09-19-52-59.png" width="300" height="400" alt="UV editor"/></center>
간단히 뼈대를 만들고 움직일 모델을 만들어봤다.

## Rigging

뼈대를 심는 작업을 Rigging이라고 한다.

<center><img src="/assets/images/2021-01-09-20-11-41.png" width="300" height="400" alt="UV editor"/></center>

object mode에서 amteur object를 추가해주면

<center><img src="/assets/images/2021-01-09-20-12-21.png" width="200" height="150" alt="UV editor"/></center>

이렇게 3d커서부분에 기본뼈대와 관절이 생성되게 된다.
하지만, 뼈대는 여러개가 이어져있는 모델이니
돌출 단축키 E를 눌러서 뼈를 늘려주면 된다.

<center><img src="/assets/images/2021-01-09-20-49-46.png" width="300" height="400" alt="UV editor"/></center>

이렇게 추가했고, 기존에 있던 bone을 parent bone, 추가된 bone을 child bone이라고 한다.

<div style="float: left; width: 50%"><img src="/assets/images/1.gif" height="300" alt="front view"/></div>

<div style="float: left; width: 50%"><img src="/assets/images/2.gif" height="300" alt="back view"/></div>

저 bone들을 편집할땐 에디트모드와 포즈모드 두가지로 편집 가능. 
에디트모드는 연결된 모든 bone들이 움직이는 것을 볼 수 있지만, 포즈모드에서는 엄격하게 해당 bone만 움직이는 것을 볼 수 있다.

> 부모는 다중자녀 가능, 자녀는 다중부모 불가능.

## Merge Bone & Object

이제, 저렇게 만들어진 관절과 오브젝트를 합쳐줘야하니 Bone의 parent를 object로 잡아준다.

<center><img src="/assets/images/3.gif" width="300" height="400" alt="UV editor"/></center>

위와 같이 다 끝내고 난 뒤에는, 뼈대를 조작하다 Alt + R로 원위치로 복구시킬 수 있다.

## Auto keying

키프레임별로 뼈대를 움직여놓으면 알아서 애니메이션을 생성해줌.
아직 잘 다루지 못하는 부분. 다음에 조금 더 해볼것.

<center><img src="/assets/images/4.gif" width="250" height="400" alt="UV editor"/></center>

## 후기

관절을 만들어보려고 했는데, 뼈대를 만드는것이 우선인것을 몰라서 뼈대만들기로 선회했다. 다음에는 관절을 꼭 해야겠다.
