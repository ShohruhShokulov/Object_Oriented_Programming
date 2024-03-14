// Lab11_Exercise1
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

	friend std::ostream& operator<<(std::ostream&, const Fraction&); // friend class decloration
};

std::ostream& operator<<(std::ostream& stream, const Fraction& other) { // operator overloading
	stream << other.m_numerator << "/" << other.m_denominator;
	return stream;
}


int main() {
	Fraction f1{ 1,2 }, f2{ 3,4 };
	cout << f1 << ", " << f2 << endl;
	return 0;
}