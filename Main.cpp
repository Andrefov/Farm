#include <iostream>
#include <string>
#include "data_validator.h"
#include "Algorithm.h"

void promptStartDialog() {
	std::cout << "Type RUN to start algorithm" << std::endl;
}

void promptFenceQuestion() {
	std::cout << "Type how many meters of fance you have? (integers only)" << std::endl;
}

void displayIncorrectValueError() {
	std::cout << "incorrect value" << std::endl;
}

std::string getUserInput() {
	std::string input;
	input.clear();
	std::cin >> input;
	return input;
}

int main() {

	RunCommandValidator runValidator;

	std::string userInput;
	bool proceedWithAlghoritm = false;
	do {
		promptStartDialog();
		userInput = getUserInput();
		if (runValidator.validate(userInput)) {
			proceedWithAlghoritm = true;
		}
		else {
			displayIncorrectValueError();
		}
	} while (!proceedWithAlghoritm);

	FenceInputValidator fence;
	proceedWithAlghoritm = false;

	do {
		promptFenceQuestion();
		userInput = getUserInput();
		if (fence.validate(userInput)) {
			proceedWithAlghoritm = true;
		}
		else {
			displayIncorrectValueError();
		}
	} while (!proceedWithAlghoritm);

	int lenght = stoi(userInput);

	Sides sides;
	RectangleSides sideLenght;
	sides = sideLenght.calculate(lenght);
	RectAreaCalc area;
	int farmArea = area.RectAreaCalculator(sides.a, sides.b);

	std::cout << "Side A should have " << sides.a << " meters." << std::endl;
	std::cout << "Side B should have " << sides.b << " meters." << std::endl;
	std::cout << "Optimal area with " << lenght << "m. of fence is: " << farmArea << " square meters" << std::endl;

	return 0;
}