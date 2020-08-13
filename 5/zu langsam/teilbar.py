def teiler(n):
    x=1
    while x <= 21:
        y = n/x         
        if y % 1 == 0.0 and x < 21:
            x += 1
        elif x == 21:
            return True

        else: 
            return False
            break

#print(teiler(2))


