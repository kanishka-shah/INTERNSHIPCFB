#include<stdio.h>
#include<math.h>
int main()
{
    int a=2;
    int b=4;
    int z;
    z=a*b; // legal
    //b*a=z // illegal
    printf("the value of a + b is %d\n",a + b);
    printf("the value of a - b is %d\n",a - b);
    printf("the value of a * b is %d\n",a * b);
    printf("the value of a / b is %d\n", a / b);
    printf("the value of z is %d\n",z);
   

    printf("5 when divided by 2 the remainder is %d\n",5%2);

    // no oprerator is assumed to be present//
    //printf("the value of a *b is %d\n",(a)(b));//
    printf("the value of a*b is %d\n", (a)*(b));


    //printf("the value of 4 to the power 5 is %d\n",4^5);---> will not give 4 to the power 5// 
    printf("the value of 2 to the power 5 is %f\n",pow(2 , 5));

    //type conversion//
    printf(" the value of 6 + 5 is %d\n",6 + 5);
    printf("the value of 6 + 5.1 is %f\n", 6 + 5.1);
    printf("the value of 6.1 + 5.1 is %f\n",6.1 + 5.1);
    printf("the value of 5/2 is %d\n",5/2);
    printf("the value of 3.0/9 is %f\n",3.0/9);
       return 0;
}