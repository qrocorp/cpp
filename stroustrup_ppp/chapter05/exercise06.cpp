#include "../lib_files/std_lib_facilities.h"

//celsius to fahrenheit using formula 'f = 9.0/5*c + 32' , 'c = 5.0/9*(f - 32)'

double ctof(double c)
{
    double f = 9.0/5 * c + 32;
    if(f<-459.67) error("fahrenheit-under -459.67 is impossible");
    return f;
}

double ftoc(double f)
{
    double c = 5.0/9 * (f - 32);
    if(c < -273.15) error("celsius under -273.15 is impossible");
    return c;
}

int main()
{
    double c1 = 0;
    cout << "First, convert celsius to fahrenheit: ";
    cin >> c1;
    double f1 = ctof(c1);
    cout << f1 << endl;

    double f2 = 0;
    cout << "Next, convert fahrenheit to celsius: ";
    cin >> f2;
    double c2 = ftoc(f2);
    cout << c2 << endl;

}
