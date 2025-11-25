import sys 

input = sys.stdin.readline

left_stack = list(input().strip())
right_stack = []

n = int(input())


for i in range(n):
    command = input().strip()
    
    if command == "L":
        if left_stack:
            right_stack.append(left_stack.pop())
    
    elif command == "D":
        if right_stack:
            left_stack.append(right_stack.pop())
            
    elif command == "B":
        if left_stack:
            left_stack.pop()
        
    elif command[0] == "P":
        left_stack.append(command[2])
        
print("".join(left_stack + right_stack[::-1]))