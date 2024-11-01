#include <iostream>
#include <vector>
#include <algorithm>

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

    if (n == 0) {
        cout << "The sequence is empty." << endl;
        return 1;
    }

    int minVal = a[0];
    int maxVal = a[0];
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < n; ++i) {
        if (a[i] < minVal) {
            minVal = a[i];
            minIndex = i;
        }
        if (a[i] > maxVal) {
            maxVal = a[i];
            maxIndex = i;
        }
    }

    swap(a[minIndex], a[maxIndex]);

    cout << "Sequence after swap: ";
    for (int x : a) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}