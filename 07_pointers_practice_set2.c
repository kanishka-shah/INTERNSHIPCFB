#include<stdio.h>

void PrintAdd(int a);

int main()
{
    int i=5;
    printf("the value of varialbe i is %d\n",i);
    PrintAdd(i);
    printf("the address of variable i is %u\n",&i);
    return 0;
}

void PrintAdd(int a )
{
    printf("the address of varialbe a is %u\n",&a);
}