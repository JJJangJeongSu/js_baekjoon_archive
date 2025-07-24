import sys

input = sys.stdin.readline

n = int(input())
m = int(input())

ingred_list = []

ingred_list = list(map(int, input().split()))

ingred_list.sort()
total = 0

start_idx = 0
end_idx = n-1

count = 0

# print(ingred_list)

while start_idx != end_idx:
    total = ingred_list[start_idx] + ingred_list[end_idx]
    if total <= m:
        start_idx += 1
        
        if total == m:
            count += 1
        
    else:
        end_idx -=1
    
    
print(count)