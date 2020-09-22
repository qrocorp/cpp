#include "../lib_files/std_lib_facilities.h"

double ctok(double c)
{
    double k = c + 273.15;
    if(k<0) error("non-positive kelvin is impossible");
    return k;
}

double ktoc(double k)
{
    double c = k - 273.15;
    if(c < -273.15) error("celsius under -273.15 is impossible");
    return c;
}

int main()
{
    double c1 = 0;
    cout << "First, convert celsius to kelvin: ";
    cin >> c1;
    double k1 = ctok(c1);
    cout << k1 << endl;

    double k2 = 0;
    cout << "Next, convert kelvin to celsius: ";
    cin >> k2;
    double c2 = ktoc(k2);
    cout << c2 << endl;

}
