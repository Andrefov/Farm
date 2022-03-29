#include "Algorithm.h"

Sides RectangleSides::calculate(int x) {

	int fance_amount = x;
	int divided = x / 3;
	return Sides(divided, divided + fance_amount % 3);
};

int RectAreaCalc::RectAreaCalculator(int a, int b) {
	int sideA = a;
	int sideB = b;
	return sideA * sideB;
}