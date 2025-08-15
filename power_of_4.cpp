#include <iostream>
using namespace std;

bool isPowerofFour(int n){
    if(n <= 0) return false;

    while(n % 4 == 0){
        n /= 4;
    }
    return n==1;
}

int main(){
    int n;
    cin >> n;
    cout << (isPowerofFour(n)? "True": "False");
    return 0;
}