#include<iostream>

using namespace std;

int main()
{
    int ismale=false;
    int istall=false;

    if(ismale && istall)
    {
        cout<<"you are a male";
    }

    else if(ismale && !istall)
    {
        cout<< " your are a short male";
    }
    
    else if(!ismale && istall)
    {
        cout<<"you are not a tall male ";
    }
    
    else
    {
        cout<<"you are not tall and not male";
    }

    return 0;

   
}