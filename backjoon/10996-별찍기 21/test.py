n = int(input())
string = ''
for i in range(2*n):
    for j in range(n):
        if i%2==0:
            if j % 2 == 0:
                string +='*'
            else:
                string += ' '
        else:
            if j % 2 == 0:
                string += ' '
            else:
                string +='*'
        
    string += '\n'

print(string)
