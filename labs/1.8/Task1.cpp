#include <iostream>

bool isEven(int num) {
    return !(num & 1); // ����� �����, ���� �������� �� ������� 0
}

int main() {
    setlocale(LC_ALL, "uk-UA");
    int �����;
    std::cin >> �����;
    if (isEven(�����)) {
        std::cout << "�����\n";
    }
    else {
        std::cout << "�������\n";
    }
    return 0;
}