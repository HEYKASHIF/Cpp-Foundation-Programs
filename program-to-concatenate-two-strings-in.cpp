//Write C++ program to concatenate two strings.
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char string1[100], string2[50];
    cout<<"please, Enter 1st String = "<<endl;
    cin.getline(string1,50);
    cout<<"please, Enter 2nd String = "<<endl;
    cin.getline(string2,50);
    strcat(string1, string2);
    cout<<"Concated String = "<<string1;
    return 0;
}