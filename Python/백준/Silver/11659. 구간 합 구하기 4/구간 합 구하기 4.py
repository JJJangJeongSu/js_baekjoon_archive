import sys
input = sys.stdin.readline

n, m = map(int, input().split())

num_list = list(map(int, input().split()))

# print(num_list)

sum_list = [0 for i in range(n)]

# Make sum list
for i in range(n):
    if i==0:
        sum_list[i] = num_list[0]
    else:
        sum_list[i] = sum_list[i-1]+num_list[i]
        
for i in range(m):
    start, end = map(int, input().split())
    if start == 1:
        print(sum_list[end-1])
    else:
        print(sum_list[end-1]- sum_list[start-2]) 