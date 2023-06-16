#include <iostream>
#include <cmath>
#include "Type_3.h"

type3::type3(double c1) {
	C = c1;
}
void type3::Get_answer() {
	std::cout << "Korney net\n" << std::endl;
}
void type3::show() {
	std::cout << "Uravneniye " << C << " =  0" << std::endl;
}