#include <iostream>
#include <string>
using namespace std;

int max69num(int num){
    //convert num into string as num is an integer
    string s = to_string(num);
    for(int i=0; i<s.size(); i++){
        if(s[i] == '6'){
            s[i] = '9';
            break;
        }
    }
    int result = stoi(s);
    return result;
}

int main(){
    int num;
    cin >> num;
    cout << max69num(num);
    return 0;
}