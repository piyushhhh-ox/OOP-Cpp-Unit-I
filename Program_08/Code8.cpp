#include <iostream>              // Includes the input/output library
using namespace std;             // Allows direct use of cout

class Demo {                     // Defines a class named Demo
private:
    int x;                       // Private data member

public:
    Demo(int a) {                // Constructor to initialize x
        x = a;                   // Assigns the value of a to x
    }

    inline void show() {         // Inline function to display the value
        cout << "x = " << x << endl;  // Displays the value of x
    }

    friend void display(Demo);   // Declares display() as a friend function
};

void display(Demo d) {           // Defines the friend function
    cout << "Friend function: " << d.x << endl;  // Accesses private member x
}

int main() {                     // Main function where execution begins

    Demo obj(10);                // Creates an object and initializes x to 10

    obj.show();                  // Calls the inline function
    display(obj);                // Calls the friend function

    return 0;                    // Ends the program successfully
}
