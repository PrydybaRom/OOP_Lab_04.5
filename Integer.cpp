#include "Integer.h"
#include <iostream>
using namespace std;

Integer::Integer() : value(0) {}
Integer::Integer(int value) : value(value) {}
Integer::~Integer() {}

void Integer::Input()
{
    cout << "Enter an integer value: ";
    cin >> value;
}

void Integer::Output()
{
    cout << "Integer value: " << value << endl;
}

Number* Integer::add(Number* r)
{
    Integer* temp = dynamic_cast<Integer*>(r);
    if (temp)
    {
        Integer* result = new Integer();
        result->value = this->value + temp->value;
        return result;
    }
    else
    {
        cerr << "Error: Addition of incompatible types!" << endl;
        return nullptr;
    }
}

Number* Integer::sub(Number* r)
{
    Integer* temp = dynamic_cast<Integer*>(r);
    if (temp)
    {
        Integer* result = new Integer();
        result->value = this->value - temp->value;
        return result;
    }
    else
    {
        cerr << "Error: Subtraction of incompatible types!" << endl;
        return nullptr;
    }
}

Number* Integer::mul(Number* r)
{
    Integer* temp = dynamic_cast<Integer*>(r);
    if (temp)
    {
        Integer* result = new Integer();
        result->value = this->value * temp->value;
        return result;
    }
    else
    {
        cerr << "Error: Multiplication of incompatible types!" << endl;
        return nullptr;
    }
}

Number* Integer::div(Number* r)
{
    Integer* temp = dynamic_cast<Integer*>(r);
    if (temp)
    {
        if (temp->value != 0)
        {
            Integer* result = new Integer();
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

