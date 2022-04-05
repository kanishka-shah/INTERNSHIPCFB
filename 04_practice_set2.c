#include<stdio.h>
int main()
{
    //ASCII values= 97to122//
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);

    if(ch>=97 && ch<=122)
    {
        printf("it is lowercase\n");
    }
    else{
        printf("it is not lowercase");
    }
}