#include "SimpleCalculator.h"

auto SimpleCalculator::add(auto op1, auto op2) {
    return op1 + op2;
}

auto SimpleCalculator::subtract(auto op1, auto op2) {
    return op1 - op2;
}

auto SimpleCalculator::multiply(auto op1, auto op2) {
    return op1 * op2;
}

auto SimpleCalculator::divide(auto op1, auto op2) {
    if(op2 == 0){
        throw DivideByZeroException();
    }
    else{
        return op1 / op2;
    }
}

auto SimpleCalculator::remainder(auto op1, auto op2) {
    if(op2 == 0){
        throw DivideByZeroException();
    }
    else{
        return std::fmod(op1, op2);
    }
}

auto SimpleCalculator::square(auto op1){
    return op1 * op1;
}

auto SimpleCalculator::square_root(auto op1){
    if(op1 < 0){
        throw NegativeUnderRadicalException();
    }
    else{
        return std::sqrt(op1);
    }
}

QString SimpleCalculator::get_operand(int pos){


    while(pos != 0 ){
        operands.pop();
        pos--;
    }
    return operands.top();
}

auto SimpleCalculator::exponent(auto op1, auto op2){
    return std::pow(op1, op2);
}

float SimpleCalculator::get_result(){
    return result;
}

template<typename T>
void display(QStack<T> s) {
    qDebug() << "[ ";
    while (!s.empty()) {
        T top = s.top();
        qDebug() << top << " ";
        s.pop();
    }
    qDebug() << " ]\n";

}

QString SimpleCalculator::calculate() {

    QChar temp_operator{};
    QString t1{}, t2{};
    auto temp_oper1{0.0};
    auto temp_oper2{0.0};
    auto mod{0.0};

    t1 = operands.top();
    operands.pop();
    t2 = operands.top();
    operands.pop();

    if(t1.contains('.')){
        temp_oper1 = t1.toDouble();
    }
    else{
        temp_oper1 = t1.toInt();
    }

    if(t2.contains('.')){
        temp_oper2 = t2.toDouble();
    }
    else{
        temp_oper2 = t2.toInt();
    }

    int i = 0;
    int operator_size = operators.size();
    //for (int i{ 0 }; i < operator_size; i++) {
    while(operator_size != 0){

        temp_operator = operators.at(i);
        switch (temp_operator.unicode()) {
        case '+':
            result = add(temp_oper1, temp_oper2);
            break;
        case '-':
            result = subtract(temp_oper1, temp_oper2);
            break;
        case '/':
            result = divide(temp_oper1, temp_oper2);
            mod = remainder(temp_oper1, temp_oper2);
            break;
        case '*':
            result = multiply(temp_oper1, temp_oper2);
            break;
        case 'x':
            result = multiply(temp_oper1, temp_oper2);
            break;
        case 0x00B2:
            result = square(temp_oper1);
            break;
        default:
            qDebug() << "Unknown";
        }
        operators.erase(operators.begin());
        operator_size--;

        if(operands.size() == 0){
            break;
        }
        temp_oper1 = result;

        t2 = operands.top();
        operands.pop();

        if(t2.contains('.')){
            temp_oper2 = t2.toDouble();
        }
        else{
            temp_oper2 = t2.toInt();
        }
    }

    return QString::number(result);
}

