// write a c++ program to show uses of Namespace and Scope resolution operator.
#include <iostream>

using namespace std;

namespace ns1
{
    int a = 10;
    void func()
    {
        cout << "ns1::func()" << endl;
    }
}

namespace ns2
{
    int a = 20;
    void func()
    {
        cout << "ns2::func()" << endl;
    }
}

int main()
{
    // Accessing global variable from namespace ns1
    cout << "ns1::a = " << ns1::a << endl;

    // Calling function from namespace ns2
    ns2::func();

    // Using scope resolution operator to access global variable from namespace ns2
    cout << "ns2::a = " << ::ns2::a << endl;

    return 0;
}