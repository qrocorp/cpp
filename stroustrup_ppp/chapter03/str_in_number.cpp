#include "std_lib_facilities.h"

int main(){
    string s;
    cout << "Enter a number in string: ";
    cin >> s;

    cout << "The number you entered is ";
    if(s == "zero"){
        cout << "0.\n";
    } else if(s == "one"){
        cout << "1.\n";
    } else if(s == "two"){
        cout << "2.\n";
    } else if(s == "three"){
        cout << "3.\n";
    } else if(s == "four"){
        cout << "4.\n";
    } else {
        cout << "what I don't know.\n";
    }
}
