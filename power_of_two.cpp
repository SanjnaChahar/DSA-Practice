// Problem: 231. Power of Two


#include <iostream>
using namespace std;

bool isPowerofTwo(int n){
    if(n<=0) return false;
    while(n%2 == 0){
        n /= 2;
    }
    return n == 1;
}

int main(){
    int n;
    cin >> n;
    cout << (isPowerofTwo(n) ? "true" : "false" );
    return 0;
}