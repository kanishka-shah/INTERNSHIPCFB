#include<stdio.h>

int main()
{
    int rating;
    printf("enter your rtaing(1-5)");
    scanf("%d",&rating);

    switch(rating)
    {
        case 1:
        printf("the rating is 1");
        break;

        case 2:
        printf("the rating is 2");
        break;

        case 3:
        printf("the rating is 3");
        break;

        case 4:
        printf("the rating is 4");
        break;

        case 5:
        printf("the rating is 5");
        break;

        default : 
        printf("it is a invalid rating");
        break;
    }
    

}
