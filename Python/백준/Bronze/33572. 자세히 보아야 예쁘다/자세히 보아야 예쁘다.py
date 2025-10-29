import sys
input = sys.stdin.readline  

n, m = map(int, input().split())
max_hours = list(map(int, input().split()))

# hour -1 들의 합을 구하기
total = 0
for i in max_hours:
    total += i
    
total -= n 

if total < m:
    print("OUT")
    
else:
    print("DIMI")