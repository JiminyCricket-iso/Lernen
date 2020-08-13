num=600851475143
f=2
while f!=num:
    while num%f==0:
        num/=f
    f+=1
print(num)