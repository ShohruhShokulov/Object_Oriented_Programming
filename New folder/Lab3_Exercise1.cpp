// Lab3_Exercise1
#include <iostream>
using namespace std;

int main() {
    int i; // Declare an integer variable 'i' to store the user's input.

    while (true) { // Start an infinite loop that will continue until explicitly broken.
        cout << "Enter your score of the exam: "; // Prompt the user to enter their exam score.
        cin >> i; // Read the user's input and store it in 'i'.

        // Check if the input is outside the valid score range (0-100).
        if (i > 100 || i < 0) {
            cout << "End of the program!"; // Display a message indicating the program's end.
            break; // Exit the loop and end the program.
        }

        // Determine the grade based on the input score and display a corresponding message.
        if (i > 89)
            cout << "Congratulations. Your grade: A \n";
        else if (i > 79)
            cout << "Your grade: B\n";
        else if (i > 69)
            cout << " Your grade: C\n";
        else if (i > 59)
            cout << "Your grade: D\n";
        else if (i < 60)
            cout << " Sorry. Your grade: F\n";
    }

    return 0; // Exit the program with a return code of 0 (indicating successful execution).
}
