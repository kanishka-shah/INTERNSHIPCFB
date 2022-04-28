mydict = {
    "fast": "in a quick manner",
    "harry": "good coder",
    "marks": [23,45,1,67],
    "anotherdict":{'harry':'player'}
     

}


#print the keys of the dictionary
print(list(mydict.keys()))

#print the value of the the dictionary
print(list(mydict.values()))


#update the dictionary
print(mydict)
updatedict={ 
    "frirndly": "friend"
}
mydict.update(updatedict)
print(mydict)


#to get the value of the key
print(mydict.get("harry"))

