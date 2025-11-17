import sys

input = sys.stdin.readline

n = int(input())

container = []

for i in range(n):
    operation = input().split()
    
    if operation[0] == 'push':
        container.append(int(operation[1]))
    elif operation[0] == 'pop':
        if len(container) == 0:
            print(-1)
        else:
            print(container.pop())
    elif operation[0] == 'size':
        print(len(container))
    elif operation[0] == 'empty':
        if len(container) == 0:
            print(1)
        else:
            print(0)
    elif operation[0] == 'top':
        if len(container) == 0:
            print(-1)
        else:
            print(container[-1])
        
    