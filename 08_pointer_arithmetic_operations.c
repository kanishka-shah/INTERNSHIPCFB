#include<stdio.h>

int main()
{
    int i=90;
     int *ptr=&i;
    printf("the address of i is %u\n",ptr);
    ptr++;
    printf("the address of i is %u\n",ptr);
}