#include<stdio.h>
#include<string.h>

int main()
{
    char st1[10]= "hello";
    char *st2 = "hey";
    int val=strcmp(st1,st2);
    printf("now st1 is %d",val);
}