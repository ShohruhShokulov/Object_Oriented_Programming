// Lab3_Exercise2
#include <iostream>
using namespace std;
// function prototypes
void display(char);
void display(int);
void display(double);

int main() {
	display('A');
	display(1234);
	display(123.4);
	return 0;
}
// function definitions
void display(char a) {
	cout << "char type : " << a << endl;
}

void display(int x) {
	cout << "int type: " << x<< endl;
}

void display(double y) {
	cout << "double type: " << y;
}