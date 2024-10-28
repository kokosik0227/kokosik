#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime> // підключення бібліотек

using namespace std;

char getRandomChar() {
    const char chars[] = { '*', '*', '*', '*', '*', '*', '*', '$', '%', '@', '&' };
    return chars[rand() % 11]; //шанс на іграшки, більше 11 не так працює
}

string getColorCode(char c) {
    switch (c) { //перевіряє значення
    case '*': return "\033[32m";
    case '$': return "\033[33m";
    case '%': return "\033[31m";
    case '@': return "\033[34m";
    case '&': return "\033[35m";
    case '|': return "\033[38;5;94m"; // Коричневий
    default: return "\033[37m"; // якщо не совпадає, то білий буде
    }
}

int main() {
    srand(time(0)); // Ініціалізуємо генератор чисел

    int level;
    cout << "Enter the amount of levels for the tree: "; //кількість рівнів 
    cin >> level;

    int width = 2 * level + 5; //ширина
    int height = (level * (level + 5)) / 2 + 2;// висота

    vector<vector<char>> tree(height, vector<char>(width, ' ')); //двовимірний масив
    int middle = width / 2;// середина ширини

    int currentHeight = 0; //поточний рядок
    for (int lvl = 0; lvl < level; ++lvl) {// рівні
        for (int i = 0; i < 3 + lvl; ++i) {// рядки в рівнях
            for (int j = 0; j < 2 * i + 1; ++j) {// символи в рядку
                tree[currentHeight][middle - i + j] = getRandomChar();// випадковий символ в поточну позицію
            }
            currentHeight++;// наступний рядок
        }
    }

    for (int i = 0; i < 2; ++i) {// 2 рядки стовбура
        tree[height - 2 + i][middle] = '|'; // Коричневий стовбур
    }

    for (int i = 0; i < height; ++i) { // цикл по рядках
        for (int j = 0; j < width; ++j) {// символах в рядку
            cout << getColorCode(tree[i][j]) << tree[i][j] << "\033[0m";
        }
        cout << endl;
    }

    return 0;
}