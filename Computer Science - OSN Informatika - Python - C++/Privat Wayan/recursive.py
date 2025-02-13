# 1) Nama fungsinya
# 2) Base case
# 3) Rekurens
# faktorial basecase 1! = 1, 0! = 1
def faktorial(n):
    if(n == 1):
        return 1
    else:
        return n * faktorial(n - 1)

T = int(input())
for _ in range(T):
    N = int(input())
    print(faktorial(N))

