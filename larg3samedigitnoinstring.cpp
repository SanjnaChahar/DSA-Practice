#include <iostream>
using namespace std;

string largestGoodinteger(string num){
    char prev = 'A';
    int count = 0;
    char maxD = ' ';

    for(char current : num){
        if(current == prev){
            count += 1;
        }
        else{
            count = 1;
        }

        if(count == 3){
            maxD = max(maxD, current);
        }

        prev = current;
    }

    if(maxD == ' '){
        return ""; //no good integer found
    }

    return string(3, maxD);

}

int main(){
    string num;
    cin >> num;
    string result = largestGoodinteger(num);
    cout << result << endl;
    return 0;
}