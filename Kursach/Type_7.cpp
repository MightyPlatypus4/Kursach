#include <iostream>
#include <cmath>
#include "type_7.h"

type7::type7(double b1) {
	B = b1;
}
void type7::Get_answer() {
	std::cout << "Koren` uravneniya: x = 0\n" << std::endl;
}
void type7::show() {
	std::cout << "Uravneniye " << B << "*x=0" << std::endl;
}