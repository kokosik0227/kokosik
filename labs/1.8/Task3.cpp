#include <iostream>

bool isSet(int num, int pos) {
    return (num & (1 << pos)); // 1
}

int main() {
    setlocale(LC_ALL, "uk-UA");
    int число, позиція;
    std::cin >> число >> позиція;
    if (isSet(число, позиція)) {
        std::cout << "Біт встановлений\n";
    }
    else {
        std::cout << "Біт не встановлений\n";
    }
    return 0;

}