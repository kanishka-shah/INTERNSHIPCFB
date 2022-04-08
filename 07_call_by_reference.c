#include<stdio.h>
int wrong_swap(int a, int b);
int swap(int *a, int *b);

int main()
{
    int x=3, y=4;
    printf("the value of x and y before swap is %d %d\n",x , y);
    swap(&x,&y);
    printf("the value of  x and y after swap is %d %d\n",x , y);
    return 0;


}

int wrong_swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int swap(int *a , int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}