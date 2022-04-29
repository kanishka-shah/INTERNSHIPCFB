

# to find the multiplication table of a number entered from the user


num=(int(input("enter the number")))

for i in range (1,11) : 
    print(str(num)  +  " X " +  str(i)  + " = " + str(i*num))



#another method using f string

num=(int(input("enter the number")))

for i in range (1,11) : 

    print (f"{num} X {i} = {num*i}")


  