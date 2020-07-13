#파이썬의 lambda함수를 사용하자
t = int(input())
arr = []
for i in range(t):
    old, name = map(str, input().split())
    old = int(old)
    arr.append((old, name))

arr.sort(key=lambda arr:arr[0])

for i in range(t):
    print(arr[i][0], arr[i][1])
