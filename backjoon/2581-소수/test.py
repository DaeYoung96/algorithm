import math as np
#소수인지 판별
def prime_chk(num):
    for i in range(2, num):
        if num % i == 0:
            return False
        elif i == num-1:
            return True
    
a = int(input())
b = int(input())
#소수를 넣어줄 빈 배열 생성
arr = []
for i in range(a,b+1,1):
    #소수라면 배열에 추가
    if i == 1:
        pass
    elif i == 2:
        arr.append(i)
    if prime_chk(i) == True:
        arr.append(i)

if sum(arr) == 0:
    print('-1')
else:
    print(sum(arr))
    print(min(arr))
