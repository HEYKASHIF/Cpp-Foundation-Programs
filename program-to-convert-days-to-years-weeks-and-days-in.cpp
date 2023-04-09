//C++ Program to convert days to years, weeks and days.
#include<iostream>
using namespace std;
int main()
{
    int days,YEARS,WEEKS,DAYS;
    cout<<"please, enter the no. of days = "<<endl;
    cin>>days;
    YEARS=days/365;
    days=days-YEARS*365;
    WEEKS=days/7;
    days=days-WEEKS*7;
    DAYS=days;
    cout<<"YEARS : "<<YEARS<<endl;
    cout<<"WEEKS : "<<WEEKS<<endl;
    cout<<"DAYS  : "<<DAYS<<endl;
    return 0;
}