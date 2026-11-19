// Creating a class and objects

#include <iostream>
using namespace std;

class Student{

public:
    string name;
    int age;
    int roll;
    string college;
};

int main(){

    // Creating an object in stack
    Student s1;

    // Accessing variables
    s1.name = "Akash";
    s1.age = 20;
    s1.roll = 24;
    s1.college = "IIT Kgp";

    // Printing these values
    cout << s1.name << " " << s1.age << " " << s1.roll << " " << s1.college << endl;

    // Creating an object in heap
    Student *s2 = new Student; // s2 is a pointer which stores address of heap allocation

    // Accessing variables
    (*s2).name = "Ankit";

    // For simpler syntax we should use -> ( arrow operator / class memeber access operator)
    s2->age = 20;
    s2->roll = 34;
    s2->college = "IITG";

    // Printing these values
    cout << s2->name << " " << s2->age << " " << s2->roll << " " << s2->college << endl;

    return 0;
}