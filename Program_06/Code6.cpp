#include <iostream>              // Includes the input/output library
using namespace std;             // Allows direct use of cout

class Demo {                     // Defines a class named Demo
public:

    Demo() {                     // Constructor of the class
        cout << "Constructor called" << endl;  // Displays constructor message
    }

    ~Demo() {                    // Destructor of the class
        cout << "Destructor called" << endl;   // Displays destructor message
    }
};

int main() {                     // Main function where execution begins

    Demo obj;                    // Creates an object and automatically calls constructor

    return 0;                    // Ends main and destroys the object
}
