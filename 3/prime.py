def prime(x):                   #x ist die zahl die untersucht werden soll, ob sie eine Priemzahl ist
    for i in range(2, x):
        if (x % i) == 0:
            return 0
            break
    else:
        return x


            
#gibt die zahl x zurück wenn es eine Priemzahl ist und gibt
# 0 zurück, wenn es keine priemzahl ist.            

            