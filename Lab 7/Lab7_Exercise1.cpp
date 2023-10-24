// Lab7_Exercise1
#include <iostream>
using namespace std;

class Rectangle {
private:
	int h = 0; // class default variables 
	int w= 0;
public:
	Rectangle& setWidth(int width) { 
		w = width;
		return *this; // returning this pointer for chaining 
	}
	Rectangle& setHeight(int height) {
		h = height;
		return* this; // returning this pointer for chaining 
	}
	void Display(void) { //Display Function that displays all info
		cout << "Width: " << w << ", Height: " << h << endl;
	}
};

int main() {
	Rectangle rect;
	rect.Display();
	rect.setWidth(10).setHeight(20).Display(); // chaining
	return 0;
}

