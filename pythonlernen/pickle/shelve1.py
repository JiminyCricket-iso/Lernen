import shelve

s=shelve.open("myShelve")
s["street"]="fleetstreet"
s["stadt"]="Berlin"
for i in s:
    print(i)

print(dict(s))
s.close()



