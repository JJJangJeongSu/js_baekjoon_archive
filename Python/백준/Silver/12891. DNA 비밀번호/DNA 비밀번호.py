import sys

input = sys.stdin.readline

n, m = map(int, input().split())
dna_seq = input()

a,c,g,t = map(int, input().split())

word_count_standard = {"A":a, "C":c, "G":g, "T":t}
word_count = {"A":0, "C":0, "G":0, "T":0}

count = 0

i = 0
j = m-1

def is_valid(word_count, word_count_standard):
    for k in word_count:
        if word_count[k] < word_count_standard[k]:
            return False
        
    return True


# 초기화
for i in range(m):
    word_count[dna_seq[i]] +=1
    
# print(word_count)

i=0
j=m-1

while j<n:
    # 확인 
    if is_valid(word_count, word_count_standard):
        count +=1
    # 이동 및 업데이트
    word_count[dna_seq[i]] -=1
    i+=1
    
    j+=1
    if j<n:
        word_count[dna_seq[j]] += 1
        
print(count)
    
    
    