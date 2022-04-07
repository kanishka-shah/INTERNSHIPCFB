#include<stdio.h>

int sum(int a , int b);


int main()
{
    int a=4, b=7;
    printf("the value of a and b is %d %d\n", a,b);
    printf("the sum of 4 +7 = %d\n",sum(a,b));
    printf("the value of a and b after function call is %d %d\n", a,b);
    return 0;
}

int sum(int a , int b)
{
    int c;
    b=3434;
    a=1234;
    c=a+b;
    return c;

    
}

