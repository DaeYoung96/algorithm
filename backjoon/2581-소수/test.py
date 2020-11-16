import math as np

testNum = int(input())
# 테스트케이스만큼 반복
for i in range(0, testNum):
    # 골드바흐의 페어를 구해야할 수를 입력
    n = int(input())
    MIN = 10000
    num_1 = 0
    num_2 = 0
    idx = 0
    arr = []
    # 그 수 전까지 소수를 찾아보자
    for j in range(2, int(n ** 0.5), 1):
        cnt = 0
        for k in range(2, j, 1):
            if j % k == 0:
                cnt+=1
        if cnt == 0:
            arr.append(j)
            idx += 1

    for j in range (0, idx, 1):
        for k in range(0, idx, 1):
            if arr[j] + arr[k] == n:
                if MIN > abs(arr[j] - arr[k]):
                    num_1 = arr[j]
                    num_2 = arr[k]
                    MIN = abs(arr[j] - arr[k])
    print(num_1, " ", num_2)
