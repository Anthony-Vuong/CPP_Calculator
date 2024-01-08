#pragma once
#include <QDebug>
#include <QException>

class DivideByZeroException : public QException{

public:
    DivideByZeroException(QString const& message)
        :message{message} {}

    ~DivideByZeroException() = default;


    void raise() const override { throw *this; }
    DivideByZeroException *clone() const override { return new DivideByZeroException(*this); }
    const char * what () const throw ()
    {
        return "C++ Exception";
    }

private:
    QString message;

};
