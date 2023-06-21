 my_tuple = ('가지', '자두', '앵두') #패킹 : 가지, 자두, 앵두를 묶어 my_tuple에 집어넣는다는 의미이다.
 #파이썬은 이것의 반대인 개념도 있다. 
  my_tuple = ('가지', '자두', '앵두') 
 (apple1,apple2,apple3) = my_tuple #언패킹 my_tuple를 풀어서 apple1, apple2, apple3 변수에 각각 저장하는 것이다.
 #언패킹에는 별(*)를 이용할 수 있다.
 numbers = (1,2,3,4,5,6,7,8,9)
 (one, two, *others) = numbers #나머지는 others에 저장된다., 튜플이 아닌 리스트 형태로 된다는 점을 주의 해야 한다.
  numbers = (1,2,3,4,5,6,7,8,9)
 (*others, nine, ten) = numbers
  numbers = (1,2,3,4,5,6,7,8,9)
 (one, *others, ten) = numbers #이런 식으로도 사용이 가능하다.
 
