import sys

input = sys.stdin.readline

class Node:
    def __init__(self, data):
        self.prev = None 
        self.next = None
        self.data = data
        
class IDE:
    def __init__(self):
        self.begin_node = Node(data="BEGIN")
        self.current_node = self.begin_node
        
    def print_all_node(self):
        cur_node = self.begin_node.next
        while not cur_node == None:
            print(cur_node.data, end="") 
            cur_node = cur_node.next
    
    def move_left(self):
        if not self.current_node.prev == None:
            self.current_node = self.current_node.prev
        
    def move_right(self):
        if not self.current_node.next == None:
            self.current_node = self.current_node.next
            
    def add_node(self, data):
        new_node = Node(data=data)\
    
        new_node.next = self.current_node.next
        
        self.current_node.next = new_node
        
        if new_node.next != None:
            new_node.next.prev = new_node
        
        new_node.prev = self.current_node
        
        self.current_node = new_node
        
    def delete_node(self):
        if self.current_node.data == "BEGIN":
            return
        
        self.temp_node = self.current_node
        
        self.current_node.prev.next = self.current_node.next
        if self.current_node.next != None:
            self.current_node.next.prev = self.current_node.prev
        self.current_node = self.current_node.prev
        
        

ide = IDE()


input_string = input().strip()

for letter in input_string:
    ide.add_node(letter)

n = int(input())

for i in range(n):
    command = input().strip()
    if command == 'L':
        ide.move_left()
    
    elif command == "D":
        ide.move_right()
        
    elif command == "B":
        ide.delete_node()
    
    elif command[0] == 'P':
        ide.add_node(command[2]) 
        
        
        
ide.print_all_node()