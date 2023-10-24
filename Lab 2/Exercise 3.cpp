// Exercise 3
#include <iostream>

using namespace std;

// Function to input elements into a matrix
void MatInput(int* mat, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i * cols + j];
        }
    }
}

// Function to perform matrix multiplication
void MatMul(int* mat1, int* mat2, int* result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i * cols + j] = 0; // Initialize the result matrix element to 0
            for (int k = 0; k < cols; k++) {
                result[i * cols + j] += mat1[i * cols + k] * mat2[k * cols + j];
            }
        }
    }
}

// Function to display a matrix
void MatDisplay(int* mat, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i * cols + j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int row = 3, col = 3; // Size of the matrices
    int* mat1, * mat2, * matMul;

    // 1. Allocate memory buffers for the 3 matrices
    mat1 = new int[row * col];
    mat2 = new int[row * col];
    matMul = new int[row * col];

    // 2. Use the buffers
    cout << "Enter elements in 1st matrix of size " << row << 'x' << col << ":\n";
    MatInput(mat1, row, col);
    cout << "Enter elements in 2nd matrix of size " << row << 'x' << col << ":\n";
    MatInput(mat2, row, col);
    MatMul(mat1, mat2, matMul, row, col);
    cout << "Multiplication of two matrices: \n";
    MatDisplay(matMul, row, col);

    // 3. Free the allocated buffers
    delete[] mat1;
    delete[] mat2;
    delete[] matMul;

    return 0;
}
