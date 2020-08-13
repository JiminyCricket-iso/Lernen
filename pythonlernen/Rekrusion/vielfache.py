"""
def viel(n):                #Aufgabe falsch verstanden das ist die rekrusion 
    if n == 1:              #für 3^n
        return 3
    else:
        return 3*viel(n-1)

print(viel(10))
"""

def mult3(n):
    if n == 1:
        return 3
    else:
        return mult3(n-1) + 3

for i in range(1,10):
    print(mult3(i))