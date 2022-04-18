#include<iostream>

using namespace std;

void SayHi( string name , int age);


int main()
{
    SayHi("john" , 67);
    SayHi("tom",78);
    SayHi("Riya",23);
    return 0;
}

void SayHi( string name , int age)
{
    cout << "hello " << name << endl;
    cout <<"  you are  "  <<  age  << " years old " << endl;
}

