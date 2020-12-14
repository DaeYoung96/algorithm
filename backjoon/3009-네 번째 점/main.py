# 3009
# 네 번째 점
arr_x = []
arr_y = []
x = 0

for i in range(0, 3):
    tmp_x, tmp_y = list(map(int, input().split()))
    arr_x.append(tmp_x)
    arr_y.append(tmp_y)

if arr_x[0] == arr_x[1]:
    x = arr_x[2]
elif arr_x[1] == arr_x[2]:
    x = arr_x[0]
else:
    x = arr_x[1]

if arr_y[0] == arr_y[1]:
    y = arr_y[2]
elif arr_y[1] == arr_y[2]:
    y = arr_y[0]
else:
    y = arr_y[1]

print(x, y)