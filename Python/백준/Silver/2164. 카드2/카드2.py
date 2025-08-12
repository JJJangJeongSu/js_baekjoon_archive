import sys 
from collections import deque
input = sys.stdin.readline

n = int(input())

q = deque([num+1 for num in range(n)])

while len(q)>1:
    q.popleft()
    q.rotate(-1)
    
print(q[0])