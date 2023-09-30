#include <iostream>
using namespace std;

int input()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int a = input();
    if (isPrime(a))
    {
        cout << a << " is a prime number." << endl;
    }
    else
    {
        cout << a << " is not a prime number." << endl;
    }

    return 0;
}
