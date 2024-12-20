//_
//+ or -
//A-K

#include <iostream>
#include <string>

using namespace std;

//Checks if the character is an underscore '_'
bool isUnderscore(char c) {
    return c == '_';
}

//Checks if the character is a plus '+' or minus '-'
bool isPlusOrMinus(char c) {
    return c == '+' || c == '-';
}

//Checks if the character is a letter in the range 'A' - 'K'
bool isLetterInRange(char c) {
    return c >= 'A' && c <= 'K';
}

//The main function for checking whether the chain is valid according to the rules of option 14
bool isValidChain(const string& chain) {
    //Checking if the chain is not empty and starts with an underscore '_'
    if (chain.empty() || !isUnderscore(chain[0])) {
        return false;
    }

    //Check for the second character '+' or '-'
    if (chain.length() < 2 || !isPlusOrMinus(chain[1])) {
        return false;
    }

    //Check for a sequence of letters from 'A' to 'K'
    for (int i = 2; i < chain.length(); ++i) {
        if (!isLetterInRange(chain[i])) {
            return false;
        }
    }
    //If all checks are passed, the chain is valid
    return true;
}

int main() {
    string chain;
    cout << "Enter the chain to check: ";
    cin >> chain;

    if (isValidChain(chain)) {
        cout << "The chain matches the format" << endl;
    }
    else {
        cout << "The chain does not match the format!" << endl;
    }

    return 0;
}