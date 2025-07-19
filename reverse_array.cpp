#include <iostream>
using namespace std;

void revArr(int n, int arr[]){
    //with extra space
    //i am reversing an array by creating an other array then i will copy elements of orginal array in reverse order in this array
    int revA[n];

    for(int i=0; i<n; i++){
        revA[i] = arr[n-1-i];
    }
    cout << "Reverse Array: ";
    for(int i=0; i<n; i++){
        cout << revA[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements inside the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    //now we'll call the reverse Array
    revArr(n, arr);

    return 0;
}