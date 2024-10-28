#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <stdexcept>//підключення бібліотек

using namespace std;

// Функція для визначення пріоритету операторів
int getPrecedence(char op) {
    if (op == '+' || op == '-') return 1;//1 
    if (op == '*' || op == '/') return 2;// 2 пріоритет
    return 0;// для інших символів 0
}

// Функція для виконання операції
double calculate(double a, double b, char op) {
    // вибір операції
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
        throw runtime_error("Invalid operator");// якщо недопустимий оператор
    }
}

// Функція для конвертації інфіксного виразу в постфіксний
string infixToPostfix(string infix) {
    string postfix;
    vector<char> ops;

    for (char c : infix) {// перебір всіх символів вхідного рядка
        if (isdigit(c)) {// якщо с цифра додаємо до постфікс
            postfix += c;
        }
        else if (c == ' ') {
            continue; // Ігноруємо пробіли
        }
        else if (c == '(') {
            ops.push_back(c);// додаємо в стек якщо така дужка
        }
        else if (c == ')') {
            while (!ops.empty() && ops.back() != '(') {
                postfix += ops.back();
                ops.pop_back();// витягуємо оператори зі стеку
            }
            if (!ops.empty()) ops.pop_back(); // Видаляємо '('
        }
        else if (string("+-*/").find(c) != string::npos) {
            while (!ops.empty() && getPrecedence(ops.back()) >= getPrecedence(c)) {
                postfix += ops.back();
                ops.pop_back();// якщо с оператор витяг із стеку і додаємо до постфікса доки пріоритет с стане більшим ніж на вершині стеку
            }
            ops.push_back(c);
        }
    }

    while (!ops.empty()) {// виягуємо всі оператори що лишилися в стеку і додад до постфікса
        postfix += ops.back();
        ops.pop_back();
    }

    return postfix;// повертає отриманий постфіксний вираз
}

// Функція для обчислення постфіксного виразу
double evaluatePostfix(string postfix) {
    vector<double> nums;
    for (char c : postfix) {// переберає всі елементи виразу
        if (isdigit(c)) {// якщи симв число додаємо в вектор намс
            nums.push_back(c - '0');
        }
        else {
            if (nums.size() < 2) throw runtime_error("Invalid postfix expression");// перевірка достатньої кількості операндів
            double b = nums.back(); nums.pop_back();//останнє число в б
            double a = nums.back(); nums.pop_back();//передостаннє в а
            nums.push_back(calculate(a, b, c));
        }
    }
    if (nums.size() != 1) throw runtime_error("Invalid postfix expression");
    return nums.back();// повинен залишитися одне число- результат, якщо ні повертає обчисл
}

int main() {
    string infix;// зберігання інфікс виразу
    cout << "Enter infix expression: ";// запрошення для введення виразу
    getline(cin, infix);// зчитує з консолі

    try { //наглядач за виключеннями(винятками)
        string postfix = infixToPostfix(infix);
        cout << "Postfix: " << postfix << endl;
        double result = evaluatePostfix(postfix);//обчислює результат
        cout << "Result: " << result << endl;// виводить результат
    }
    catch (const runtime_error& error) {//обробляє винятки певного типу даних
        cerr << "Error: " << error.what() << endl;// вивод повід про помилку якщо виник вийняток
    }

    return 0;
}