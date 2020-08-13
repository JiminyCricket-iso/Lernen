class Kongruenz():
    def __init__(self, a, x, c, m):
        self.a=a
        self.x=x
        self.c=c
        self.m=m

    def generator(self):
        return (self.a*self.x+self.c)%self.m


'''
if __name__=="__main__":
    x=Kongruenz(4, 1, 0, 200)
    print(x.generator())

'''