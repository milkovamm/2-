// fig.: лаба1.2.cpp
//*****************************************************************
// Filename: лаба1.2.cpp
// Abstract: This is a simple c++ program.
// Description: Программа печатает целые числа в различных форматах.
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
    int n;
    cout << "Enter n:";
    cin >> n;
    cout << "<<10:" << dec << n << "|"; //вывод в десятичной системе счистления 
    cout << "8:" << oct << n << "|"; //вывод в восьмиричной системе счистления
    cout << "16:" << hex << n << ">>" << endl;//вывод в шестнадцатиричной системе счистления
    return 0;
}