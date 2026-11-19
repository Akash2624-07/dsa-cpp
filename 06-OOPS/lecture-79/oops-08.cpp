// Multi-Level Inheritance

#include <iostream>
using namespace std;

class Student {
    
    public:

    string name;
    int age;

    void markAttedance() {
        cout << name << " is present" << endl;
    }
};

class EngineeringStudent : public Student{
  
    public:

    void attendLab() {
        cout << "Lab attended by " << name << endl;
    }

};

class CSEStudent : public EngineeringStudent {
    public:
    void writeCode() {
        cout << name << " is writing code" << endl;
    }
};

int main(){

    CSEStudent *cs1 = new CSEStudent();

    cs1->name = "Akash";
    cs1->age = 20;

    cs1->markAttedance();
    cs1->attendLab();
    cs1->writeCode();

    return 0;
}