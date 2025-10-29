import sys
input = sys.stdin.readline

n = int(input())

arr = list(map(int, input().split()))
arr.sort()

max_idx = -1
max_diff = -1

for i in range(n-1):
    cur_diff = arr[i+1]-arr[i]
    # 갱신
    if cur_diff % 2 == 1:
        cur_diff = cur_diff - 1
        
    if cur_diff !=0 and max_diff < cur_diff:
        max_idx = i
        max_diff = cur_diff
        

if max_idx != -1:
    result = (arr[max_idx] + arr[max_idx+1])//2
    
else:
    result = -1
    
print(result)
