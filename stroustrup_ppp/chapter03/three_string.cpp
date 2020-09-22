#include "std_lib_facilities.h"


int main() {
    string a, b, c;
    cout << "Enter three strings with space: ";
    cin >> a >> b >> c;
    if(a < b) {
        string t;
        t = a;
        a = b;
        b = t;
    }
    if(b < c) {
        string t;
        t = b;
        b = c;
        c = t;
    }
    if(c < a) {
        string t;
        t = c;
        c = a;
        a = t;
    }

    cout << a << ", " << b << ", " << c << "\n";
}

