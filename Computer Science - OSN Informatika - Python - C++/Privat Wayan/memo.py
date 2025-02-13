# 1) Nama fungsinya
# 2) Base case
# 3) Rekurens
# faktorial basecase 1! = 1, 0! = 1
memo = dict()
# memo[n] = faktorial[n]
def faktorial(n):
    if(n == 1):return 1
    if(memo.get(n) != None):
        return memo[n]
    else:
        memo[n] = n * faktorial(n - 1)
        return memo[n]

T = int(input())
for _ in range(T):
    N = int(input())
    print(faktorial(N))

