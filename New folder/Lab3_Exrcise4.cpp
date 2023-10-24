// Lab3_Exrcise4
#include <iostream>
using namespace std;

// Function prototypes
int GetMaximum(int*, int);
int GetMinimum(int*, int);
double GetAverage(int*, int);

int main() {
    int a; // Number of data user wants to input
    cout << "# of data want to input: ";
    cin >> a;
    int* array = new int[a]; // Dynamically allocate an array of integers

    // Loop to get data from the user
    for (int i = 0; i < a; i++) {
        cout << i << ". Input an integer: ";
        cin >> array[i];
    }

    // Call functions to calculate and display minimum, maximum, and average values
    cout << "Minimum value is " << GetMinimum(array, a) << endl;
    cout << "Maximum value is " << GetMaximum(array, a) << endl;
    cout << "Average value is " << GetAverage(array, a);

    // Deallocate the dynamically allocated array to prevent memory leaks
    delete[] array;

    return 0;
}

// Function to find the maximum value in an array
int GetMaximum(int* array, int a) {
    int maximum;
    maximum = array[0];
    for (int i = 0; i < a; i++) {
        if (array[i] > maximum)
            maximum = array[i];
    }
    return maximum;
}

// Function to find the minimum value in an array
int GetMinimum(int* array, int a) {
    int minimum;
    minimum = array[0];
    for (int i = 0; i < a; i++) {
        if (array[i] < minimum)
            minimum = array[i];
    }
    return minimum;
}

// Function to calculate the average value of elements in an array
double GetAverage(int* array, int a) {
    double sum = 0;
    for (int i = 0; i < a; i++) {
        sum += array[i];
    }
    return double(sum / a);
}
