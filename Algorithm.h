#pragma once
#include <iostream>

struct Sides
{
	int a;
	int b;	
	Sides(int a=0, int  b=0) {
		this->a = a;
		this->b = b;
	}
};


class CalculatingInterface
{
public:
	virtual Sides calculate(int x) = 0;
};


class RectangleSides : public CalculatingInterface
{

public:
	Sides calculate(int x) override;
	
};

class AreaCalcInterface 
{
public:
	virtual int RectAreaCalculator(int a, int b) = 0;

};

class RectAreaCalc  : public AreaCalcInterface
{
public:
	int RectAreaCalculator(int a, int b);
};