// Hierarchical Inheritance

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

class MedicalStudent : public Student {
    
    public:

    void performOperation() {
        cout << name << " is performing operation" << endl;
    }
    
};

int main(){

    EngineeringStudent *e1 = new EngineeringStudent();

    e1->name = "Akash";
    e1->age = 20;
    e1->markAttedance();
    e1->attendLab();


    MedicalStudent *m1 = new MedicalStudent();
    
    m1->name = "Awnish";
    m1->age = 21;
    m1->markAttedance();
    m1->performOperation();

    return 0;
}