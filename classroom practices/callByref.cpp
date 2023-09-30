#include<iostream>
using namespace std;
int sum( int &num1)
{
    num1=num1+9;
    cout<<"salaary after :"<<num1<<endl;
}
int main()
    {
        int a=50;
        cout<<sum(a);
        cout<<"before: "<<a<<endl;
        return 0;
    }