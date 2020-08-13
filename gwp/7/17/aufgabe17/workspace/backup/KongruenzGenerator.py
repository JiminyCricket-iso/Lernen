class Kongruenz():
    def __init__(self, a, x, c, m):
        self.a=a
        self.x=x
        self.c=c
        self.m=m

    def generator(self):
        x_neu=(self.a*self.x+self.c)%self.m
        return x_neu

'''
if __name__=="__main__":
    x=Kongruenz(4, 1, 0, 200)
    print(x.generator())

'''