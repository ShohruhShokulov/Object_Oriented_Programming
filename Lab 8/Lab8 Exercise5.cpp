// Lab8 Exercise5
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

class IntArray {
private:
    int m_len{ 0 };
    int* m_data{ nullptr };

    friend void setArray(IntArray& array, const int* data, int len);
    friend void displayArray(const IntArray& array);

public:
    IntArray(int len) : m_len{ len } {
        m_data = new int[m_len];
    }

    ~IntArray() {
        if (m_data) delete[] m_data;
    }
};

// Friend function to set the elements of the IntArray object's array
void setArray(IntArray& array, const int* data, int len) {
    for (int i = 0; i < len; ++i) {
        // Ensure we don't access out-of-bounds elements
        if (i < array.m_len) {
            array.m_data[i] = data[i];
        }
    }
}

// Friend function to display the array values with their indices
void displayArray(const IntArray& array) {
    for (int i = 0; i < array.m_len; ++i) {
        cout << "[" << setw(2) << i << "] " << array.m_data[i] << endl;
    }
}

const int arSize = 20;

int main() {
    int i;
    int data[arSize];
    IntArray ar{ arSize };

    srand((unsigned int)time(NULL));

    // Fill the 'data' array with random values
    for (i = 0; i < arSize; ++i) {
        data[i] = rand() % 100;
    }

    // Use the 'setArray' function to set the values in the 'IntArray' object
    setArray(ar, data, arSize);

    // Use the 'displayArray' function to display the values with their indices
    displayArray(ar);

    return 0;
}


