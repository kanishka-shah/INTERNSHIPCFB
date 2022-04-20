#include<iostream>

using namespace std;

int main()
{
    int guess;
    int guesscount=0;
    int secretnum = 9;
    int guesslimit =3;
    bool outofguesses = false;

    while(guess != secretnum && !outofguesses )
    {
        if(guesscount<guesslimit)
        {
            cout<<"enter the guess";
            cin>>guess;
            guesscount++;
        }   
        else
        {
            outofguesses = true;
        }
        

    }

    if(outofguesses)
    {
        cout<<"you lose"<<endl;
        cout<<"the sectert num is not equal to guess";
    }
    else 
    {
        cout<<"you win"<<endl;
        cout<<"the secret number is equal to guess ";
    }

    


} 