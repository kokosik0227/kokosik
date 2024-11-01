#include <iostream>
#include <vector>
#include <limits>

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

    int minPositive = numeric_limits<int>::max();

    for (int x : a) {
        if (x > 0 && x < minPositive) {
            minPositive = x;
        }
    }

    if (minPositive == numeric_limits<int>::max()) {
        cout << "No positive elements found in the sequence." << endl;
    }
    else {
        cout << "The smallest positive element: " << minPositive << endl;
    }

    return 0;
}