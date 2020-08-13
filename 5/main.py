import teilbar2

def main():
    x = 2520 
    while teilbar2.teiler(x) != True:
        x += 2520
        print(x)

main()