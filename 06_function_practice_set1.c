#include<stdio.h>
#include<math.h>

float average(int a , int b , int c);

int main()
{
    int a,b,c;
    int result;
    printf("the value of a\n" );
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    printf("enter the value of c\n");
    scanf("%d",&c);
     
    printf("the average of three numbers is %f",average(a,b,c));
    
}

float average(int a , int b , int c)
{
    float result;
    result=(float)(a+b+c)/3;
    return result;
}