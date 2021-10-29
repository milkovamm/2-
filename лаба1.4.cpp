// fig.: лаба1.4.cpp
//*****************************************************************
// Filename: лаба1.4.cpp
// Abstract: This is a simple c++ program.
// Description: В программу вводится значения сторон и высчитывается площадь прямоугольника.
// Create Date: 2021 / 09 / 29
// Author: Студент ИРИТ НГТУ Милкова М.А. 21-ИВТ-2
// V 1.0
// None//OS Windows//None
//*****************************************************************//

#include <iostream>;
using namespace std;

int main() {
    char info[] =
        "\n Nizhny Novgorod State Technical University \n"
        " Study work number 1. Task number 1        \n"
        " Performed student 21-IVT-2 Milkova M.A. \n"
        "\n";
    printf("%s", info);
    int a, b, S;
    cout << "enter a value for the first side of the rectangle:";
    cin >> a;
    cout << "enter a value for the second side of the rectangle:";
    cin >> b;
    S = a * b;
    cout << "the area of the rectangle:" << S;
    return 0;

}