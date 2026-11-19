// Multiple Inheritance

#include <iostream>
using namespace std;

class Swimmer{

    public:

    void swim(){
        cout << "Swimming\n";
    }

};

class Flyer{

    public:
    
    void fly(){
        cout << "Flying\n";
    }

};

class Duck : public Swimmer, public Flyer{

    public:

    void quack(){
        cout << "Quack!" << endl;
    }
    
};


int main(){

    Duck *d1 = new Duck();

    d1->swim();
    d1->fly();
    d1->quack();

    return 0;
}