/// Lab9_Exercise1
#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

class IntArray
{
private:
	int m_len{ 0 };
	int* m_data{ nullptr };
public:
	IntArray(int len) : m_len{ len }
	{
		m_data = new int[m_len];
	}
	~IntArray() {
		if (m_data) delete[] m_data;
	}

	friend class IntArrayHandler; // // Making the IntArrayHandler class a friend of IntArray
};

class IntArrayHandler {
private:
	IntArray* m_array; // decloration of m_array 
public:
	IntArrayHandler(IntArray* array) : m_array{ array } {}; // constructor

	// setIntArray function which set the value given to the IntArray
	void setIntArray(IntArray* newarray) {
		m_array = newarray;
	}

	//setArray function which initialies the value 
	void setArray(int* data, int size) {
		if (m_array) {
			for (int i = 0; i < size; i++) {
				m_array->m_data[i] = data[i];
			}
		}
	}

	//displayArray function which displays the values of the array
	void displayArray() {
		if (m_array) {
			for (int i = 0; i < m_array->m_len; i++) {
				cout << "[" << i << "]" << m_array->m_data[i] << endl;
			}
		}
	}

	//stat function which outputs the values og sum, average and lenth of array
	void stat() {
		if (m_array) {
			int sum = 0;
			for (int i = 0; i < m_array->m_len; i++) {
				sum += m_array->m_data[i];
			}
			cout << "# of elements: " << m_array->m_len << endl;
			cout << "Sum: " << sum << endl;
			cout << "Average: " << double(sum / m_array->m_len) << endl;
		}
	}
};
const int arSize = 20;

int main() {
	int i;
	int data1[arSize], data2[arSize];
	IntArray ar1{ arSize }, ar2{ arSize };
	srand((unsigned int)time(NULL));
	for (i = 0; i < arSize; ++i) {
		data1[i] = rand() % 100;
		data2[i] = rand() % 100;
	}
	IntArrayHandler handler{ &ar1 };
	handler.setArray(data1, arSize);
	cout << "== ar1: displayArray() ===" << endl;
	handler.displayArray();
	cout << "====== ar1: stat() =======" << endl;
	handler.stat();
	cout << "==========================" << endl;
	handler.setIntArray(&ar2);
	handler.setArray(data2, arSize);
	cout << endl << "== ar2: displayArray() ===" << endl;
	handler.displayArray();
	cout << "====== ar2: stat() =======" << endl;
	handler.stat();
	cout << "==========================" << endl;
	return 0;
}




