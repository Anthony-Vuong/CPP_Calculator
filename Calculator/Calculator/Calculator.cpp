#include <iostream>
#include <algorithm>
#include <vector>
#include <QString>
#include <QDebug>
#include "Calculator.h"


Calculator::Calculator() {
    //std::cout << "Constructor" << std::endl;
}
Calculator::~Calculator() {
    //std::cout << "Destructor" << std::endl;
}


QStack<QString> Calculator::reverse_stack(QStack<QString> s){
    QStack<QString> tempstk;

    for(int i{0}; i < s.size(); i++){
        tempstk.push(operands.top());

        operands.pop();
    }

    return tempstk;
}

template<typename T>
void Calculator::display(QStack<T> s) {
    qDebug() << "[ ";
    while (!s.empty()) {
        T top = s.top();
        qDebug() << top << " ";
        s.pop();
    }
    qDebug() << " ]\n";

}

void Calculator::parse_expression(QString exp){
    QString temp{};
    QString digits{"0123456789."};
    QString str_operators{"/*+-%"};

    for (int i{ 0 }; i < exp.length(); i++) {
         QChar c = exp.at(i);
        //	if ((c != ' ' && c >= 48 && c <= 57) || (c != ' ' && c == '.')) {

        if (digits.contains(c)) {
            temp += c;
        }
        else if(str_operators.contains(c) || c == MathSymbolSquared || c == MathSymbolSquareRoot) {
            operands.push(temp);
            operators.push_back(c);
            temp.clear();
        }
        if(i == exp.length()-1) {
            operands.push(temp);
        }
    }

    operands = reverse_stack(operands);
    display(operands);

}

/*
void Calculator::run_calculator() {
    char input;

    std::cout << "Welcome to Calculator." << std::endl;
    std::cout << "\tM/m - manual of accepted operators." << std::endl;
    std::cout << "\tR/r - Run Calculator" << std::endl;
    std::cout << "\tQ/q - Quit Calculator" << std::endl;


    while (1) {

        std::cout << "\n\nEnter choice: ";
        std::cin >> input;

        if (input == 'Q' || input == 'q') {
            break;
        }
        else if (input == 'R' || input == 'r') {
            while (1) {
                std::string expression;

                std::getline(std::cin, expression);

                if (expression == "Q") {
                    std::cout << "\n\nReturning to main menu...\n\n";
                    break;
                }
                parse_expression(expression);

                calculate();


            }
        }
        else {
            std::cout << "Unknown command" << std::endl;
        }

    }

}
*/


/*

Calculator::Calculator() {
	//std::cout << "Constructor" << std::endl;
}
Calculator::~Calculator() {
	//std::cout << "Destructor" << std::endl;
}
 
void Calculator::parse_expression(QString exp){
    QString temp{};
	for (int i{ 0 }; i < exp.size(); i++) {
        QChar c = exp.at(i);
		if (c != ' ' && c >= 48 && c <= 57) {
			temp += c;
		}
		if (c != ' ' && (c == 42 || c == 120 || c == 43 || c == 45 || c == 47)) {
            operands.push_back(temp.toInt());
			operators.push_back(c);
			temp.clear();
		}
        if (i == exp.size()-1) {
            operands.push_back(temp.toInt());
		}
	}
}


void Calculator::run_calculator() {
	char input;

	std::cout << "Welcome to Calculator." << std::endl;
	std::cout << "\tM/m - manual of accepted operators." << std::endl;
	std::cout << "\tR/r - Run Calculator" << std::endl;
	std::cout << "\tQ/q - Quit Calculator" << std::endl;

	
	while (1) {

		std::cout << "\n\nEnter choice: ";
		std::cin >> input;

		if (input == 'Q' || input == 'q') {
			break;
		}
		else if (input == 'R' || input == 'r') {
			while (1) {
				std::string expression;

				std::getline(std::cin, expression);

				if (expression == "Q") {
					std::cout << "\n\nReturning to main menu...\n\n";
					break;
				}
				parse_expression(expression);

				calculate();


			}
		}
		else {
			std::cout << "Unknown command" << std::endl;
		}

	}
	
}
*/



