n = int(input())
score_list = list(map(int, input().split()))

max_score = max(score_list)

average = sum(score_list)/(max_score*n)*100

print(average)
