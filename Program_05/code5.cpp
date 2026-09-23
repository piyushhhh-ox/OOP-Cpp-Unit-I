#include <iostream>              // Includes the input/output library
using namespace std;             // Allows direct use of cout and endl

class Student {                  // Defines a class named Student
public:                          // Makes the following members publicly accessible

    string name;                 // Stores the student's name
    int age;                     // Stores the student's age

    void show() {                // Defines a member function to display details
        cout << name << " " << age << endl;  // Displays name and age
    }
};

int main() {                     // Main function where program execution begins

    Student s1;                  // Creates an object s1 of the Student class

    s1.name = "Amit";            // Assigns "Amit" to the name of s1
    s1.age = 20;                 // Assigns 20 to the age of s1

    s1.show();                   // Calls the show() function using the object

    return 0;                    // Ends the program successfully
}
