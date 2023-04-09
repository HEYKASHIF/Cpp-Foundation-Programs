//Write C++ program to find string length.
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char string[50];
    cout<<"please, Enter any string = ";
    cin.getline(string,50);
    cout<<"size of the string is "<<strlen(string);
    return 0;
    
}