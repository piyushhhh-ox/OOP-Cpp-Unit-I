#include <iostream>              // Includes the input/output library
using namespace std;             // Allows direct use of cout

int main() {                     // Main function where execution begins

    int marks = 45;              // Stores the student's marks

    if (marks >= 40) {            // Checks whether marks are 40 or more
        cout << "Pass";           // Displays Pass if the condition is true
    }
    else {                        // Executes when the if condition is false
        cout << "Fail";           // Displays Fail if marks are below 40
    }

    return 0;                    // Ends the program successfully
}
