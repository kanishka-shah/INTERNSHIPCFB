#include<stdio.h>

int main()
{
    int n=17,prime=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            prime=0;
            break;

        }

    }
    if(prime==0 && n!=2)
    {
        printf("it is not a prime number");
    }
    else
    {
        printf("it is a prime number");
    }
    return 0;
}