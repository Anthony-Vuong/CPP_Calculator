#pragma once
#include <string>
#include <stack>
#include "Calculator.h"
#include "NegativeUnderRadicalException.h"
#include "DivideByZeroException.h"

class SimpleCalculator : public Calculator
{
public:
    double result{0.0};
	auto add(auto, auto);
	auto subtract(auto, auto);
	auto multiply(auto, auto);
	auto divide(auto, auto);
	auto remainder(auto, auto);
    auto square(auto);
	auto square_root(auto);
    void calculate();
    float get_result();
    std::string get_operand(int pos);

};

