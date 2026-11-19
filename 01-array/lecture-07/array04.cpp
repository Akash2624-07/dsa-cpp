// Linear Search in an Array

#include <iostream>
using namespace std;

int main(){

    int arr[10] = {32, 42, 17, 89, 10, 39, 66, 99, 54, 44};
    int target;

    cout << "Enter the Number to search for- ";
    cin >> target;

    // Loop through the array
    bool found = false;
    int index;
    for(int i = 0; i < 10; i++){
        if(arr[i] == target){
            found = true;
            index = i;
            break;
        }
    }

    if(found)
        cout << "\nTarget was found at index -> " << index;
    else
        cout << "\nTarget was not found\n";

    cout << endl;
    return 0;
}