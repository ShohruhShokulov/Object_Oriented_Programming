// Lab3_Exercise5
#include <iostream>  
#define _USE_MATH_DEFINES  
#include <cmath>  
#define M_PI 3.14159265358979323846  // Define the value of M_PI manually
using namespace std;

// defining user defined namespace named 'shape'
namespace shape {
    // Function to calculate the area of a rectangle
    int rec_area(int W, int L) {
        if (W <= 0, L <= 0) {
            return 0;  // Return 0 for invalid input arguments
        }
        return W * L;  // Calculate and return the area of the rectangle
    }

    // Function to calculate the area of a triangle
    double tri_area(int b, int h) {
        double area;  // Declare a variable to store the area
        if (b <= 0, h <= 0) {
            return 0;  // Return 0 for invalid input arguments
        }
        area = 0.5 * b * h;  // Calculate the area of the triangle
        return area;  // Return the calculated area
    }

    // Function to calculate the area of a circle
    double cir_area(int a) {
        if (a <= 0) {
            return 0;  // Return 0 for invalid input argument
        }
        double A = M_PI * a * a;  // Calculate the area of the circle using M_PI
        return A;  // Return the calculated area
    }
}

int main() {
    cout << "Area of Rectangle(W:20, L:10):";
    cout << shape::rec_area(20, 10) << endl;

    cout << "Area of Triangle(b:20, h:10):";
    cout << shape::tri_area(20, 10) << endl;

    cout << "Area of Circle(r:20):";
    cout << shape::cir_area(20) << endl;

    return 0;
}
