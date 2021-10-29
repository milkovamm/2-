// fig.: лаба2.2.cpp
//*****************************************************************
// Filename: лаба2.2.cpp
// Abstract: This is a simple c++ program.
// Description: Считает значение заданной функции на отрезке,среднее,максимальное и минимальное значения.
// Create Date: 2021 / 09 / 29
// Author: Студент ИРИТ НГТУ Милкова М.А. 21-ИВТ-2
// V 1.0
// None//OS Windows//None
//*****************************************************************//


#include <iostream>
#include <cmath>
#include <iomanip>
/* ***************** Main function ***************************/
int main() {
	char info[] =
		"\n Nizhny Novgorod State Technical University \n"
		" Study work number 1. Task number 1        \n"
		" Performed student 21-IVT-2 Milkova M.A. \n"
		"\n";
	printf("%s", info);

	int k = 0;
	double i, y, n = 1.56, maxx, minn, sred, summ = 0;
	bool flag = true;
	for (i = 0.05; i <= n; i = i + 0.05) {
		y = sqrt(pow(i, 5)) - (3 / i) + (4 / pow(i, 3)) - 3 * pow(i, 3);
		summ = summ + y;
		k = k + 1;
		if (flag == true) {
			maxx = y;
			minn = y;
			flag = false;
		}
		if (y > maxx) {
			maxx = y;
		}
		if (y < minn) {
			minn = y;
		}
		std::cout << std::fixed;
		std::cout << std::setprecision(4);
		std::cout << "x=" << i << " | " << "y=" << std::right << std::setw(10) << y << std::endl;
	}
	sred = summ / k;
	std::cout.precision(13);
	std::cout << std::endl << std::setprecision(4) << "Max= " << maxx << std::endl << "Min= " << minn << std::endl << "Srednee= " << sred << std::endl;
	return 0;
}
