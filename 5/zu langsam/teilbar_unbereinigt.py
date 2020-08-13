def teiler(n):
    x=1
    while x <= 11:
 #       print(x)
        y = n/x         
  #      print(y)
        if y % 1 == 0.0 and x < 11:
            print(x)
            x += 1
        
           #return True
        elif x == 11:
           # print(x)
            return True

        else: 
#            print("keine")
            return False
            break

print(teiler(2510))