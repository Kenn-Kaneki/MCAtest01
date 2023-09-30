// write a c++ program to show uses of Return by reference.
#include <iostream>

using namespace std;

// Function to swap two integers using return by reference
int &swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a; // Returning a reference to 'a'
}

int main()
{
    int num1 = 10, num2 = 20;

    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Calling the swap function and using return by reference to modify num1
    swap(num1, num2) = 30;

    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
