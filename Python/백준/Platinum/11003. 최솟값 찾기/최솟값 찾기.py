from collections import deque
import sys
input = sys.stdin.readline

n, window_size = map(int, input().split())
input_arr = list(map(int, input().split()))

cur_deque = deque()

result = []

for i in range(n):
    # 삽입
    # 현재 값보다 큰 값들은 쳐내기
    while cur_deque and input_arr[cur_deque[-1]] >= input_arr[i]:
        cur_deque.pop()
    
    cur_deque.append(i)
        
    # 오래된 왼쪽값들 쳐내기
    while cur_deque and cur_deque[0] < i-window_size+1:
        cur_deque.popleft()
        
    # 제일 왼쪽값이 최소값
    result.append(str(input_arr[cur_deque[0]]))


print(" ".join(result))