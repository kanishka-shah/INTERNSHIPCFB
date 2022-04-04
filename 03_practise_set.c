#include <stdio.h>

int main()
{
    //int a;//
    //b = a;//
    //printf("the value of b is %d\n", b);//

    int v = 3 ^ 3;
    printf("the value of v is %d\n", v);

    float d = 3.0 / 8 - 2;
    printf("%f\n", d);

    char dt = '2';

    //to determine whether a number is divisible by 97 or not//
    int num;
    printf("enter the number");
    scanf("%d",&num);
    printf("divisibility test returns %d", num%97);


    return 0;
}
