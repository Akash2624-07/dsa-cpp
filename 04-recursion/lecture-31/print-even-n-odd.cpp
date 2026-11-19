// Print Even and Odd numbers from n to 1;

#include <iostream>
using namespace std;

void PrintEven(int n){
    if(n==0)
        return;

    if(n%2==1)  n--;
    
    cout<<n<<" ";
    PrintEven(n-2);
}

void PrintOdd(int n){
    if(n<=0)    
        return;

    if(n%2==0)  n--;   

    cout<<n<<" ";
    PrintOdd(n-2);
}

int main(){

    PrintEven(10);
    cout<<endl;
    PrintOdd(10);
    cout<<endl;

    return 0;
}