# 일일이 검사하면 오래 걸리니
# 소수 리스트를 작성 후에 편하게 검사하자

n = 123456 * 2 + 1
arr = [True] * n

# 소수 리스트 작성
for i in range(2, int(n**0.5) + 1, 1):
    for j in range(2*i, n, i):
        arr[j] = False

while(1):
    num = int(input())
    if num == 0:
        break
    else:
        cnt = 0
        for i in range(num+1, num*2+1, 1):
            if arr[i] == True:
                cnt += 1
        print(cnt)
