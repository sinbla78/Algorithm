# 1부터 30까지의 리스트를 생성 
num = [i for i in range(1, 31)]

# 입력받은 숫자를 리스트에서 제거
for _ in range(28):
    data = int(input())
    num.remove(data)
print(min(num))
print(max(num))