#include<iostream>
using namespace std;

int main()
{

    int a, b, choice;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    cout << "Enter 1 for even numbers, 2 for odd numbers: ";
    cin >> choice;

    cout << "Numbers between the two numbers: ";
    for (int i = a; i <= b; i++)
        if ((choice == 1 && i % 2 == 0) || (choice == 2 && i % 2 != 0))
            cout << i << " ";

    return 0;
}
