// fig.: лаба1.8.2.cpp
//*****************************************************************
// Filename: лаба1.8.2.cpp
// Abstract: This is a simple c++ program.
// Description: В программу вводится значения внешнего и внутреннего радиусов и считаетя площадь кольца
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
    float vntr, vnsh, S;
    cout << "Enter the outer radius of the ring: ";
    cin >> vnsh;
    cout << "Enter the inner radius of the ring: ";
    cin >> vntr;
    S = pi * ((vnsh * vnsh) - (vntr * vntr));
    cout << "The area of the ring:" << S;
    return 0;
}