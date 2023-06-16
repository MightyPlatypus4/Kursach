#include <iostream>
#include <cmath>
#include "Type_4.h"

type4::type4(double a1, double c1) {
	A = a1;
	C = c1;
}
void type4::Get_answer() {
	double k = ((-1) * C) / A;
	if (k >= 0) {
		double x1 = sqrt(k);
		double x2 = sqrt(k) * (-1);
		std::cout << "Korny uravneniya: " << std::endl << "X1 = " << x1 << std::endl << "X2 = " << x2 << "\n" << std::endl;
	}
	else {
		std::cout << "Korney net\n" << std::endl;
	}
}
void type4::show() {
	std::cout << "Uravneniye " << A << "*x^2 + " << C << " = 0" << std::endl;
}