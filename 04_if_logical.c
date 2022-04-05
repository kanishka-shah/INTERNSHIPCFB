#include<stdio.h>

int main()
{
    int age;
    int vippass=1;
    printf("enter the your age\n");
    scanf("%d",&age);

    if((age<70 && age>18)||(vippass=1))
    {
        printf("you are above 18 and below 70 and hence ypu can drive");
    }
    else
    {
        printf("you cannot drive");
    }
    
}