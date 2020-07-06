#동전 갯수 / 총 합
n, amount = map(int, input().split())
#입력 목록
arr = []
cnt = 0
for i in range(n):
    num = int(input())
    arr.append(num)
    
for i in range(n-1, -1, -1):
    if amount == 0:
        break
    if arr[i] > amount:
        continue
    cnt += amount//arr[i]
    amount %= arr[i]

print(cnt)
                
            
