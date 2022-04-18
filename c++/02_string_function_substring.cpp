#include<iostream>

using namespace std;

int main()
{
    string word="how are you doing";
    string wordsub;
    wordsub=word.substr(4, 5);
    cout<< wordsub;

    return 0;
}