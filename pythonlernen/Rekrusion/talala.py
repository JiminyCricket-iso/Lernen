def sum_n(n):
    if n== 0:
        return 0
    else:
        return n + sum_n(n-1)

x=0
while x <= 10:
    print(str(x),"tes pascal:", sum_n(x))
    x += 1