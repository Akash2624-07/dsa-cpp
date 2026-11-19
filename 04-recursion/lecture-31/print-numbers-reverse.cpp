// Print numbers from 10 to 1

#include <iostream>
using namespace std;

void Print(int num){

    if(num==0)
        return;
    
    cout<<num<<" ";

    Print(num-1);
}

int main(){

    Print(10);
    return 0;
}