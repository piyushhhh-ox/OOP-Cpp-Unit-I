#include <iostream>              // Includes the input/output library
using namespace std;             // Allows direct use of cout

class Counter {                  // Defines a class named Counter
public:

    static int count;            // Declares a static data member

    Counter() {                  // Constructor of the class
        count++;                 // Increases the shared count by 1
    }
};

int Counter::count = 0;          // Initializes the static member to 0

int main() {                     // Main function where execution begins

    Counter c1;                  // Creates first object
    Counter c2;                  // Creates second object
    Counter c3;                  // Creates third object

    cout << "Objects created: " << Counter::count << endl;  // Displays total objects

    return 0;                    // Ends the program successfully
}
