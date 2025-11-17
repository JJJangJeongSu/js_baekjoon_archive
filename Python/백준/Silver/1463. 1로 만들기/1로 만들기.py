dp = {0:0, 1:0}

def solve(x:int) -> int:
    if x in dp:
        return dp[x]
    
    dp[x] = min(solve(x//3)+x%3, solve(x//2) + x%2) + 1
    
    return dp[x]

print(solve(int(input())))