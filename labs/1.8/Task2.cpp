#include <iostream>

int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        count += (num & 1); // ������ 1, ���� �������� �� ������� 1
        num >>= 1;           // ���� ������ �� 1 ��
    }
    return count;
}

int main() {
    setlocale(LC_ALL, "uk-UA");
    int �����; 
    std::cin >> �����;
    std::cout << "ʳ������ ��������� ���: " << countSetBits(�����) << "\n";
    return 0;

}