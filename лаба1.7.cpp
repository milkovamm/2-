// fig.: ����1.7.cpp
//*****************************************************************
// Filename: ����1.7.cpp
// Abstract: This is a simple c++ program.
// Description: � ��������� �������� �������� ������� ����������,���������� ������ � ��������� ������� ������ ����������.
// Create Date: 2021 / 09 / 29
// Author: ������� ���� ���� ������� �.�. 21-���-2
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

