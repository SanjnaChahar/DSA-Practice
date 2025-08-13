#include <iostream>
using namespace std;

bool isPowerofThree(int n){
    while(n % 3 == 0){
        n /= 3;
    }
    return n == 1;
}

int main(){
    int n;
    cin >> n;
    cout << (isPowerofThree(n) ? "True" : "False" );
    return 0;
}