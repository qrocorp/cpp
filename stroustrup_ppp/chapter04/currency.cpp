#include "std_lib_facilities.h"

int main() {
    const double yen_per_dollar = 119.73;
    const double yen_per_euro = 133.56;
    const double yen_per_pound = 181.28;
    double price = 0;
    char currency = ' ';

    cout << "Please enter a price followed by a currency (d or e or p): ";
    cin >> price >> currency;

    switch(currency){
    case 'd':
        cout << price << " dollar == " << price * yen_per_dollar << " yen\n";
        break;
    case 'e':
        cout << price << " euro == " << price * yen_per_euro << " yen\n";
        break;
    case 'p':
        cout << price << " pound == " << price * yen_per_pound << " yen\n";
        break;
    default:
        cout << "Sorry, I can't understand a currency called '" << currency << "'\n";
        break;
    }
}
