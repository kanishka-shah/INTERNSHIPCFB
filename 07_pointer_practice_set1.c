#include<stdio.h>

int main()
{
    int a=6;
    int *ptr;
    ptr=&a;
    printf("the address of variable a is %u\n",ptr);
    printf("the value of variable a is %d\n",*ptr);
    printf("the value of variable a is %d\n",a);
    return 0;
}
