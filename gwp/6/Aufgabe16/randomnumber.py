#generate  text file with random numbers
from random import seed
from random import randint

def random_list():
    liste = []
    for i in range(1000):
        value = randint(0,1000)
        print("i=", i, "random:", value)
        liste.append(value)
    return liste

print(random_list())

def write_to_txt():
    a = random_list()
    with open("random.txt", "w") as f:
        for item in a:
            f.write("%s\n" % item)

write_to_txt()