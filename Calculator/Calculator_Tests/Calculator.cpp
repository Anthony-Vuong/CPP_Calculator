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


std::stack<std::string> Calculator::reverse_stack(std::stack<std::string> s){
    std::stack<std::string> tempstk;

    for(int i{0}; i < s.size(); i++){
        tempstk.push(operands.top());

        operands.pop();
    }

    return tempstk;
}

template<typename T>
void display_num_stack(std::stack<T> s) {
    std::cout << "[ ";
    while (!s.empty()) {
        T top = s.top();
        std::cout << top << " ";
        s.pop();
    }
    std::cout << " ]\n" << std::endl;;

}

void Calculator::parse_expression(std::string exp){
	std::string temp{};
    std::string digits{"0123456789."};
    std::string str_operators{"/*+-%()"};
    
	for (int i{ 0 }; i < exp.length(); i++) {
		char c = exp.at(i);
        
		if (digits.find(c) != std::string::npos) {
			temp += c;
		}
		else if(str_operators.find(c) != std::string::npos) {

            if (c == ')' || c == '('){
                operands.push(temp);
                operands.push(std::string{c});
                temp.clear();
            }
            else{
                operands.push(temp);
                operators.push_back(c);
			    temp.clear();
            }
		}
		if(i == exp.length()-1) {
            operands.push(temp);
		}
	}

    operands = reverse_stack(operands);
    display_num_stack(operands);
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



