#include "std_lib_facilities.h"

int main(){
    string operation;
    double op1, op2;
    cout << "Enter a calculation with polish notation: ";
    cin >> operation >> op1 >> op2;
    if(operation == "+" || operation == "plus"){
        cout << op1 << " " << operation << " " 
             << op2 << " = " << op1 + op2 << "\n";
    } else if(operation == "-" || operation == "minus"){
        cout << op1 << " " << operation << " " 
             << op2 << " = " << op1 - op2 << "\n";
    } else if(operation == "*" || operation == "mul"){
        cout << op1 << " " << operation << " " 
             << op2 << " = " << op1 * op2 << "\n";
    } else if(operation == "/" || operation == "div"){
        cout << op1 << " " << operation << " " 
             << op2 << " = " << op1 / op2 << "\n";
    } else {
        cout << "I can't calculate what you've entered.\n";
    }
}
