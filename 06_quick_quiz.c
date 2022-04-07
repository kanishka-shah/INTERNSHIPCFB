#include<stdio.h>

void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main()
{
    int a;
    printf("this is the order of wishes\n");
    GoodMorning();
    GoodAfternoon();
    GoodNight();
    printf("the functions are printed in order defined\n");
}

void GoodMorning()
{
    printf("good morning sir/madam\n");
}
void GoodAfternoon()
{
    printf("good afternoon sir/madam\n");
}
void GoodNight()
{
    printf("good night sir/madam\n");
}



