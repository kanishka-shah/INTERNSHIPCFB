#include<iostream>

using namespace std;

string getdayoftheweek (int daynum)
{
    string dayname;

    switch(daynum)
    {
        case 0 :
        dayname ="sunday";
        break;

        case 1 :
        dayname = "monday";
        break;

        case 2 :
        dayname = "tuesday";
        break;

        case 3 : 
        dayname = "wednesday";
        break;

        case 4 :
        dayname = "thursday";
        break;

        case 5 :
        dayname= "friday";
        break;

        case 6 :
        dayname = "saturday";
        break;

        default :
        dayname =" inavlid";
    }
    return  dayname;

}

int main()
{
    cout<<getdayoftheweek(10);
    return 0;
}

