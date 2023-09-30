#include<iostream>
using namespace std;
int main()
{
    int a= 5, b= 10;
    cout<<"Before swapping a ="<<a<<" and b ="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping a ="<<a<<" and b ="<<b<<endl;
    return 0;
}