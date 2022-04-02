#include<stdio.h>

int main()
{
    int length,breadth;
    int area;
    
    printf("enter the length \n");
    scanf("%d",&length);

    printf("enter the breadth \n");
    scanf("%d",&breadth);

    printf("the area of the rectangle is %d\n",area=length*breadth);
    return 0;
}