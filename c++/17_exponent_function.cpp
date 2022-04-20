#include<iostream>

using namespace std;

int pow( int basenum, int pownum)
{
   
    int result=1;
    int i;

    for(i=0; i<pownum ; i++)
    {
        result = result*basenum;
    }

    return result;


}

int main()
{
    cout << pow(2,3);
    return 0;
}