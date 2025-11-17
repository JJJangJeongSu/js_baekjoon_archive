heights = [int(input()) for _ in range(9)]
heights.sort()

def print_result(i, j):
    for k in range(9):
        if k != i and k != j:
            print(heights[k])

total = sum(heights)

for i in range(9):
    for j in range(i):
        if total - heights[i] - heights[j] == 100:
            print_result(i, j)
            exit(0)
