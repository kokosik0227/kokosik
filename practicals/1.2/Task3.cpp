#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b;
    cout << "Enter A and B: ";
    cin >> a >> b;

    if (a == b) {
        cout << "A and B are equal. No maximum." << endl;
    }
    else {
        int result = max(a, b);
        cout << "Result: " << result << endl;
    }

    return 0;
}