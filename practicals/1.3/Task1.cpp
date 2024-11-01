/**
 * Done by:
 * Student Name: Nikita Kompanchenko
 * Student Group: 123
 * Prac 1.3
 */
#include <iostream>

using namespace std;

int main() {
    double a, b;
    cout << "Enter A and B: ";
    cin >> a >> b;

    double product = a * b;

    if (product < 0) {
        product *= 2;
    }
    else {
        product *= 1.5;
    }

    cout << "Result: " << product << endl;

    return 0;
}