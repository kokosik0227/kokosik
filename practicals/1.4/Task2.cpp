#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    int sum = 0;
    int count = 0;

    for (int i = 1; i <= n; i += 2) {  // Search only for odd numbers
        sum += i;
        count++;
    }

    if (count == 0) {
        cout << "No odd numbers in the range." << endl;
    }
    else {
        double average = static_cast<double>(sum) / count; // Converting to double for correct calculation of the average
        cout << "Average of odd numbers: " << average << endl;
    }

    return 0;
}