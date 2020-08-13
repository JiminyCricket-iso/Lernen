from Vektor import vector


v1=vector(1,2,3)
v2=vector(1,1,1)

print("v1=(1 2 3)")
print("v1=(1 1 1)")

print("v1+v2=",v1+v2)
print("|v1|:",v1.betrag())
print("v1 X v2:",v1*v2)
print("v1*v2:",v1&v2)




def spat():             #berechnet das spatprodukt (v1 X v2)*v3 
    v1=vector(1,2,3)
    v2=vector(1,1,1)
    v3=vector(2,2,3)
    a=v1*v2
    prod=vector(a[0],a[1],a[2])&v3
    return prod

print(spat())

     
