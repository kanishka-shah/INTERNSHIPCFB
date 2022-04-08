#include<stdio.h>

void SumAndAvg(int a, int b, int *sum , float *avg);

int main()
{
    int i,j, sum;
    float avg;
    i=3;
    j=4;
    SumAndAvg(i,j , &sum, &avg);
    printf("the sum of i and j is %d\n",sum);
    printf("the average of i and j is %f\n",avg);
    return 0;
}

void SumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum= a+b;
    *avg=(float)(*sum)/2;
}

