---
layout: post
date: 2021-01-06 14:57:07
title: "모각코 3일차 후기"
categories: Mogakco
published: true
---

## Alarm Clock Making, Material Preview

<div style="float: left; width: 50%"><img src="/assets/images/2021-01-06-15-38-30.png" height="300" alt="front view"/></div>

<div style="float: left; width: 50%"><img src="/assets/images/2021-01-06-15-39-18.png" height="300" alt="back view"/></div>

시계의 텍스쳐가 들어갈 앞면,
시계의 몸통(Metal)
시계의 뒷판(Plastic-black)

이렇게 세가지의 Material을 사용해 배치했다.

## UV editing

3D에서는 (x,y,z) 3축을 사용하지만, 2D로 unwrapping할때는 같은 좌표계를 사용할 수 없다. 그래서, x 앞의 (u,v)를 사용해서 표시한다.

<center><img src="/assets/images/2021-01-06-15-49-26.png" width="1200" height="600" alt="UV editor"/></center>

**`Shift + F10`** 을 통해 UV Editor를 띄울 수 있다. 위는 UV Editor를 띄운 상태에서 텍스쳐를 넣을 face를 선택하고, 해당 face가 성공적으로 Unwrapping된 것을 확인할 수 있다.

## Island Select Mode

<center><img src="/assets/images/2021-01-06-16-08-27.png" width="600" height="400" alt="mark seam"/></center>

Mark seam으로 UV Map에서 임의로 나눠줄 edge를 선택 가능하다.
