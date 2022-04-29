

# to remove and strip a word from the string

def remove_and_split(string,word) :
    newstr = string.replace (word , "") 
    return newstr.strip()

this = "      harry is a good coder        "
n= remove_and_split(this,"harry")
print(n)
