#include<stdio.h>

int main()
{
    int a,b; 
    printf("enter the value of a ");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("a is a even number\n");
    }
    else
    {
        printf("a is a odd number\n");
    }
    return 0;
}