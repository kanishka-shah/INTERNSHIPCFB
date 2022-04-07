#include<stdio.h>

void PrintPatterm(int n);

int main()
{
    int n=2;
    PrintPattern(n);
    return 0;



}

void PrintPattern(int n)
{
    if(n==1)
    {
        printf("*\n");
        return;
    }
    PrintPattern(n-1);
    for( int i=0;i<(2*n-1);i++)
    {
        printf("*");


    }
    printf("\n");



}
