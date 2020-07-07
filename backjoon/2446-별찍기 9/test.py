n = int(input())
string = ''
for i in range(n):
    string+=' '*i + '*'*(2*n-2*i-1)
    string += '\n'
for i in range(n-1):
    string+=' '*(n-2-i) + '*'*(2*i+3)
    string +='\n'

print(string)
