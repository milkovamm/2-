// fig.: лаба1.5.cpp
//*****************************************************************
// Filename: лаба1.5.cpp
// Abstract: This is a simple c++ program.
// Description: В программу вводится значение веса в фунтах и переводится в килограммы.
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
    float fount, kg, n;
    n = 0.45;
    cout << "Enter the weight in pounds: ";
    cin >> fount;
    kg = fount * n;
    cout <<"The mass in kilograms: " << kg << endl;
    return 0;
}
