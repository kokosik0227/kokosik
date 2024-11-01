/**
 * Done by:
 * Student Name: Nikita Kompanchenko
 * Student Group: 123
 * Prac 1.2
 */
#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Enter A: ";
    cin >> a;

    if (a % 2 == 0) {
        a++;
    }
    else {
        a--;
    }
    cout << "Result: " << a << endl;

    return 0;
}