import sys

input = sys.stdin.readline

n = int(input())

target_arr = [int(input()) for _ in range(n)]
stack = []
result = []
cur_val = 1

for target in target_arr:
    # 현재 stack 값보다 크면 push
    while cur_val <= n and (not stack or stack[-1] < target):
        stack.append(cur_val)
        result.append("+")
        cur_val += 1
    
    
    # 현재 top 값이 아닐 경우 에러
    if not stack or stack[-1] != target:
        print("NO")
        sys.exit(0)
        
    # pop
    stack.pop()
    result.append("-")
    

print("\n".join(result))