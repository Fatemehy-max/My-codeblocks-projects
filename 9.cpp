#include<iostream>
using namespace std;

int main()
{
    int n, maxNum = -1000000, sum = 0;

    cout << "Enter numbers (0 to stop): " << endl;
    while (true) {
        cin >> n;
        if (n == 0) break;
        sum += n;
        if (n > maxNum) maxNum = n;
    }

    cout << "Largest number: " << maxNum << endl;
    cout << "Sum: " << sum << endl;

    return 0;
}