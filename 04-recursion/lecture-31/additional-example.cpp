// In recursion, code written before the recursive call executes while moving down the call stack, 
// and code written after the recursive call executes while unwinding back up the call stack. 
// Therefore, work done before the recursive call typically produces output in descending order, while work done after the recursive call produces output in ascending order.

// Following example is a simple demonstration of this property.

#include <iostream>
using namespace std;

void MovingDown(int num){

    if(num==0)
        return;

    cout<<num<<" ";
    MovingDown(num-1);
}

void MovingUp(int num){

    if(num==0)
        return;

    MovingUp(num-1);
    cout<<num<<" ";
}

int main(){

    MovingDown(20);
    
    cout<<endl;

    MovingUp(20);

    return 0;
}
