// fig.: ����1.9.cpp
//*****************************************************************
// Filename: ����1.9.cpp
// Abstract: This is a simple c++ program.
// Description: �������������� �������.
// Create Date: 2021 / 09 / 29
// Author: ������� ���� ���� ������� �.�. 21-���-2
// V 1.0
// None//OS Windows//None
//*****************************************************************//

#include <stdio.h>
#include <math.h>
#define e 2.7182
int main() {
    char info[] =
       "\n Nizhny Novgorod State Technical University \n"
        " Study work number 1. Task number 1        \n"
        " Performed student 21-IVT-2 Milkova M.A. \n"
        "\n";
    printf("%s", info);
    float a, x, Z, Y;
    a = 2.8;
    x = 1.29;
    Y = 2*(pow(e, 4*x)) + atan(x/a);
    Z = cos(pow(x, 3)) + (pow(sin(x), 2));
    printf("Y= %f\n", Y);
    printf("Z= %f\n", Z);
    return 0;
}
