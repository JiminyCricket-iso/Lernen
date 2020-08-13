import shelve

tele = shelve.open("myPhoneBook")

tele["Mike"]={"first":"Mike", "second":"Penis", "Phone":"666666"}
tele["sophie"]={"first":"sophie", "second":"schmidt", "Phone":"0190666"}
tele["freddi"]={"first":"freddi", "second":"trallala", "Phone":"fick dich"}

print(tele["sophie"]["Phone"])
