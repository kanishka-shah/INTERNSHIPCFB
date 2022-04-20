#include<iostream>

using namespace std;

int main()
{
    int result;
    int num1,num2;
    char op;
    cout<<"enter the first number ";
    cin >> num1;
    cout << "enter the operator";
    cin >> op;
    cout << "enter the second number";
    cin >> num2;

    if(op=='+')
    {
        result= num1+num2;
    }

    else if (op=='-')
    {
        result = num1-num2;
    }

    else if (op=='*')
    {
        result= num1*num2;
    }

    else if (op=='/')
    {
        result = num1/num2;

    }

    else
    {
        cout<<"invalid operator"<< endl;
    }

    cout << " the result is "  <<  result;
    return 0;
}