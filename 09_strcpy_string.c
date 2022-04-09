#include<stdio.h>
#include<string.h>

int main()
{
    char *s="hello";
    char b[34];
    strcpy(b,s);
    printf("the string b now is %s",b);
}