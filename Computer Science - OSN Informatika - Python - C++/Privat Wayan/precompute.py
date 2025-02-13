
faktorial = dict()
faktorial[1] = 1
for n in range(2,10**3 + 1):
    faktorial[n] = n * faktorial[n - 1]

T = int(input())
# Jumlah Iterasi = (T + 10^3 - 1) , T = 10^7
for _ in range(T):
    N = int(input())
    print(faktorial[N])
