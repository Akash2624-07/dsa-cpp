//  Reverse an Array

#include <iostream>
using namespace std;

int main()
{

    int n;
    int arr[100];
    cout << "Enter the size of the array:- \n";
    cin >> n;

    cout << "Enter the values of array:- \n";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Reverse the array
    for (int i = 0; i < n / 2; i++){
        swap(arr[i], arr[n - i - 1]);
    }

    // Output the array
    cout << "\nReversed Array:-\n";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}