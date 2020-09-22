#include "../lib_files/std_lib_facilities.h"

int main(){
    double a, b;
    char operation;
    
    cout << "Enter two number followed by a operator(+ - * / %): ";
    cin >> a >> b >> operation;
    if (operation == '+'){
        cout << "The sum of " << a << " and " << b << " is " << a + b << endl;
    } else if(operation == '-') {
        cout << "The difference of " << a << " and " << b << " is " << a - b << endl;
    } else if(operation == '*'){
        cout << "The produce of " << a << " and " << b << " is " << a * b << endl;
    } else if(operation == '/'){
        cout << "The quotient of " << a << " and " << b << " is " << a / b << endl;
    } else if(operation == '%'){
        cout << "The remainder of " << int(a) << " and " << int(b) << " is " << int(a) % int(b) << endl;
    } else {
        cout << "Sorry, can't understand your operation.\n";
    }

}
