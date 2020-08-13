"""
fobj=open("gelberschnee.txt", "r")
for x in fobj:
    print(x.rstrip())
fobj.close()
"""
fobj_in=open("gelberschnee.txt")
fobj_out=open("gelberschnee2.txt", "w")
i=1
for x in fobj_in:
    print(x.rstrip())
    fobj_out.write(str(i) + ":" + x)
    i=i+1
fobj_in.close()
fobj_out.close()

with open("example.txt", "w") as fh:
    fh.write("schreiben oder nicht schreiben \nthat das ist hier die frage \n")

