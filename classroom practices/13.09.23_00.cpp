#include <iostream>
using namespace std;
int a;
int input()
{
    cout << "enter a number:" << endl;
    cin >> a;
    return 0;
}
int result()
{
    if (a % 2 == 0)
    {
        cout << "The no is even";
    }
    else
    {
        cout << "no is odd";
    }
    return 0;
}
int main()
{
    input();
    result();
    return 0;
}