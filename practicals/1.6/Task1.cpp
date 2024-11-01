/**
 * Done by:
 * Student Name: Nikita Kompanchenko
 * Student Group: 123
 * Prac 1.6
 */
#include <iostream>
#include <algorithm> // for  count

using namespace std;

int main() {
    int a;
    cout << "Enter an integer A: ";
    cin >> a;

    string binaryString;
    for (int i = 31; i >= 0; --i) { // Search all 32 bits (for int)
        binaryString += ((a >> i) & 1) ? '1' : '0';
    }


    int count0 = count(binaryString.begin(), binaryString.end(), '0');
    int count1 = 32 - count0;


    cout << "Binary representation: " << binaryString << endl;
    cout << "Number of 0s: " << count0 << endl;
    cout << "Number of 1s: " << count1 << endl;


    if (count0 > count1) {
        cout << "More 0s than 1s." << endl;
    }
    else if (count1 > count0) {
        cout << "More 1s than 0s." << endl;
    }
    else {
        cout << "Equal number of 0s and 1s." << endl;
    }

    return 0;
}