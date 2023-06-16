#include <iostream>
#include "Type_2.h"

type2::type2(double a1) {
	A = a1;
}
void type2::Get_answer() {
	std::cout << "Otvet: lyuboe X=0\n" << std::endl;
}
void type2::show() {
	std::cout << "Uravneniye " << A << "*x^2 = 0" << std::endl;
}