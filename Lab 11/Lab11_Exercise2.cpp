// Lab11_Exercise2
#include <iostream>
using namespace std;

class Fraction {
private:
	int m_numerator;
	int m_denominator;
public:
	Fraction(int numerator = 0, int denominator = 1)
		:m_numerator{ numerator }, m_denominator{ denominator }
	{}

	friend std::ostream& operator<<(std::ostream&, const Fraction&); // friend class decloration of operator class
	friend Fraction operator*(const Fraction&, const Fraction&); //Overloading operators using friend functions
	friend Fraction operator*(const Fraction& fraction, int value);
	friend Fraction operator*(int value, const Fraction& fraction);
};

std::ostream& operator<<(std::ostream& stream, const Fraction& other) { // operator overloading
	if (other.m_denominator == other.m_numerator) { // if statement which checks whether two values are equal or not 
		stream << 1 << "/" << 1; // if yes, it will output 2 one
	}
	else {
		stream << other.m_numerator << "/" << other.m_denominator;
	}

	return stream;
}

Fraction operator*(const Fraction& pos1, const Fraction& pos2) { //operator* overloading
	Fraction pos(pos1.m_numerator * pos2.m_numerator, pos1.m_denominator*pos2.m_denominator); //initialization of the pos variable which stores multiplied value of 2 variables
	return pos; //returning the pos varibale 
}

// Overloaded * operator for scalar multiplication with Fraction
Fraction operator*(const Fraction& fraction, int value) {
	int newNumerator = fraction.m_numerator * value;
	return Fraction(newNumerator, fraction.m_denominator);
}

// Overloaded * operator for scalar multiplication with Fraction
Fraction operator*(int value, const Fraction& fraction) {
	return fraction * value; // Reuse the existing operator*
}

int main() {
	Fraction f1{ 1,2 }, f2{ 3,4 };
	cout << f1 << ", " << f2 << endl;
	cout << f1 * f2 << endl;
	cout << f1 * 2 << endl;
	cout << 3 * f2 << endl;
	cout << 2 * f1 * f2 * 3 << endl;
	return 0;
}
