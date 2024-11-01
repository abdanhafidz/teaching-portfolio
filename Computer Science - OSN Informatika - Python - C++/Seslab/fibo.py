Otak = dict()
# otak[n] = f(n)
def f(n):
    if(Otak.get(n) != None): # Base case
        return Otak[n]
    else:
        if(n == 1 or n == 2):
            return 1
        else:
            Otak[n] = f(n - 1) + f(n - 2) # Rekurens + Memoization
            return Otak[n]

print(f(100))
print(Otak)