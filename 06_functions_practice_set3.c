#include<stdio.h>

int fib(int n);

int main()
{
    int a,i;
    printf("enter the value of a ");
    scanf("%d",&a);
    printf("the fibonacci series is :");
    for(i=0;i<a;i++)
    {
        printf("%d ",fib(i));
    }
       return 0;

  
}

int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else{
        return (fib(n-1)+fib(n-2));
    }
}