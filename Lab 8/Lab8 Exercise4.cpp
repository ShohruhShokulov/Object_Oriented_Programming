// Lab8 Exercise4
#include <iostream>
#include <iomanip>
using namespace std;

class Time {
private:
	int hour;
	int min;
	int sec;
public:
	Time(int h, int m, int s) :hour(h), min(m), sec(s) {} // constructor to initialise meember variables 
	//const printTime function
	void printTime()  {
		cout << setfill('0') << setw(2) << hour << ":" << setw(2) << min<< ":" << setw(2) << sec;
		cout << endl;
	}

	void printTime() const {
		
		if (hour < 12) {
			cout << setfill('0') << setw(2) << hour << ":" << setw(2) << min << ":" << setw(2) << sec;
			cout << "AM";
		}
		else {
			cout << setfill('0') << setw(2) << hour-12 << ":" << setw(2) << min << ":" << setw(2) << sec;
			cout << "PM";
		}
		cout << endl;
	}
};

int main() {
	const Time t0{ 7, 3, 5 };
	Time t1{ 13, 45, 9 };
	const Time t2{ t1 };
	cout << "t0: ";
	t0.printTime();
	cout << "t1: ";
	t1.printTime();
	cout << "t2: ";
	t2.printTime();
	return 0;
}
