// fig.: лаба1.7.cpp
//*****************************************************************
// Filename: лаба1.7.cpp
// Abstract: This is a simple c++ program.
// Description: В программу вводится значение радиуса окружности,происходит расчёт и выводится площадь данной окружности.
// Create Date: 2021 / 09 / 29
// Author: Студент ИРИТ НГТУ Милкова М.А. 21-ИВТ-2
// V 1.0
// None//OS Windows//None
//*****************************************************************//


#include <iostream>
#define pi 3.1415926535
using namespace std;
int main() {
    char info[] =
        "\n Nizhny Novgorod State Technical University \n"
        " Study work number 1. Task number 1        \n"
        " Performed student 21-IVT-2 Milkova M.A. \n"
        "\n";
    printf("%s", info);

    float r, S;
    cout << "Enter the radius: ";
    cin >> r;
    S = r * r * pi;
    cout << "The area of the circle: " << S;
    return 0;
}

