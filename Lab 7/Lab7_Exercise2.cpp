// Lab7_Exercise2
#include<iostream>
using namespace std;
class IntArray
{
private:
	int m_len{ 0 }; // default variables
	int* m_data{ nullptr };
public:
	IntArray(int len) // constructor
		: m_len{ len } 
	{
		m_data = new int[m_len];
	}
	//Implimentation of copy constructor which copies the value of the array
	IntArray(const IntArray& copy): m_len(copy.m_len){ // copy constructor which copies the values of the class variables
		m_data = new int[copy.m_len];
	}
	~IntArray() {//destructor
		if (m_data) delete[] m_data;
	}
	void set(int index, int value) { // set function which sets the given value to class variable
		if (index >= 0 && index < m_len)
			m_data[index] = value;
	}
	int get(int index, int err) const { // get function which returns m_data
		if (index >= 0 && index < m_len)
			return m_data[index];
		else
			return err;
	}
};
int main() {
	int i;
	cout << "=== IntArray a{ 10 } ===" << endl;
	IntArray a{ 10 };
	for (i = 0; i < 10; ++i)
		a.set(i, i * 10 + 5);
	cout << "a: ";
	for (i = 0; i < 10; ++i)
		cout << a.get(i, -1) << ' ';
	cout << endl;
	cout << "=== IntArray b{ a } ===" << endl;
	IntArray b{ a };
	cout << "b: ";
	for (i = 0; i < 10; ++i)
		cout << a.get(i, -1) << ' ';
	return 0;
}
