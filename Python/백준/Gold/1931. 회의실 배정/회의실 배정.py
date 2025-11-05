import sys

input = sys.stdin.readline

n = int(input())

schedules = [tuple(map(int,input().split())) for _ in range(n)]

schedules.sort(key = lambda x: (x[1],x[0]))

count = 0

cur_end = -1

for i in range(n):
    if cur_end <= schedules[i][0]:
        count += 1 
        cur_end = schedules[i][1]
        
print(count)