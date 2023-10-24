// Lab4_Exercise1
#include <iostream>
using namespace std;

void sort3(double&, double&, double&, bool(*)(double&, double&));
void print3(const double&, const double&, const double&);
void swap2(double&, double&);
bool ascending(double&, double&);
bool descending(double&, double&);
int main() {
	double na1 = 10.3, na2 = -2.1, na3 = 8.0;
	double nd1 = 10.3, nd2 = -2.1, nd3 = 8.0;
	cout << "Befere sort: "; print3(na1, na2, na3);
	sort3(na1, na2, na3, ascending);
	sort3(nd1, nd2, nd3, descending);
	cout << "After sort(ascending): "; print3(na1, na2, na3);
	cout << "After sort(descending): "; print3(nd1, nd2, nd3);
	return 0;
}

void sort3(double& a, double& b, double& c, bool(*compare)(double&, double&)) {
	if (compare(a, b)) swap2(a, b);
	if (compare(b, c)) swap2(b, c);
	if (compare(a, c)) swap2(a, c);
}

void print3(const double& a, const double& b, const double& c) {
	cout << a << " " << b<<" " << c << endl;
}

void swap2(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;
}	

bool ascending(double& a, double& b) {
	return a > b;
}

bool descending(double& a, double& b) {
	return a < b;
}

