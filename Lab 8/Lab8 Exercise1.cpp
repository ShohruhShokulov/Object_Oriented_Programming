// Lab8 Exercise1
#include <iostream>
using namespace std;

class Calculate {
private:
	double value=0.0; // default variable with the value of 0.0 inside private 
public:
	// function which returns the value of the value variable
	double getValue() {
		return value;
	}
	
	double add(double a) { // add function which adds the real number to value
		value += a;
		return value;
	}

	double substract(double a) { // substract function which - the real number from value
		value -= a;
		return value;
	}

	double multiply(double a) { // multiply function which multiplies the real number to the value
		value *= a;
		return value;
	}

	double divide(double a) { // devide function which devides the real number to the value
		value /= a;
		return value;
	}
};

int main(void) {
	Calculate cc;
	int i;
	char op;
	double value;
	for (i = 0; i < 10; ++i) {
		cout << "Select math operator(+,-,*,/): ";
		cin >> op;
		cout << "Enter a real number for the math: ";
		cin >> value;
		switch (op) {
		case '+':
			cout << cc.getValue() << " + " << value;
			cout << " = " << cc.add(value) << endl;
			break;
		case '-':
			cout << cc.getValue() << " - " << value;
			cout << " = " << cc.substract(value) << endl;
			break;
		case '*':
			cout << cc.getValue() << " * " << value;
			cout << " = " << cc.multiply(value) << endl;
			break;
		case '/':
			cout << cc.getValue() << " / " << value;
			cout << " = " << cc.divide(value) << endl;
			break;
		}
	}

	return 0;
}
