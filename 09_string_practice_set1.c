#include<stdio.h>
#include<string.h>

int main()
{
    char st1[23];
    char st2[67];
    char c;
    int i=0;
    printf("enter the string 1 ");
    scanf("%s",st1);
    printf("enter the vlaue of string 2 character by character");

    while(c!='\n')
    {
        fflush(stdin);
        scanf("%c",&c);
        st2[i]=c; 
        i++;

    }

    st2[i-1]='\0';

    printf("the value of string 1 is %s\n",st1);
    printf("the value of string 2 is %s\n",st2);

    return 0;



    

}