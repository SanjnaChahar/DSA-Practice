#include <iostream>
using namespace std;

//product of digits 

int prodofdigits(int num){
    if(num == 0) return 0;

    num = abs(num);     //for negative num, abs makes a negative no positive and keeps the positive same

    int product = 1;
    while(num > 0){
        int digit = num % 10;
        product = product * digit;
        num = num/10;
    }
    return product;
}




int main(){
    int n;
    cout << "Enter the no of elements in array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements in array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }


    cout << "output in result which we get is: ";
    for(int i=0; i<n; i++){
        int result = prodofdigits(arr[i]);
        cout << result << " ";

    }

}

//there is one more way in which i can solve this que - by converting the digit into a string then applying a loop on each string as from 1st char to the last digit of that element
// int prodofdigits(int num){
    // string s = to_string(num); //this is how we convert the num into a string for eg 231 will become "231"

    // int product = 1; //as i have to find the product so at first i'll initialise the prod with 1

    // for(char c : s){ //for loop from 1st char of digit till string ends for eg "231" it will start with 2 then 3 then 1 
        //but to use each digit of a string as an integer- first we'll have to convert it into integer
        //so that we'll not get a result in its ASCII vale form
        // int digit = c - '0'; //this converts char digit into a integer digit
        // product = product * digit;
    // }

    // return product
// }