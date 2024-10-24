#include <iostream>

int main() {
    setlocale(LC_ALL, "uk-UA");
    // 1. Опис змінних символьного типу
    char charVar1;
    char charVar2;
    char charVar3;

    // 2. Опис констант символьного типу
    const char CHAR_CONST1 = '>';
    const char CHAR_CONST2 = '7';
    const char CHAR_CONST3 = 'R';
    const char CHAR_CONST4 = 0x1a; // Control character (Substitute) - might not display
    const char CHAR_CONST5 = 0x32; // '2'
    const char CHAR_CONST6 = 0x63; // 'c'


    // 3. Ініціалізація об'єктів при описі
    char charVar4 = 'A';
    char charVar5 = 0x42; // 'B'

    // 4. Ініціалізація об'єктів оператором присвоювання
    charVar1 = CHAR_CONST1;
    charVar2 = CHAR_CONST2;
    charVar3 = CHAR_CONST3;

    char charVar6;
    char charVar7;
    char charVar8;

    charVar6 = CHAR_CONST4;
    charVar7 = CHAR_CONST5;
    charVar8 = CHAR_CONST6;

    return 0;
}