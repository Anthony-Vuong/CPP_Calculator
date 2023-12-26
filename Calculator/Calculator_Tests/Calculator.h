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
	virtual int add(std::string op1, std::string op2) = 0;
	virtual int subtract(std::string op1, std::string op2) = 0;
	virtual int multiply(std::string op1, std::string op2) = 0;
	virtual int divide(std::string op1, std::string op2) = 0;
	virtual int remainder(std::string op1, std::string op2) = 0;
	virtual void calculate() = 0;
	void parse_expression(std::string exp);
	void run_calculator();
	

};

