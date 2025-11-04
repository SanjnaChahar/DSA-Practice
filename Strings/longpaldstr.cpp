//we have to tell the longest palindromic substring
#include <iostream>
#include <string>
using namespace std;

string longestPalindrome(string s){   //babad
    int n = s.size();
    int maxLen = 1;
    int start = 0;

    //for odd length
    for(int i=0; i<n; i++){
        int left = i-1, right = i+1;
        while(left >= 0 && right < n && s[left] == s[right]){
            int currLen = right - left + 1;
            if(currLen > maxLen){
                maxLen = currLen;
                start = left;
            }
        }

        //for even length
        left = i; 
        right = i+1;
        while(left >= 0 && right < n && s[left] == s[right]){
            int currLen = right - left + 1;
            if(currLen > maxLen){
                maxLen = currLen;
                start = left;
            }
        }
    }
    return s.substr(start, maxLen);
}

int main(){
    string s;
    cout << "Enter the String: ";
    getline(cin, s);

    string result = longestPalindrome(s);
    cout << "Longest palindrome substring is: " << result << endl;
    return 0;

}

