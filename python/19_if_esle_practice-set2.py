

#to find if the student is pass or fail

marks1 = (int(input("enter the marks1 : ")))
marks2 = (int(input("enter the marks2 : ")))
marks3 = (int(input("enter the marks3 : ")))


if(marks1<33 or marks2<33 or marks3<33) :
    print("you have failed because , the marks  in each subject is less then 33")
elif(marks1+marks2+marks3)/3 < 40 : 
    print("you have failed because the toatal amrks is less then 40")
else :
    print("congragualation ! you have passed in the exams")

