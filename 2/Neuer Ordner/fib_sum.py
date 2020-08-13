import fibonacci
def fibsum():
    n =0
    x = 0
    summe = 0
    while x <= 4000000:
        x = fibonacci.fibm(n)
        if x % 2 == 0:
            summe += x
            n += 1
        else:
            n += 1
    return summe

print(fibsum())

