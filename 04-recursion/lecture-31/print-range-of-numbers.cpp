// Print numbers from x to y 

#include <iostream>
using namespace std;

void Print(int num, int final){

    if(num==final+1)
        return;

    cout<<num<<" ";
    Print(num+1, final);
}

int main(){

    Print(1,20);

    return 0;
}