//C++ Program to Print ASCII Value.
#include<iostream>
using namespace std;
int main()
{
    char character;
    cout<<"Enter a character to get its ASCII Value = "<<endl;
    cin>>character;
    cout<<int(character)<<" is the ASCII Value of "<<character;
    return 0;
}