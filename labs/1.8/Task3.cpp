#include <iostream>

bool isSet(int num, int pos) {
    return (num & (1 << pos)); // 1
}

int main() {
    setlocale(LC_ALL, "uk-UA");
    int �����, �������;
    std::cin >> ����� >> �������;
    if (isSet(�����, �������)) {
        std::cout << "��� ������������\n";
    }
    else {
        std::cout << "��� �� ������������\n";
    }
    return 0;

}