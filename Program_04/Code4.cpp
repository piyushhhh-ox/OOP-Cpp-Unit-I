#include <iostream>              // Includes the input/output library
using namespace std;             // Allows direct use of cout

int add(int, int);               // Function prototype for the add function

int main() {                     // Main function where execution begins

    int a = 10, b = 20;          // Declares and initializes two integer variables

    cout << "Sum = " << add(a, b) << endl;  // Calls add() and displays the returned sum

    return 0;                    // Ends the program successfully
}

int add(int x, int y) {          // Defines the add function with two parameters

    return x + y;                // Adds x and y and returns the result
}
