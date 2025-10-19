#include <bits/stdc++.h>
using namespace std;

string removeOuterParentheses(const string &s) {
    string ans;
    int depth = 0;
    for (char ch : s) {
        if (ch == '(') {
            if (depth > 0) ans.push_back('(');
            depth++;
        } else { // ch == ')'
            depth--;
            if (depth > 0) ans.push_back(')');
        }
    }
    return ans;
}

int main() {
    string s;
    // example: you can directly put s = "(()())(())" or read from input
    s = "(()())(())";
    cout << removeOuterParentheses(s) << endl; // prints: ()()()
    return 0;
}
