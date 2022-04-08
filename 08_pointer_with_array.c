#include<stdio.h>

int main()
{
    int marks[3];
    int *ptr;
    ptr=marks;

    for( int i=0;i<3;i++)
    {
        printf("enetr the marks of the students %d : ",i+1);
        scanf("%d",ptr);
        ptr++;

    }

    for(int i=0;i<3;i++)
    {
        printf("the marks you enetered for students %d are %d \n",i+1 , marks[i]);
    }

    return 0;






}