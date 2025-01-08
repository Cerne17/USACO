import time
def countTrees(n):
    dp = {}
    def count(n):
        if n == 1 or n == 0:
            return 1
        if n in dp:
            return dp[n]
        ans = 0
        for i in range(1, n+1):
            ans += count(i-1) * count(n-i)
        dp[n] = ans
        return ans
    return count(n)

def solve(func, *args, **kwargs):
    start = time.time()
    print(f'{func.__name__} for {*args}: {func(*args, **kwargs)} ')
    end = time.time()
    print(f'execution time: {( end - start ) * 1000} ms')

for i in range(1, 31):
    solve(countTrees, i)