#include <iostream>

int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        count += (num & 1); // Додаємо 1, якщо молодший біт дорівнює 1
        num >>= 1;           // Зсув вправо на 1 біт
    }
    return count;
}

int main() {
    setlocale(LC_ALL, "uk-UA");
    int число; 
    std::cin >> число;
    std::cout << "Кількість одиничних бітів: " << countSetBits(число) << "\n";
    return 0;

}