// Finding Min & Max in an Array

#include <iostream>
using namespace std;

int main(){

    int marks[10] = {67, 78, 88, 45, 63, 94, 99, 87, 77, 73};

    // Finding minimum
    int minimum = marks[0];
    int min_index = 0;

    for(int i = 0; i < 10; i++){
        if(marks[i] < minimum){
            minimum = marks[i];
            min_index = i;
        }
    }

    cout<<"\nMinimum Marks was:- "<<minimum<<" on index -> "<<min_index;
    
    // Finding Maximum
    int maximum = marks[0];
    int max_index = 0;
    
    for(int i = 0; i < 10; i++){
        if(marks[i] > maximum){
            maximum = marks[i];
            max_index = i;
        }
    }

    cout<<"\nMaximum Marks was:- "<<maximum<<" on index -> "<<max_index;

    cout<<endl;
    return 0;
}
