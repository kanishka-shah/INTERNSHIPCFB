#include<stdio.h>
#include<string.h>

int main()
{
    char st1[45]="hello ";
    char *st2="world";
    strcat(st1,st2);
    printf("st1 now is %s",st1);
}