#pragma once

#include <vector>
#include <string>

class Calculator
{
private:
	
protected:
	std::vector<std::string> operands;
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
	void run_calculator();
	

};

