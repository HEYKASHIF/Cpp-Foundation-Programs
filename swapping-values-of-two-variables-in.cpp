#include<iostream>
using namespace std;
int main()
{
    int a = 20, b = 2;
    int temp ;
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout<<"after swapping the numbers.........."<<endl;
    cout<<"a = "<<a<<endl<<"b = "<<b;
    return 0;
}