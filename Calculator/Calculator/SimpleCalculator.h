#pragma once
#include <QString>
#include <QStack>
#include <QDebug>
#include <cmath>
#include "Calculator.h"
#include "NegativeUnderRadicalException.h"
#include "DivideByZeroException.h"


//#include <string>
//#include <iostream>


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
    auto exponent(auto, auto);
    QString calculate();
    float get_result();
    QString get_operand(int pos);
    const QChar MathSymbolSquared{0x00B2};
    const QChar MathSymbolSquareRoot{0x221A};

};

