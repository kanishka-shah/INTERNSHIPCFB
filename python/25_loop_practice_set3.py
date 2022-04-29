

#to find if the number is prime or not

num=(int(input("enter the num")))
prime = True 

for i in range (2,num) :
    if (num%i ==0) : 
        prime= False
        break 

if prime : 
    print("this is  a prime number ")
else :
    print("this is not a prime number ")




     
