for VS while
for = 정해진 범위 또는 데이터를 순회하며 반복
while = 조건이 참일 때 계속 반복
while문 사용법
max = 25 #최대 허용 무게
weigth = 0 # 현재 캐리어 무게
item = 3 #각 짐의 무게

 while weight + item <= max: #캐리어에 짐이 더 들어가도 되는지 확인
  weight += item
  print('짐을 추가합니다')
print(f'총 무게는 {weight}입니다'} #참이 아니면 조건문을 벗어난다.
