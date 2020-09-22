#include "../lib_files/std_lib_facilities.h"

double ctok(double c)
{
    double k = c + 273.15;
    if(k<0) error("non-positive kelvin is impossible");
    return k;
}

int main()
{
    double c = 0;
    cin >> c;
    double k = ctok(c);
    cout << k << endl;
}
