import sys

input = sys.stdin.readline

n = int(input())

arr = [list(input().strip()) for _ in range(n)]


def check_all():
    total_max = 0
    # 행 검사
    for i in range(n):
        row_max = 0
        cur_streak = 1
        cur_color = None
        next_color = None
        for j in range(n-1):
            cur_color = arr[i][j]
            next_color = arr[i][j+1]
            if cur_color == next_color:
                cur_streak += 1
            else:
                cur_streak = 1

            if cur_streak > row_max:
                row_max = cur_streak

        if total_max < row_max:
            total_max = row_max
    # 열 검사
    for i in range(n):
        col_max = 0
        cur_streak = 1
        cur_color = None
        next_color = None
        for j in range(n-1):
            cur_color = arr[j][i]
            next_color = arr[j+1][i]
            if cur_color == next_color:
                cur_streak += 1
            else:
                cur_streak = 1

            if cur_streak > col_max:
                col_max = cur_streak

        if total_max < col_max:
            total_max = col_max
            
    return total_max

answer = 0

# 행 확인
for i in range(n):
    for j in range(n-1):
        arr[i][j], arr[i][j+1] = arr[i][j+1], arr[i][j]
        answer = max(check_all(),answer)
        arr[i][j], arr[i][j+1] = arr[i][j+1], arr[i][j]

# 열 확인
for i in range(n):
    for j in range(n-1):
        arr[j][i], arr[j+1][i] = arr[j+1][i], arr[j][i]
        answer = max(check_all(),answer)
        arr[j][i], arr[j+1][i] = arr[j+1][i], arr[j][i]
        
print(answer)
