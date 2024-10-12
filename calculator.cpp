#include <iostream>
#include "calculator.h"

double Calculator::add (double a, double b) {
	return a + b;
}

double Calculator::sub (double a, double b) {
	return a - b;
}

double Calculator::mul (double a, double b) {
        return a * b;
}

double Calculator::div (double a, double b) {
	if (b == 0) {
	  std::cout << "Divide by 0!" << std::endl;
	  return 0;
	} 
	return a / b;
}
