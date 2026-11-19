// Sum of first N numbers

#include <iostream>
using namespace std;

int Sum(int num){

    if(num == 1)
        return 1;
    return num+ Sum(num-1);
}

int main(){

    cout<<Sum(10)<<endl;

    return 0;

}