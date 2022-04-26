name=input("enter your name : \n")
print("good afternoon  "+ name)



'''string with double spaces'''
st="this is a string    with double spaces"
doublespaces=st.find("  ")
print(doublespaces)



'''to replace doublspace with singlespace'''
st="this is string conatins  single space"
st=st.replace("  "," ")
print(st)


'''formatted letter using escape sequence'''
letter="Dear john, this python course is nice!. thank you"
print(letter)

formattedletter="dear john, \n\t this python course is nice ! .\n thank you"
print(formattedletter)


