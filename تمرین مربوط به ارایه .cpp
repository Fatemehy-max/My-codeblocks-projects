#include <iostream>
using namespace std;

int main() {
    string name[5], s;

    // الف) گرفتن اسامی
    cout<<"Enter the names:";
    for (int i = 0; i < 5; i++) {
        cin >> name[i];
    }

    // ب) جستجو نام
   cout<<"Search the name:";
    cin >> s;
    int count = 0;
    for (int i = 0; i < 5; i++) {
        if (name[i] == s) {
            cout <<"found"<< i << endl;
            count++;
        }
    }
    cout << "number of times: " << count << endl;

    // ج) یک در میان
    cout<<"print every other one:";
    for (int i = 0; i < 5; i += 2) {
        cout << name[i] << endl;
    }

    // د) دو ردیفی
    cout<<"Two rows:";
    for (int i = 0; i < 3; i++)
        cout << name[i] << " ";
    cout << endl;
    for (int i = 3; i < 5; i++)
        cout << name[i] << " ";
    cout << endl;

    // و) از آخر به اول
    cout<<"From last to first:";
    for (int i = 4; i >= 0; i--) {
        cout << name[i] << endl;
    }

    // ه) تعداد تکرار هر اسم
   cout<<"How many times each name appears:";
    for (int i = 0; i < 5; i++) {
        int c = 1;
        for (int j = i + 1; j < 5; j++) {
            if (name[i] == name[j])
                c++;
        }
        cout << name[i] << ": " << c << endl;
    }

    // ی) حرف اول بزرگ
   cout<<"Capital letter:";
    for (int i = 0; i < 5; i++) {
        name[i][0] = toupper(name[i][0]);
        cout << name[i] << endl;
    }

    return 0;
}