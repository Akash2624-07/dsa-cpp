// Constructors and Methods in OOPs.

#include <iostream>
using namespace std;

class Student{

public:
    string name;
    int age;
    int roll;
    string college;

    // A constructor is used to intialise an object with a value
    Student(string n, int a, int r, string c){ //Parameterised Constructor
        name = n;
        age = a;
        roll = r;
        college = c;
    }

    // If we create a constructor ourselves, C++ doesn't provide us with its default constructor, so we need to make ourselves on.
    
    Student(){ //Default Constructor
        //empty body
    }

    // Methods are used to emulate behaviours from real life

    void markAttendance() {
        cout << name <<" is present" << endl;
    }

    void print(){
        cout << name << " " << age << " " << roll << " " << " " << college << endl;
    }

};

int main(){

    Student *s1 = new Student("Akash", 20, 24, "IIT Kgp");

    s1->markAttendance();

    s1->print();

    return 0;

}


