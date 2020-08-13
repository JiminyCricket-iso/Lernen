import pickle 
fh = open("data.pkl", "bw")
sprachen= ["python", "Perl", "C++", "Java", "lisp"]
dialekte=["jython", "ironpython", "cpython"]
objekt_pickeln=(sprachen,dialekte)
pickle.dump(objekt_pickeln, fh)
fh.close()

f=open("data.pkl", "rb")
(a,b)=pickle.load(f)
print(a,b)