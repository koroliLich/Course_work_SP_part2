#include <iostream>
#include "calculator.h"

int main() {
	double a, b;
        
        hello();
        
	std::cout << "Enter A: ";
	std::cin >> a;

	std::cout << "Enter B: ";
	std::cin >> b;
	
	Calculator calc;

	std::cout << "Add: " << calc.add(a, b) << std::endl;
        std::cout << "Sub: " << calc.sub(a, b) << std::endl;
        std::cout << "Mul: " << calc.mul(a, b) << std::endl;
        std::cout << "Div: " << calc.div(a, b) << std::endl;

	return 0;
}
