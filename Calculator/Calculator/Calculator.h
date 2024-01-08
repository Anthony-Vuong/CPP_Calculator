#pragma once

#include <vector>
#include <string>
#include <stack>
#include <QString>
#include <QStack>

class Calculator
{
private:

protected:
    QStack<QString> operands;
    std::vector<QChar> operators;
public:
    Calculator();
    ~Calculator();
    //    int add(auto, auto);
    int subtract(auto, auto);
    int multiply(auto, auto);
    int divide(auto, auto);
    int remainder(auto, auto);
    virtual QString calculate() = 0;
    void parse_expression(QString exp);
    void run_calculator();
    QStack<QString> reverse_stack(QStack<QString> s);
    template<typename T>
    void display(QStack<T> s);
    const QChar MathSymbolSquared{0x00B2};
    const QChar MathSymbolSquareRoot{0x221A};

};

