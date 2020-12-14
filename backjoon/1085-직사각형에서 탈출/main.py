# 1085
# 직사각형에서 탈출
arr = list(map(int, input().split()))
num = min(arr[2]-arr[0], arr[3]-arr[1], arr[0], arr[1])
print(num)