def teiler(n):
 #   x=3
    teiler_list=[11,12,13,14,15,16,17,18,19,20,21]

    for x in teiler_list:
        y = n/x         
        if y % 1 == 0.0 and x < 21:
            x += 1
        elif x == 21:
            return True

        else: 
            return False
            break



#print(teiler(232792520))

