#include <iostream>
#include <cmath>
#include "type_8.h"

type8::type8(double a1, double b1) {
	A = a1;
	B = b1;
}
void type8::Get_answer() {
	double x = ((-1) * B) / A;
	std::cout << "Korni uravneniya: " << std::endl;
	std::cout << "X1 = 0" << std::endl << "X2 = " << x << "\n" << std::endl;
}
void type8::show() {
	std::cout << "Uravneniye " << A << "*x^2 + " << B << "*x =0 " << std::endl;
}