// Single Inheritance

#include <iostream>
using namespace std;

class Student{

    public:
    string name;
    int age;

    void markAttendance(){
        cout << name << " is present" << endl;
    }

};

class EngineeringStudent : public Student{

    public:

    void attendLab(){
        cout << "Lab attended by " << name << endl;
    }

};

int main(){

    EngineeringStudent *e1 = new EngineeringStudent();

    e1->name = "Akash";
    e1->age = 20;

    e1->markAttendance();
    e1->attendLab();

    return 0;
}