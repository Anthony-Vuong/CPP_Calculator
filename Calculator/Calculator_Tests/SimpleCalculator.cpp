#include <string>
#include <iostream>
#include <cmath>
#include "SimpleCalculator.h"

auto SimpleCalculator::add(auto op1, auto op2) {
	return op1 + op2;
}

auto SimpleCalculator::subtract(auto op1, auto op2) {
	return op1 - op2;
}

auto SimpleCalculator::multiply(auto op1, auto op2) {
	return op1 * op2;
}

auto SimpleCalculator::divide(auto op1, auto op2) {
    if(op2 == 0){
        throw DivideByZeroException();
    }
    else{
        return op1 / op2;
    }
}

auto SimpleCalculator::remainder(auto op1, auto op2) {
    if(op2 == 0){
        throw DivideByZeroException();
    }
    else{
	    return std::fmod(op1, op2);
    }
}

auto SimpleCalculator::square(auto op1){
    return op1 * op1;
}

auto SimpleCalculator::square_root(auto op1){
    if(op1 < 0){
        throw NegativeUnderRadicalException();
    }
    else{
        return std::sqrt(op1);
    }
}

std::string SimpleCalculator::get_operand(int pos){
    

    while(pos != 0 ){
        operands.pop();
        pos--;
    }
    return operands.top();
}

float SimpleCalculator::get_result(){
    return result;
}

void SimpleCalculator::calculate() {

	char temp_operator{};
    std::string t1{};
    std::string t2{};
    auto temp_oper1{0.0};
    auto temp_oper2{0.0};
	auto mod{0.0};

    t1 = operands.top();
    operands.pop();
	t2 = operands.top();
    operands.pop();

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

        if(operands.size() == 0){
            break;
        }
        
        temp_oper1 = result;
    
        t2 = operands.top();
        operands.pop();
        
        if(t2.find('.')){
            temp_oper2 = stod(t2);   
        }
        else{
            temp_oper2 = stoi(t2);
        }
	}
}
