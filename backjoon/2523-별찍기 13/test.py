n = int(input())
string = ''
for i in range(n):
    string += '*'*(i+1)
    string += '\n'
for i in range(n-1, 0, -1):
    string += '*'*(i)
    string += '\n'

print(string)
