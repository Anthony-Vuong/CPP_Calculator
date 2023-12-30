#include <string>
#include <iostream>
#include <cmath>
#include "SimpleCalculator.h"



auto SimpleCalculator::add(auto op1, auto op2) {
	return op1 + op2;
}

auto SimpleCalculator::subtract(auto op1, auto op2) {
	return op2 - op1;
}

auto SimpleCalculator::multiply(auto op1, auto op2) {
	return op1 * op2;
}

auto SimpleCalculator::divide(auto op1, auto op2) {
    //std::cout << op1 / op2 << std::endl;
    return op1 / op2;
}

int SimpleCalculator::remainder(auto op1, auto op2) {
	return std::fmod(op1, op2);
}

std::string SimpleCalculator::get_operand(int pos){
    return operands.at(pos);
}

void SimpleCalculator::calculate() {

	char temp_operator{};
    std::string t1{};
    std::string t2{};
    auto temp_oper1{0.0};
    auto temp_oper2{0.0};
	auto result{0.0}, mod{0.0};

    t1 = operands.at(0);
	t2 = operands.at(1);

    if(t1.find('.')){
        temp_oper1 = stod(t1);
    }
    else{
        temp_oper1 = stoi(t1);
    }
    
    if(t2.find('.')){
        temp_oper2 = stod(t2);   
    }
    else{
        temp_oper2 = stoi(t2);
    }


	for (int i{ 0 }; i < operators.size(); i++) {
		temp_operator = operators.at(i);
		switch (temp_operator) {
		case '+':
			result = add(temp_oper1, temp_oper2);
            std::cout << result << std::endl;
            break;
		case '-':
			result = subtract(temp_oper1, temp_oper2);
			break;
		case '/':
			result = divide(temp_oper1, temp_oper2);
			mod = remainder(temp_oper1, temp_oper2);
			break;
		case '*':
			result = multiply(temp_oper1, temp_oper2);
			break;
		case 'x':
			result = multiply(temp_oper1, temp_oper2);
			break;
		default:
			std::cout << "Unknown" << std::endl;
		}
	}
}
