def sum_of_squares():
    n=0
    sum = 0
    while n < 100:
        n += 1
        sum += n**2
    return sum

print(sum_of_squares())

def square_of_sum():
    n=0
    sum=0
    while n < 100:
        n += 1
        sum += n
    return sum**2

print(square_of_sum())

def main():
    x = square_of_sum() - sum_of_squares()
    return x

print(main())
