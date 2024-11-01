#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Enter A and B: ";
    cin >> a >> b;

    int result = (a > 0 && b > 0) ? (a * b) : (a + b);
    cout << "Result: " << result << endl;

    return 0;
}