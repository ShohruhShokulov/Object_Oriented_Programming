// Lab6_Exercise5
#include <iostream>
using namespace std;

// Define a class called Triangle to represent triangles.
class Triangle {
private:
    double base;
    double height;

public:
    // Constructor that takes base and height as parameters and initializes the private members.
    Triangle(double b, double h) : base(b), height(h) {}

    // Destructor to print a message when an object is destroyed.
    ~Triangle() {
        cout << "Destructor: base: " << base << ", height: " << height << endl;
    }

    // Getter methods to retrieve the base and height of the triangle.
    double getBase(void) { return base; }
    double getHeight(void) { return height; }

    // Calculate and return the area of the triangle.
    double area(void) const {
        double area = 0.5 * base * height;
        return area;
    }
};

int main() {
    // Create two Triangle objects, t1 and t2, with different base and height values.
    Triangle t1{ 10.5, 4.5 };
    Triangle t2{ 7.0, 3.0 };

    // Display information about the first triangle (t1).
    cout << "Triangle t1{ 10.5, 4.5 }" << endl;
    cout << " base: " << t1.getBase() << endl;
    cout << " height: " << t1.getHeight() << endl;
    cout << " area: " << t1.area() << endl << endl;

    // Display information about the second triangle (t2).
    cout << "Triangle t2{ 7.0, 3.0 }" << endl;
    cout << " base: " << t2.getBase() << endl;
    cout << " height: " << t2.getHeight() << endl;
    cout << " area: " << t2.area() << endl << endl;

    return 0;
}

