// Lab11_Exercise3
#include <iostream>
using namespace std;

class Fraction {
private:
    int m_numerator;
    int m_denominator;

public:
    Fraction(int numerator = 0, int denominator = 1)
        : m_numerator{ numerator }, m_denominator{ denominator } {}

    // Friend function declarations for operator overloads
    friend std::ostream& operator<<(std::ostream&, const Fraction&);
    friend Fraction operator*(const Fraction&, const Fraction&);
    friend Fraction operator*(const Fraction& fraction, int value);
    friend Fraction operator*(int value, const Fraction& fraction);
    friend Fraction operator+(const Fraction&, const Fraction&);
    friend Fraction operator+(int value, const Fraction&);
    friend Fraction operator-(int value, const Fraction&);
    friend Fraction operator-(const Fraction&, const Fraction&);
};

// Operator << overload to print fractions
std::ostream& operator<<(std::ostream& stream, const Fraction& other) {
    // Simplify the fraction if the numerator and denominator are equal
    if (other.m_denominator == other.m_numerator) {
        stream << 1 << "/" << 1;
    }
    else {
        stream << other.m_numerator << "/" << other.m_denominator;
    }

    return stream;
}

// Operator * overload for multiplying two fractions
Fraction operator*(const Fraction& pos1, const Fraction& pos2) {
    Fraction pos(pos1.m_numerator * pos2.m_numerator, pos1.m_denominator * pos2.m_denominator);
    return pos;
}

// Operator * overload for scalar multiplication with Fraction
Fraction operator*(const Fraction& fraction, int value) {
    int newNumerator = fraction.m_numerator * value;
    return Fraction(newNumerator, fraction.m_denominator);
}

// Operator * overload for scalar multiplication with Fraction
Fraction operator*(int value, const Fraction& fraction) {
    return fraction * value;
}

// Operator + overload for adding two fractions
Fraction operator+(const Fraction& pos1, const Fraction& pos2) {
    Fraction pos(pos1.m_numerator * pos2.m_denominator + pos2.m_numerator * pos1.m_denominator,
        pos1.m_denominator * pos2.m_denominator);
    return pos;
}

// Operator + overload for scalar addition with Fraction
Fraction operator+(int value, const Fraction& other) {
    Fraction pos(value * other.m_denominator + other.m_numerator, other.m_denominator);
    return pos;
}

// Operator - overload for scalar subtraction with Fraction
Fraction operator-(int value, const Fraction& other) {
    Fraction pos(value * other.m_denominator - other.m_numerator, other.m_denominator);
    return pos;
}

// Operator - overload for subtracting two fractions
Fraction operator-(const Fraction& pos1, const Fraction& pos2) {
    Fraction pos(pos1.m_numerator * pos2.m_denominator - pos2.m_numerator * pos1.m_denominator,
        pos1.m_denominator * pos2.m_denominator);
    return pos;
}

int main() {
    Fraction f1{ 1, 2 }, f2{ 3, 4 };
    cout << f1 << ", " << f2 << endl;
    cout << f1 << " * " << f2 << " = " << f1 * f2 << endl;
    cout << f1 << " + " << f2 << " = " << f1 + f2 << endl;

    // Simplify the result for subtraction
    Fraction result_subtraction = f1 - f2;
    cout << f1 << " - " << f2 << " = " << result_subtraction << endl;

    // Simplify the result for scalar subtraction
    Fraction result_scalar_subtraction = 2 - f2;
    cout << 2 << " - " << f2 << " = " << result_scalar_subtraction << endl;

    cout << 2 << " + " << f1 << " = " << 2 + f1 << endl;
    return 0;
}

