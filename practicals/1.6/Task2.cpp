//Specification:
//Function: XOR
//Input :
//seq1: a sequence of bits(e.g., std::vector<int>, where each element is 0 or 1)
//seq2 : a sequence of bits(of the same type and size as seq1)
//
//Output :
//    result : a sequence of bits(of the same type and size as the input sequences)
//
//    Precondition : seq1 and seq2 have the same length.
//    Postcondition : result contains the result of the bitwise XOR operation on seq1 and seq2.
//
//    Description :
//    For each i from 0 to the length of seq1 - 1 :
//    result[i] = seq1[i] XOR seq2[i](where XOR is the logical "exclusive OR" operation)
//
//    Example :
//    seq1 : 10110
//    seq2 : 01101
//    result : 11011

#include <iostream>
#include <vector>

using namespace std;

vector<int> xor_sequences(const vector<int>& seq1, const vector<int>& seq2) {
    if (seq1.size() != seq2.size()) {
        throw runtime_error("Sequences must have the same length.");
    }

    vector<int> result(seq1.size());
    for (size_t i = 0; i < seq1.size(); ++i) {
        result[i] = seq1[i] ^ seq2[i]; // ^ - оператор XOR в C++
    }
    return result;
}


int main() {
    vector<int> seq1 = { 1, 0, 1, 1, 0 };
    vector<int> seq2 = { 0, 1, 1, 0, 1 };

    try {
        vector<int> result = xor_sequences(seq1, seq2);

        cout << "Result: ";
        for (int bit : result) {
            cout << bit;
        }
        cout << endl;


    }
    catch (const runtime_error& error) {
        cerr << "Error: " << error.what() << endl;
    }



    return 0;
}