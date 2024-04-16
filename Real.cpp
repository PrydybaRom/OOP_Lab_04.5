#include "Real.h"
#include <iostream>

using namespace std;

Real::Real() : value(0.0) {}
Real::Real(double value) : value(value) {}
Real::~Real() {}

void Real::Input()
{
    cout << "Enter a Real number value: ";
    cin >> value;
}

void Real::Output()
{
    cout << "Real number value: " << value << endl;
}

Number* Real::add(Number* r)
{
    Real* temp = dynamic_cast<Real*>(r);
    if (temp)
    {
        Real* result = new Real();
        result->value = this->value + temp->value;
        return result;
    }
    else
    {
        cerr << "Error: Addition of incompatible types!" << endl;
        return nullptr;
    }
}

Number* Real::sub(Number* r)
{
    Real* temp = dynamic_cast<Real*>(r);
    if (temp)
    {
        Real* result = new Real();
        result->value = this->value - temp->value;
        return result;
    }
    else
    {
        cerr << "Error: Subtraction of incompatible types!" << endl;
        return nullptr;
    }
}

Number* Real::mul(Number* r)
{
    Real* temp = dynamic_cast<Real*>(r);
    if (temp)
    {
        Real* result = new Real();
        result->value = this->value * temp->value;
        return result;
    }
    else
    {
        cerr << "Error: Multiplication of incompatible types!" << endl;
        return nullptr;
    }
}

Number* Real::div(Number* r)
{
    Real* temp = dynamic_cast<Real*>(r);
    if (temp)
    {
        if (temp->value != 0)
        {
            Real* result = new Real();
            result->value = this->value / temp->value;
            return result;
        }
        else
        {
            cerr << "Error: Division by zero!" << endl;
            return nullptr;
        }
    }
    else
    {
        cerr << "Error: Division of incompatible types!" << endl;
        return nullptr;
    }
}
