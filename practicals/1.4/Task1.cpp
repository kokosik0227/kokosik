/**
 * Done by:
 * Student Name: Nikita Kompanchenko
 * Student Group: 123
 * Prac 1.4
 */
#include <iostream>

using namespace std;

long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    if (n < 0) {
        cout << "N must be non-negative." << endl;
        return 1; // Error code
    }

    cout << "Fibonacci number " << n << " is: " << fibonacci(n) << endl;

    return 0;
}