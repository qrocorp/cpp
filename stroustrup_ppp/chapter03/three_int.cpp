#include "std_lib_facilities.h"


int main() {
    int a, b, c;
    int t1, t2, t3;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    if(a < b) {
        int t;
        t = a;
        a = b;
        b = t;
    }
    if(b < c) {
        int t;
        t = b;
        b = c;
        c = t;
    }
    if(c < a) {
        int t;
        t = c;
        c = a;
        a = t;
    }

    cout << a << ", " << b << ", " << c << "\n";
}

