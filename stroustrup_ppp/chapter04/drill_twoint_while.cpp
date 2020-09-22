#include "std_lib_facilities.h"

int main(){
    while(true){
        double a = 0;
        double b = 0;
        cout << "Enter two integers : ";
        cin >> a >> b;
        double l = 0;
        double s = 0;
        if(a > b) {
            l = a;
            s = b;
        } else {
            l = b;
            s = a;
        }
        if(a == b)
            cout << "the numbers are equal.\n";
        else {
            cout << "the smaller value is: " << s << endl;
            cout << "the larger value is: " << l << endl;
        }
        if (l != b && ((l-s) < 1.0/10000000))
            cout << "the numbers are almost equal\n";
    }
}
