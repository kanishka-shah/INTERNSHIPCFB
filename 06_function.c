#include<stdio.h>

void display();

int main()
{
    int a;
    printf("initializing display function\n");
    display();
    printf("display function has finished its work\n");
}

void display()
{
    printf("this is the display function\n");
}