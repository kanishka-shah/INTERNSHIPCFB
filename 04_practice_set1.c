#include<stdio.h>

int main()
{
    int physics,chemistry,maths;
    float total;

    printf("enter the physics marks");
    scanf("%d",&physics);

    printf("enter the chemistry marks");
    scanf("%d",&chemistry);

    printf("enter the maths marks");
    scanf("%d",&maths);
    total=(physics + chemistry + maths)/3;

    if((total<40) || physics<33 || chemistry<33 || maths<33)
    {
        printf("the total marks is %f and you failed in the exam",total);

    }
    else{
        printf("the total marks is %f and you passed in the exam",total);
    }


 
}