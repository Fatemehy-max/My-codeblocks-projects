#include <iostream>
using namespace std;

int main() {
    int d;
    cout<<"Enter the days of persons life:";
    cin >> d;

    cout << "year: " << d / 365 << endl;
    d = d % 365;

    cout << "month:" << d / 30 << endl;
    cout << "day: " << d % 30 << endl;

    return 0;
}
