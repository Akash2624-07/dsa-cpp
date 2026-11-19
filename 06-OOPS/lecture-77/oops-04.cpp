// Example of a Bank Account

#include <iostream>
using namespace std;

class BankAccount{

    private:
    string name;
    int balance;

    public:
    int withdraw(int amount){

        if(amount<0){
            cout << "Withdrawing amount cannot be less than 0" << endl;
            return -1;
        }

        if(amount > balance){
            cout << "Low Balance" << endl;
            return -1;
        }

        balance -= amount;
        
        cout << "Amount " << amount << " withdrawn successfully" << endl;
        return balance;
    }

    int deposit(int amount){

        if(amount<0){
            cout << "Withdrawing amount cannot be less than 0" << endl;
            return -1;
        }

        balance += amount;

        cout << "Amount " << amount << " deposited" << endl;
        return balance;
    }

    // Since our variable is private, we can use getter & setter functions to access them.
    
    string getName(){
        return name;
    };

    int getBalance(){
        return balance;
    }

    void setName(string n){
        
        if(n.length() < 3){
            cout << "Name is too short" << endl;
            exit(1);
        }

        name = n;

    }

    // Setter function for balance is not recommended since withdraw() & deposit() manages that

    BankAccount(string n){
        name = n;
        balance = 0;    // use deposit function to update it
    }

};

int main(){

    BankAccount *b1 = new BankAccount("Akash");

    b1->deposit(1000);
    b1->withdraw(200);

    cout << "Name: " << b1->getName() << endl;
    cout << "Balance: " << b1->getBalance() << endl;

    return 0;
    
}