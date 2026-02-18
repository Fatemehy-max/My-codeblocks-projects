#include <iostream>
using namespace std;

int main() {
    int n, c;
    cout << "Enter the number of grades: ";
    cin >> n;

    float a[n];

    for(int i = 0; i < n; i++) {
        cout << "Enter grade " << i+1 << ": ";
        cin >> a[i];
    }

    do {
        cout << "\n1- Show grades\n";
        cout << "2- Average\n";
        cout << "3- Max grade\n";
        cout << "4- Sort\n";
        cout << "5- Frequency\n";
        cout << "0- Exit\n";
        cout<<"choose:";
        cin>> c;

        switch(c) {

        case 1:
            cout << "Grades:\n";
            for(int i = 0; i < n; i++)
                cout << a[i] << endl;
            break;

        case 2: {
            float sum = 0;
            for(int i = 0; i < n; i++)
                sum += a[i];
            cout << "Average: " << sum / n << endl;
            break;
        }

        case 3: {
            float max = a[0];
            for(int i = 1; i < n; i++)
                if(a[i] > max)
                    max = a[i];
            cout << "Max grade: " << max << endl;
            break;
        }

        case 4:
            for(int i = 0; i < n; i++)
                for(int j = i + 1; j < n; j++)
                    if(a[i] > a[j]) {
                        float t = a[i];
                        a[i] = a[j];
                        a[j] = t;
                    }
            cout << "Sorted grades:\n";
            for(int i = 0; i < n; i++)
                cout << a[i] << endl;
            break;

        case 5:
            cout << "Frequency:\n";
            for(int i = 0; i < n; i++) {
                int cnt = 0;
                for(int j = 0; j < n; j++)
                    if(a[i] == a[j])
                        cnt++;
                cout << a[i] << " : " << cnt << endl;
            }
            break;
        }

    } while(c != 0);

    return 0;
}