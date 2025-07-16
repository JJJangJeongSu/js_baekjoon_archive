import sys

new_input = sys.stdin.readline

# 입력 받기 
size_of_table, question_count = map(int, new_input().split())

table = [list(map(int, new_input().split())) for _ in range(size_of_table)]
sum_table = [[0]*size_of_table for _ in range(size_of_table)]

# 구간합 table 구하기 
for i in range(size_of_table):
    for j in range(size_of_table):     
        if i > 0 and j > 0:
            add_num = sum_table[i-1][j] + sum_table[i][j-1] - sum_table[i-1][j-1]
        elif i>0:
            add_num = sum_table[i-1][j]
        elif j>0:
            add_num = sum_table[i][j-1]
        else:
            add_num = 0

        
        sum_table[i][j] = table[i][j] + add_num


# 입력 값에 대한 구간 합 구하기
for _ in range(question_count):
    x1, y1, x2, y2 = map(int, new_input().split())

    if x1 == 1 and y1 == 1:
        result = sum_table[x2-1][y2-1] 
        
    elif x1 == 1 and y1 > 1:
        result = sum_table[x2-1][y2-1] - sum_table[x2-1][y1-2]
        
    elif x1 > 1 and y1 == 1:
        result = sum_table[x2-1][y2-1] - sum_table[x1-2][y2-1]
    else:
        result = sum_table[x2-1][y2-1]- sum_table[x2-1][y1-2] - sum_table[x1-2][y2-1] + sum_table[x1-2][y1-2]
    
    print(result)