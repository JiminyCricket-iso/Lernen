import teilbar

def main():
    n=11
    while teilbar.teiler(n) == False:
        n += 1
        print(n)
        #return n


print(main())
