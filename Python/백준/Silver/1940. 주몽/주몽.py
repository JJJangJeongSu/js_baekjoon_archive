import sys

input = sys.stdin.readline

n = int(input())
m = int(input())

ingred_list = list(map(int, input().split()))

# 정렬하기 
ingred_list.sort()

i = 0
j = n-1

count = 0
# 현재보다 m이 크면, 밑의 숫자를 키우기 
while i<j:
    total = ingred_list[i] + ingred_list[j]

    if total < m:
        i+=1
    else:
        if total == m:
            count +=1
        j-=1

print(count)