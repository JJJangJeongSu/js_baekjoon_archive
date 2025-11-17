import sys

input = sys.stdin.readline

n = int(input())

for i in range(n):
    sentence = input()
    
    word_stack = []
    
    for letter in sentence:
        if letter == ' ' or letter == '\n':
            while word_stack:
                print(word_stack.pop(), end='')
                
            if letter== '\n':
                print("")
            else:
                print(' ', end='')
        else:
            word_stack.append(letter)