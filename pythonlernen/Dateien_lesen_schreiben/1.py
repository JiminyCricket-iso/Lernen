fobj = open("C:/Users/Billy Bones/Desktop/ProjectEuler/pythonlernen/Dateien_lesen_schreiben/test.txt")
for line in fobj:
    print(line.rstrip())
fobj.close()
