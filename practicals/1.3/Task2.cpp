#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Enter A, B, and C: ";
    cin >> a >> b >> c;

    if (a < b + c && b < a + c && c < a + b) {
        cout << "These numbers can be the lengths of a triangle's sides." << endl;
    }
    else {
        cout << "These numbers cannot be the lengths of a triangle's sides." << endl;
    }

    return 0;
}