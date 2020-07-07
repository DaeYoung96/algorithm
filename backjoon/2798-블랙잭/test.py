#기존에 있던 합보다 크고, 딜러가 제시하는 값보다 작을때마다 갱신
n, amount = map(int, input().split())
arr = []
result = 0
arr = list(map(int, input().split(' ')))

for i in range(0, n-2):
    for j in range(i+1, n-1):
        for k in range(j+1, n):
            if arr[i]+arr[j]+arr[k] <=amount and result < arr[i]+arr[j]+arr[k]:
                result = arr[i]+arr[j]+arr[k]

print(result)
