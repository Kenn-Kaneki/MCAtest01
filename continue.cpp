#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i%2==0)
        {
        cout<<i;
        continue;
        }
        else
        cout<<"Hello World !"<<endl;
    }
    return 0;
}