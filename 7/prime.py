def is_prime(n):
    for x in range(2,(n//2)+1):
        if (n%x) == 0:      #n ist keine Primzahl
            return False 
            break
        else:                  #n ist eine Primzahl
            continue




def main(): #berechnung der n'ten Primzahl
    x = 1   #laufvariable
    y = 0   #primzahl counter
    while y <= 10001:
        if is_prime(x) == False:
            x += 1
        if is_prime(x) == None:
            print("Die",y,"primzahl lautet:",x)
            x += 1 
            y += 1

main()
