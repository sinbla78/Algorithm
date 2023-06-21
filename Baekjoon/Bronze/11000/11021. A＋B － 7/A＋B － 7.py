t = int(input())

for i in range(1, t+1):  # 1부터 t까지
    a, b = map(int, input().split())
    print(f'Case #{i}: {a+b}')