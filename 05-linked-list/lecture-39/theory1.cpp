// Basics of OOPs

#include <iostream>
using namespace std;

class Student{
    public:

    // Properties
    int roll, age;
    string name;

    // Constructor
    Student(string name, int age, int roll){
        this->name = name;
        this->age = age;
        this->roll = roll;
    }

    // Methods
    void show(){
        cout<<"Name :- "<<name<<"\n"
            <<"Age :- "<<age<<"\n"
            <<"Roll No :- "<<roll<<"\n";
    }

};

int main(){

    Student S1("Akash",20,24);
    Student S2("Sanya", 21, 32);

    S1.show();
    S2.show();

    // Rest is in reference, read it.
}