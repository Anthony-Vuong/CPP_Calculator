#pragma once
#include <string>
#include "Calculator.h"

class SimpleCalculator : public Calculator
{
public:
	virtual int add(std::string, std::string) override;
	virtual int subtract(std::string op1, std::string op2) override;
	virtual int multiply(std::string op1, std::string op2) override;
	virtual int divide(std::string op1, std::string op2) override;
	virtual int remainder(std::string op1, std::string op2) override;
	virtual void calculate() override;

};

