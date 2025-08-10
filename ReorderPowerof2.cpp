#include <bits/stdc++.h>
using namespace std;

bool reorderedPowerof2(int n){
    //step 1: convert the num into string
    string s = to_string(n);
    //step 2: sort the number
    sort(s.begin(), s.end());

    //for loop till constraint is valid in power of 2
    for(int i=0; i<31; i++){
        int p = 1 << i; //power of 2 by shifting on the left side, num keeps getting doubled

        string t = to_string(p);
        sort(t.begin(), t.end());

        if(s == t) return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;

    cout << (reorderedPowerof2(n)? "true" : "false") << '\n';
    return 0;

}