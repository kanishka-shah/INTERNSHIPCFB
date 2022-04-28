

#to find the greatest of four numbers

num1 = (int(input("enter the num1 : ")))
num2 = (int(input("enter the num2 : ")))
num3 = (int(input("enter the num3 : ")))
num4 = (int(input("enter the num4 : ")))

if(num1>num4) :
    f1=num1
else :
    f1=num4

if(num2>num3) : 
    f2=num2
else :
    f2=num3


if(f1>f2) :
    print(str(f1) +  "   is greatest")
else :
    print(str(f2) + "  is greatest")


               
