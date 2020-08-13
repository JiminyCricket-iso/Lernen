import prime
def main():
    num = 600851475143
    for i in range(2,int(num/2)):
        teiler = num / i 
        if teiler % 1 == 0.0:
            x=prime.prime(int(teiler))
            if x !=0:
                print(x)
            


main()