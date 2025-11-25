import sys 

input = sys.stdin.readline

left_stack = []
right_stack = []

init_string = input().strip()
n = int(input())


for letter in init_string:
    left_stack.append(letter)
    
right_stack.reverse()

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
        
        
for c in left_stack:
    print(c, end="")
    

right_stack.reverse()

for c in right_stack:
    print(c, end="")