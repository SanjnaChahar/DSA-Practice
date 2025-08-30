#include <iostream>
using namespace std;

bool isArrsorted(int arr[], int n){
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
     
    int arr[n];
    cout << "Enter the element in array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    int result = isArrsorted(arr, n);

    if(result){
        cout << "Array is Sorted" << endl;
    } else{
        cout << "Array is not Sorted" << endl;
    }

    return 0;

}