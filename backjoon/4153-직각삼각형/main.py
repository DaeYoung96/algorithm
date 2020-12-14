# 4153
# 직각삼각형
while True:
    arr = list(map(int, input().split()))
    if arr[0] == 0 & arr[1] == 0 & arr[2] == 0:
        break
    else:
        arr.sort()
        if arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]:
            print("right")
        else:
            print("wrong")