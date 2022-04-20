#include<iostream>

using namespace std;

int main()
{
    int age= 22;
    int *page = &age;
    double gpa= 9.8;
    double *pgpa = &gpa;
    string name ="john";
    string *pname=&name;

    cout<<*&age ;

}
  