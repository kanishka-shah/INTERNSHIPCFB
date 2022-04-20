#include<iostream>

using namespace std;

class book
{
    public:
    string title;
    string author;
    int pages;

  

};

int main()
{
    book book1 ;
    
    book1.title="harry potter";
    book1.author="j.k rowling";
    book1.pages=100;

    cout<<book1.title<<endl;
    cout<<book1.author<<endl;

    book book2 ;

    book2.title="secrets of carribean";
    book2.author="j.k rowling";
    book2.pages=200;

     cout<<book2.title<<endl;
    cout<<book2.pages<<endl;





}
