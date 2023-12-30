#include <iostream>
#include <vector>
#include "Calculator.h"
#include <sstream>


Calculator::Calculator() {
	//std::cout << "Constructor" << std::endl;
}
Calculator::~Calculator() {
	//std::cout << "Destructor" << std::endl;
}

void Calculator::parse_expression(std::string exp){
	std::string temp{};
    std::string digits{"0123456789."};
    std::string str_operators{"/*+-%"};
    
	for (int i{ 0 }; i < exp.length(); i++) {
		char c = exp.at(i);
	//	if ((c != ' ' && c >= 48 && c <= 57) || (c != ' ' && c == '.')) {
        
		if (digits.find(c) != std::string::npos) {
			temp += c;
		}
		else if(str_operators.find(c) != std::string::npos) { 
            operands.push_back(temp);
            operators.push_back(c);
			temp.clear();
		}
		if(i == exp.length()-1) {
            operands.push_back(temp);
		}
	}
}

void Calculator::run_calculator() {
	char input;

	std::cout << "Welcome to Calculator." << std::endl;
	std::cout << "\tM/m - manual of accepted operators." << std::endl;
	std::cout << "\tR/r - Run Calculator" << std::endl;
	std::cout << "\tQ/q - Quit Calculator" << std::endl;

	
	while (1) {

		std::cout << "\n\nEnter choice: ";
		std::cin >> input;

		if (input == 'Q' || input == 'q') {
			break;
		}
		else if (input == 'R' || input == 'r') {
			while (1) {
				std::string expression;

				std::getline(std::cin, expression);

				if (expression == "Q") {
					std::cout << "\n\nReturning to main menu...\n\n";
					break;
				}
				parse_expression(expression);

				calculate();


			}
		}
		else {
			std::cout << "Unknown command" << std::endl;
		}

	}
	
}



