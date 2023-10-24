// Exercise 4
#include <iostream>
#define size 50
using namespace std;

class Person {
public:
	char name[size];
	char gender[size];
	int age;
	char email[size];

	void introduceMyself() {
		cout << "My name is " << name << endl
			<< "I am " << gender << " and " << age << " years old." << endl
			<< "My email address is " << email<<endl;
	}

};

int main() {
	Person ryu = { "Victor Ryu", "male", 30, "IGS2130v1@inha.ac.kr" };
	Person laura = { "Laura Lee", "female", 23, "IGS2130v2@inha.ac.kr" };
	ryu.introduceMyself();
	cout << endl;
	laura.introduceMyself();
	return 0;
}

