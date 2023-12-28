#pragma once
#include <string>
#include "Calculator.h"

class SimpleCalculator : public Calculator
{
public:
	auto add(auto, auto);
	auto subtract(auto, auto);
	int multiply(auto, auto);
	int divide(auto, auto);
	int remainder(auto, auto);
	void calculate();

};

