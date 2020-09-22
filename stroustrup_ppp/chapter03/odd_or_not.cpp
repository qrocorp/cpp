#include "std_lib_facilities.h"

int main(){
    int a;
    cout << "Enter an integer: ";
    cin >> a;
    if ( a % 2 == 1 ){
        cout << "Value " << a << " is an odd number.\n";
    } else {
        cout << "Value " << a << " is an even number.\n";
    }
}
