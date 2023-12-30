#pragma once
#include <string>
#include "Calculator.h"
#include "NegativeUnderRadicalException.h"

class SimpleCalculator : public Calculator
{
public:
	auto add(auto, auto);
	auto subtract(auto, auto);
	auto multiply(auto, auto);
	auto divide(auto, auto);
	int remainder(auto, auto);
    auto square(auto);
	auto square_root(auto);
    void calculate();
    std::string get_operand(int pos);

};

