

#to detect spam meassages

from operator import truediv


text=input("enter your text \n")

if("make alot of money in text") :
    spam = True
elif("buy now in text") : 
    spam = True 
elif("click this in text") : 
    spam = True 
elif("subscribe in text") : 
    spam = True
else :
    spam = False

if(spam) :
    print("this is a spam message")
else :
    print("this is not a spam message")    
          