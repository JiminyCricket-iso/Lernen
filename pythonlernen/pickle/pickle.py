import pickle

cities = ["bern", "Basel", "st Gallen", "zürich"]
fh = open("data.pkl", "bw")
pickle.dump(cities, fh)
fh.close

f = open("data.pkl", "rb")
staedte = pickle.load(f)
print(staedte)