#include <iostream>              // Includes the input/output library
using namespace std;             // Allows direct use of cout

int main() {                     // Main function where execution begins

    int marks[5] = {78, 82, 91, 67, 88};  // Creates an array to store 5 marks

    for (int i = 0; i < 5; i++) {          // Loops through all 5 array elements
        cout << marks[i] << " ";            // Displays the current mark
    }

    return 0;                    // Ends the program successfully
}
