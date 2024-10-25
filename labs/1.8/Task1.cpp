#include <iostream>

bool isEven(int num) {
    return !(num & 1); // Число парне, якщо молодший біт дорівнює 0
}

int main() {
    setlocale(LC_ALL, "uk-UA");
    int число;
    std::cin >> число;
    if (isEven(число)) {
        std::cout << "Парне\n";
    }
    else {
        std::cout << "Непарне\n";
    }
    return 0;
}