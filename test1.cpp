#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the Number >70 :";
    cin>>n;
    if(n>70)
    {
    cout<<"The even number between 10 and"<< n <<"are :";
    {
        for(i=10;i<=n;i+=2)
        cout<<i<<",";
    }
    cout<<"\b.";
    }
    else
    cout<<n <<"is not greater than 70.";
    return 0;
}