#include<iostream>
using namespace std;
int add(int a, int b)
{
    return a+b;
}
int sub(int x, int y)
{
    return x-y;
}
int main()
{
    char ch;
    int i,j;
    cout<<"Enter the first number :";
    cin>>i;
    cout<<"Enter the second number :";
    cin>>j;
    cout<<"Enter your choice (+ for addition - for substraction) :";
    cin>>ch;
    if(ch== '+')
    cout<<" The sum of "<<i <<" and "<<j <<" is :"<<add(i,j);
    else if (ch == '-')
    {
    cout<<" The subtraction of "<<i <<" and "<<j <<" is :"<<sub(i,j);
    }
    else
    cout<<"Invalid Input...."<<endl;
    
}