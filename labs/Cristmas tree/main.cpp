#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime> // ���������� �������

using namespace std;

char getRandomChar() {
    const char chars[] = { '*', '*', '*', '*', '*', '*', '*', '$', '%', '@', '&' };
    return chars[rand() % 11]; //���� �� �������, ����� 11 �� ��� ������
}

string getColorCode(char c) {
    switch (c) { //�������� ��������
    case '*': return "\033[32m";
    case '$': return "\033[33m";
    case '%': return "\033[31m";
    case '@': return "\033[34m";
    case '&': return "\033[35m";
    case '|': return "\033[38;5;94m"; // ����������
    default: return "\033[37m"; // ���� �� �������, �� ���� ����
    }
}

int main() {
    srand(time(0)); // ���������� ��������� �����

    int level;
    cout << "Enter the amount of levels for the tree: "; //������� ���� 
    cin >> level;

    int width = 2 * level + 5; //������
    int height = (level * (level + 5)) / 2 + 2;// ������

    vector<vector<char>> tree(height, vector<char>(width, ' ')); //���������� �����
    int middle = width / 2;// �������� ������

    int currentHeight = 0; //�������� �����
    for (int lvl = 0; lvl < level; ++lvl) {// ���
        for (int i = 0; i < 3 + lvl; ++i) {// ����� � �����
            for (int j = 0; j < 2 * i + 1; ++j) {// ������� � �����
                tree[currentHeight][middle - i + j] = getRandomChar();// ���������� ������ � ������� �������
            }
            currentHeight++;// ��������� �����
        }
    }

    for (int i = 0; i < 2; ++i) {// 2 ����� ��������
        tree[height - 2 + i][middle] = '|'; // ���������� �������
    }

    for (int i = 0; i < height; ++i) { // ���� �� ������
        for (int j = 0; j < width; ++j) {// �������� � �����
            cout << getColorCode(tree[i][j]) << tree[i][j] << "\033[0m";
        }
        cout << endl;
    }

    return 0;
}