#pragma once

#include "number.h"

class Integer : public Number
{
private:
    int value;

public:
    Integer();
    Integer(int value);
    ~Integer();
    int GetValue() { return value; }
    void Input() override;
    void Output() override;
    Number* add(Number* r) override;
    Number* sub(Number* r) override;
    Number* mul(Number* r) override;
    Number* div(Number* r) override;
};
