#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name and age(followed by 'enter'):\n";
    string first_name;
    double age;
    cin >> first_name;
    cin >> age;
    double age_moon = age * 12;
    cout << "Hello, " << first_name << "(age of the moon: " << age_moon << ")\n";
}
