import sys
from collections import deque

input = sys.stdin.readline 

class Queue:
    def __init__(self):
        self.items = deque()
        
    def push(self, item:int):
        self.items.append(item)

    def pop(self):
        if self.is_empty():
            return -1
        else:
            return self.items.popleft()
        
    def get_len(self):
        return len(self.items)
    
    def is_empty(self):
        if len(self.items) == 0:
            return 1
        else:
            return 0
        
    def get_front(self):
        if self.is_empty():
            return -1
        else:
            return self.items[0]
        
    def get_back(self):
        if self.is_empty():
            return -1
        else:
            return self.items[-1]
        
n = int(input())

queue = Queue()

for _ in range(n):
    user_command = input().split()
    
    if user_command[0] == 'push':
        queue.push(int(user_command[1]))
    elif user_command[0] == 'pop':
        print(queue.pop())
    elif user_command[0] == 'size':
        print(queue.get_len())
    elif user_command[0] == 'empty':
        print(queue.is_empty())
    elif user_command[0] == 'front':
        print(queue.get_front())
    elif user_command[0] == 'back':
        print(queue.get_back())