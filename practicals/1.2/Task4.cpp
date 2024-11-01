#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Enter A: ";
    cin >> a;

    if (a > 0) {
        a++;
    }
    else if (a < 0) {
        a -= 2;
    }
    else {
        a = 10;
    }
    cout << "Result: " << a << endl;

    return 0;
}