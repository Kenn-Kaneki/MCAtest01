#include <iostream>
using namespace std;

class base
{
protected:
    int b;
};

class derived : public base
{
protected:
    int c;
};
int main()
{
    derived d;
    cout << "\n Size of int = " << sizeof(int) << "byte" << endl;
    return 0;
}