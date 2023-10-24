// Lab3_Exercise3
#include <iostream>
using namespace std;

void cout_int(int num, int base = 10);

int main() {
	cout_int(100);
	cout_int(100, 8);
	cout_int(100, 10);
	cout_int(100, 16);
	cout_int(100, 20);
	return 0;
}

void cout_int(int num, int base) {
	switch (base) {
	case 8:
		cout << oct << num << endl;
		break;
	case 10:
		cout << dec << num << endl;
		break;
	case 16:
		cout << hex << num << endl;
		break;
	default:
		cout << "ERROR: unknown base" << endl;
    }
}
