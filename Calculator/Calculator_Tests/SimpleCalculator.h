#pragma once
#include <string>
#include "Calculator.h"

class SimpleCalculator : public Calculator
{
public:
	auto add(auto, auto);
	auto subtract(auto, auto);
	auto multiply(auto, auto);
	auto divide(auto, auto);
	int remainder(auto, auto);
	void calculate();
    std::string get_operand(int pos);

};

