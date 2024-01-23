#pragma once

#include <vector>
#include <string>
#include <stack>

class Calculator
{
private:
	
protected:
	std::stack<std::string> operands;
	std::vector<char> operators;
public:
	Calculator();
	~Calculator();
//    int add(auto, auto);
	int subtract(auto, auto);
	int multiply(auto, auto);
    int divide(auto, auto);
    int remainder(auto, auto);
	virtual void calculate() = 0;
	void parse_expression(std::string exp);
    void prioirty_sort_operand_stack();
	void run_calculator();
    std::stack<std::string> reverse_stack(std::stack<std::string> s);
	
};

