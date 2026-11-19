// Fundamentals of array

#include <iostream>
using namespace std;

int main(){

    // Declaring & itialising in an array
    int arr1[5]; // -> filled with garbage values
    int arr2[5] = {1, 2, 3, 4, 5};
    int arr3[] = {1, 2, 3, 4};
    int arr4[3] = {1}; // -> rest of array isnt filled with garbage values and will be assigned 0;

    // So we can do this to give all of array the intialisation with 0
    int arr5[10] = {0};

    // Accessing the array;
    cout << arr2[1] << " ";
    cout << arr2[3] << " ";

    // Via Loops
    cout << "\nValues in arr1:- \n";
    for (int i = 0; i < 5; i++){
        cout << arr1[i] << " ";
    }

    cout << "\nValues in arr2:- \n";
    for (int i = 0; i < 5; i++){
        cout << arr2[i] << " ";
    }

    cout << "\nValues in arr3:- \n";
    for (int i = 0; i < 4; i++){
        cout << arr3[i] << " ";
    }

    cout << "\nValues in arr4:- \n";
    for (int i = 0; i < 3; i++){
        cout << arr4[i] << " ";
    }

    cout << "\nValues in arr5:- \n";
    for (int i = 0; i < 10; i++){
        cout << arr5[i] << " ";
    }

    cout << endl;
    return 0;
}