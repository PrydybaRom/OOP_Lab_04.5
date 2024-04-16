#pragma once
class Number
{
public:
	virtual void Input() = 0;
	virtual void Output() = 0;
	virtual Number* add(Number* r) = 0;
	virtual Number* sub(Number* r) = 0;
	virtual Number* mul(Number* r) = 0;
	virtual Number* div(Number* r) = 0;
};

