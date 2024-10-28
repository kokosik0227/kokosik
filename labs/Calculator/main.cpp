#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <stdexcept>//���������� �������

using namespace std;

// ������� ��� ���������� ��������� ���������
int getPrecedence(char op) {
    if (op == '+' || op == '-') return 1;//1 
    if (op == '*' || op == '/') return 2;// 2 ��������
    return 0;// ��� ����� ������� 0
}

// ������� ��� ��������� ��������
double calculate(double a, double b, char op) {
    // ���� ��������
    if (op == '+') { return a + b; }
    else if (op == '-') { return a - b; }
    else if (op == '*') { return a * b; }
    else if (op == '/') {
        if (b == 0) throw runtime_error("Division by zero");
        else {
            return a / b;
        }
    }
    else {
        throw runtime_error("Invalid operator");// ���� ������������ ��������
    }
}

// ������� ��� ����������� ���������� ������ � �����������
string infixToPostfix(string infix) {
    string postfix;
    vector<char> ops;

    for (char c : infix) {// ������ ��� ������� �������� �����
        if (isdigit(c)) {// ���� � ����� ������ �� ��������
            postfix += c;
        }
        else if (c == ' ') {
            continue; // �������� ������
        }
        else if (c == '(') {
            ops.push_back(c);// ������ � ���� ���� ���� �����
        }
        else if (c == ')') {
            while (!ops.empty() && ops.back() != '(') {
                postfix += ops.back();
                ops.pop_back();// �������� ��������� � �����
            }
            if (!ops.empty()) ops.pop_back(); // ��������� '('
        }
        else if (string("+-*/").find(c) != string::npos) {
            while (!ops.empty() && getPrecedence(ops.back()) >= getPrecedence(c)) {
                postfix += ops.back();
                ops.pop_back();// ���� � �������� ����� �� ����� � ������ �� ��������� ���� �������� � ����� ������ �� �� ������ �����
            }
            ops.push_back(c);
        }
    }

    while (!ops.empty()) {// ������� �� ��������� �� �������� � ����� � ����� �� ���������
        postfix += ops.back();
        ops.pop_back();
    }

    return postfix;// ������� ��������� ����������� �����
}

// ������� ��� ���������� ������������ ������
double evaluatePostfix(string postfix) {
    vector<double> nums;
    for (char c : postfix) {// �������� �� �������� ������
        if (isdigit(c)) {// ���� ���� ����� ������ � ������ ����
            nums.push_back(c - '0');
        }
        else {
            if (nums.size() < 2) throw runtime_error("Invalid postfix expression");// �������� ��������� ������� ��������
            double b = nums.back(); nums.pop_back();//������ ����� � �
            double a = nums.back(); nums.pop_back();//����������� � �
            nums.push_back(calculate(a, b, c));
        }
    }
    if (nums.size() != 1) throw runtime_error("Invalid postfix expression");
    return nums.back();// ������� ���������� ���� �����- ���������, ���� � ������� ������
}

int main() {
    string infix;// ��������� ������ ������
    cout << "Enter infix expression: ";// ���������� ��� �������� ������
    getline(cin, infix);// ����� � ������

    try { //�������� �� ������������(���������)
        string postfix = infixToPostfix(infix);
        cout << "Postfix: " << postfix << endl;
        double result = evaluatePostfix(postfix);//�������� ���������
        cout << "Result: " << result << endl;// �������� ���������
    }
    catch (const runtime_error& error) {//�������� ������� ������� ���� �����
        cerr << "Error: " << error.what() << endl;// ����� ���� ��� ������� ���� ����� ��������
    }

    return 0;
}