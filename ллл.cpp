// fig.: ����2.1.cpp
//*****************************************************************
// Filename: ����2.1.cpp
// Abstract: This is a simple c++ program.
// Description: ��������� ����������� � ������� ��� ������������.
// Create Date: 2021 / 09 / 29
// Author: ������� ���� ���� ������� �.�. 21-���-2
// V 1.0
// None//OS Windows//None
//*****************************************************************//


#include <conio.h>
#include <cmath>
#include <iostream>
#include <iomanip>;
using namespace std;

int main() {
    char info[] =
        "\n Nizhny Novgorod State Technical University \n"
        " Study work number 1. Task number 1        \n"
        " Performed student 21-IVT-2 Milkova M.A. \n"
        "\n";
    printf("%s", info);

    float k, n, �;

    cout << "Vvedi k " << endl;
    cin >> k;
    cout << "Vvedi n(max)>0" << endl;
    cin >> n;

    � = sqrt(k * n);
    while (n > 0)
    {
        n = n - 1;
        � = sqrt(� + k * n);
    }

    cout << "c=" << � << endl;

    system("pause");

    return 0;

}