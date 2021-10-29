// fig.: лаба1.6.2.cpp
//*****************************************************************
// Filename: лаба1.6.2.cpp
// Abstract: This is a simple c++ program.
// Description:: В программу вводится значения суммы вклада, процента, срок вклада, и происходит расчёт конечной суммы вклада.
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

    float summ, procent, srok, ksumm;
    cout << "Enter the deposit amount: " << endl;
    cin >> summ;
    cout << "Enter the deposit percentage: " << endl;
    cin >> procent;
    cout << "Enter the number of years for which the contribution is taken: "<< endl;
    cin >> srok;
    ksumm = (summ * (pow((procent / 100), srok) - 1)) / ((procent / 100) - 1);
    cout << "The final deposit amount: " << ksumm << endl;
    return 0;
}