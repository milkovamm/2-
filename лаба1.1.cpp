// fig.: ����1.1.cpp
//*****************************************************************
// Filename: ����1.1.cpp
// Abstract: This is a simple c++ program.
// Description: ��������� ����������� � ������� ��� ������������.
// Create Date: 2021 / 09 / 29
// Author: ������� ���� ���� ������� �.�. 21-���-2
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
    char name[112];
    cout << "Hello, what's you name?\n";
    fgets(name, 112, stdin);
    cout << "Hello," << name;
    return 0;
}