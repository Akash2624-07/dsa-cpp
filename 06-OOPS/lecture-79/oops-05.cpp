// Showcasing Inheritance

#include <iostream>
using namespace std;

class Student{

    protected:
    
    string name;
    int age;
    int roll;
    string college;

    public:
    Student(){};    //Default Constructor

    Student(string n, int a){
        name = n;
        age = a;
    }

    void markAttendance(){
        cout << name << " is present." << endl;
    }

};

// Engineering Student "is-a" student.

class EngineeringStudent : public Student{

    public:

    EngineeringStudent(string n, int a){
        name = n;
        age = a;
    }

    void printDetails(){
        cout << "Name is " << name << " and age is " << age <<endl;
    }

};

int main(){

    Student *s1 = new Student("Akash", 20);

    EngineeringStudent *e1 = new EngineeringStudent("Akash", 20);

    e1->markAttendance();
    e1->printDetails();
    
    return 0;

}