// Encapsulation in OOPs


#include <iostream>
using namespace std;

class Student{

    private: //properties are kept prrivate as to not provide anyone direct access to them.
    string name;
    int age;
    int roll;
    string college;

    public: //Methods and Constructors are kept public so any modification to properties can pnly happen through them,and we can apply extra checks and bounds.
    Student(string n, int a, int r, string c){
        name = n;
        age = a;
        roll = r;
        college = c;
    }

    Student(){

    }

    // behaviouds of an object --> functions --> methods

    void markAttendance() {
        cout << name << " is present" << endl;
    }

    void print() {
        cout << name << " " << age << " " 
        << roll << " " << college << endl;
    }

};

int main(){
    
    Student s1;

    // Below actions are not valid now, we will need setter functions to change the values of the variables
    
    // s1.name = "Akash";
    // s1.age = 20;
    // s1.roll = 24;
    // s1.college = "IIT Kgp";

    // Or, we can use contructor

    Student s2("Akash", 20, 24, "IIT Kgp");

    s2.print();

    return 0;
}

