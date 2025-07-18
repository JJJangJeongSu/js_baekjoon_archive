import sys

input = sys.stdin.readline

n, m = map(int,input().split())

input_arr = list(map(int, input().split()))

remainder_counts = [0]*m
current_sum = 0
answer = 0

for i in range(n):
    current_sum  = (current_sum + input_arr[i])%m
    remainder_counts[current_sum] +=1
    
    
    
answer = remainder_counts[0]

for i in remainder_counts:
    answer += i*(i-1)/2
    
print(int(answer))