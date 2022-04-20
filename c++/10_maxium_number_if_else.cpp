#include<iostream>

using namespace std;

int getmax(int num1,  int num2, int num3)
{
    int result;
    if(num1>=num2 && num1>=num3)
    {
        result = num1;
    }

    else if (num2>=num1 && num2>=num3)
    {
        result= num2;
    }

    else
    {
        result = num3;
    }

}

int main()
{
    cout<<getmax(2,60,1)<<endl;
    cout<<"the greatest numnber is "<< getmax(2,60,1);
    return 0;
}