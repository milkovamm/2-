// fig.: лаба1.3.cpp
//*****************************************************************
// Filename: лаба1.3.cpp
// Abstract: This is a simple c++ program.
// Description: Программа записывает число в десятичном формате и преводит его в экспоненциальный.
// Create Date: 2021 / 09 / 29
// Author: Студент ИРИТ НГТУ Милкова М.А. 21-ИВТ-2
// V 1.0
// None//OS Windows//None
//*****************************************************************//

#include <iostream>
using namespace std;

int main() {
    char info[] =
        "\n Nizhny Novgorod State Technical University \n"
        " Study work number 1. Task number 1        \n"
        " Performed student 21-IVT-2 Milkova M.A. \n"
        "\n";
    printf("%s", info);
    float n;
    cout << "Enter n:";
    cin >> n;
    cout << "10:" << dec << n << endl;
    cout << "Exp:" << scientific << n << endl;
    return 0;
}