#include <iostream>

using namespace std;

int main() {
    double b1, q;
    int n;

    cout << "Enter b1 (first term): ";
    cin >> b1;
    cout << "Enter q (common ratio): ";
    cin >> q;
    cout << "Enter n (number of terms): ";
    cin >> n;


    if (q == 1) {
        cout << "Average: " << b1 << endl; // If q = 1, all terms are equal to b1
    }
    else {
        double sum = b1 * (1 - pow(q, n)) / (1 - q); // Formula for the sum of a geometric progression
        double average = sum / n;
        cout << "Average: " << average << endl;
    }

    return 0;
}