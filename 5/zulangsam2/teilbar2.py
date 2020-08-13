def teiler(n):
    x=3
    teiler_list=[3,5,7,9,11,13,15,17,19,21]
    if n % 2 == 0:
        for x in teiler_list:
            y = n/x         
            if y % 1 == 0.0 and x < 21:
                x += 1
            elif x == 21:
                return True

            else: 
                return False
                break
        else:
            return False


print(teiler(232792520))

