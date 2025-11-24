import sys

input = sys.stdin.readline

input_string = input().strip()

stack = []
result = []

tag = False

for cur_char in input_string:
    if cur_char == ">":
        result.append(">")
        tag = False
        continue
    
    if tag:
        result.append(cur_char)
        continue
    
    if cur_char == "<":
        while stack:
            result.append(stack.pop())
        result.append("<")
        tag = True
    
    elif cur_char == ' ':
        while stack:
            result.append(stack.pop())
        result.append(' ')
            
    else:
        stack.append(cur_char)
         

while stack:
    result.append(stack.pop())

print("".join(result))
    
    