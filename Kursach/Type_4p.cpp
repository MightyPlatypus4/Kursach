#include <iostream>
#include <cmath>
#include <cstdlib>
#include "type_4p.h"

type4p::type4p(double a1, double c1) {
	A = a1;
	C = c1;
}
void type4p::Get_answer_podbor() {
	if ((((-1) * C) / A) < 0) {
		std::cout << "Korney metodom podbora net\n" << std::endl;
	}
	else {
		double min = abs(0 - A * (-20) * (-20) - C);
		double x = -20;
		for (double i = -20; i < 20.01; i = i + 0.01) {
			double temp = abs(0 - A * (i) * (i)-C);
			if (temp < min) {
				min = temp;
				x = i;
			}
		}
		std::cout << "Priblizitelno, odin iz korney: " << x  << "\n" << std::endl;
	}
}