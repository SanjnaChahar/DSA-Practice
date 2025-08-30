#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int seclargest(vector<int> &arr){
    if(arr.size() < 2) return -1;

    int lg = INT_MIN, seclg = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > lg){
            seclg = lg;
            lg = arr[i];
        }
        else if(arr[i] > seclg && arr[i] != lg){
            seclg = arr[i];
        }
    }

    if(seclg == INT_MIN){
        return -1;
    } else{
        return seclg;
    }
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements in array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        cout << arr[i];
    }

    int seclg = seclargest(arr);

    cout << "Second largest element of Array is: " << seclg << endl;

    return 0;
}