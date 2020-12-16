# 1924
# 2007년
month, day = list(map(int, input().split()))
num = 0
cnt = 0
for i in range(1, month):
    if i == 2:
        num += 28
    elif i == 4 or i == 6 or i == 9 or i == 11:
        num += 30
    else:
        num += 31

num += day
arr = ['SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT']
print(arr[num%7])