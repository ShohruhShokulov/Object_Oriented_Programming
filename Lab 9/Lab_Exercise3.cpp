// Lab_Exercise3
#include <iostream>
using namespace std;

class Fruit {
private:
	string name;
	string colour;
public:
	Fruit(const string& n,const string& c) :name{n}, colour{c} {};

	const string& getName(void)const {
		return name;
	}

	const string& getColor(void)const {
		return colour;
	}
};

class Apple :public Fruit {
public:
	Apple(const string& colour = "" , const string& name = "apple") :Fruit(name, colour) {};
};

class Banana : public Fruit {
public:
	Banana(const string& name = "banana", const string& colour = "yellow") :Fruit{ name,colour } {};
};

int main() {
	Apple a{ "red" };
	Banana b;
	cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	return 0; return 0;
}
