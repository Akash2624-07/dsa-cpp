// Taking user input in array;

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the size of array:- ";
    cin >> n;

    // int arr[n]; --> Array size should always be fixed during compile time itself.
    // Taking array size during runtime can cause Stack Overflow and program will crash, more on this when we learn Stacks and Pointers.

    // instead -
    int arr[100];

    if (n < 0 && n > 100){
        cout << "Please choose a value form 1 to 100";
        return 1;
    }

    cout << "\nEnter Values of the array:- \n";
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout << "\nValue of the array were:-\n";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    cout << "\nAddresses of the array were:-\n";
    for(int i = 0; i < n; i++){
        cout<<&arr[i]<<" ";
    }

    cout<<endl;
    return 0;
}