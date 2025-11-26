import sys
import math

input = sys.stdin.readline

N, M, K = map(int, input().split())

if K != 0:
    i = (K-1)//M
    j = (K-1)%M

    print(math.comb(i+j,i) * math.comb(M+N-i-j-2, N-i-1))

else:
    print(math.comb(M+N-2, M-1))