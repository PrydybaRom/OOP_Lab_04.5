#pragma once

#include "number.h"

class Real : public Number
{
private:
    double value;
public:
    Real();
    Real(double value);
    ~Real();
    double GetValue() { return value; }
    void Input() override;
    void Output() override;
    Number* add(Number* r) override;
    Number* sub(Number* r) override;
    Number* mul(Number* r) override;
    Number* div(Number* r) override;
};
