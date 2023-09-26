#include<iostream>
using namespace std;
int &change(int &x, int &y)
{
    if(x>y)
    return x;
    else
    return y;

}
int main()
{
    int a=10,b=20,c=30,d=40;
    change(a,b)= -1;
    cout<<"a = "<<a<<" and b = "<<b<<endl;
    change(c,d)=-1;
    cout<<"c = "<<c<<" and d = "<<d<<endl;
    return 0;
}