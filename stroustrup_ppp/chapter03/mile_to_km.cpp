#include "std_lib_facilities.h"

int main(){
    double mile = 0;
    double kilometer = 0;
    cout << "Enter value of mile: ";
    cin >> mile;
    kilometer = mile * 1.609;
    cout << mile << " mile equals " << kilometer << " kilometer.\n";
}
