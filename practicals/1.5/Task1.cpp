/**
 * Done by:
 * Student Name: Nikita Kompanchenko
 * Student Group: 123
 * Prac 1.5
 */
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the sequence: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter the elements of the sequence: ";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int p;
    cout << "Enter the value of P: ";
    cin >> p;

    int index = -1;
    for (int i = 0; i < n; ++i) {
        if (a[i] == p) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        cout << "The first occurrence of P is at index: " << index << endl;
    }
    else {
        cout << "P is not found in the sequence." << endl;
    }

    return 0;
}