import sys
a = int(input())


class Stack(object):
    def __init__(self):
        self.items = []
        
    def push(self, value):
        self.items.append(value)
        
    def pop(self):
        if self.empty() == 0:
            value = self.top()
            del self.items[-1]
            return value
        else:
            return -1
            
    def size(self):
        return len(self.items)
    
    def empty(self):
        if not bool(self.items):
            return 1
        else:
            return 0
    
    def top(self):
        if self.empty() == 0:
            return self.items[-1]
        
        else:
            return -1
             
    def __repr__(self):
        return repr(self.items)

        
stack = Stack()
            
for i in range(a):
    order = sys.stdin.readline().split()
    if order[0] == 'push':
        stack.push(int(order[1]))
    elif order[0] == 'pop':
        print(stack.pop())
    elif order[0] == "size":
        print(stack.size())
    elif order[0] == 'empty':
        print(stack.empty())
    elif order[0] == 'top':
        print(stack.top())  
