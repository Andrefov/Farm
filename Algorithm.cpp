#include "Algorithm.h"

Sides RectangleSides::calculate(int x) {

	int fance_amount = x;
	int divided = x / 3;
	switch (fance_amount % 3)
	{
	case 0:
		return Sides(divided, divided);
	case 1:
		return Sides(divided, divided + 1);
	case 2:
		return Sides(divided, divided + 2);
	}
};

int RectAreaCalc::RectAreaCalculator(int a, int b) {
	int sideA = a;
	int sideB = b;
	return sideA * sideB;
}