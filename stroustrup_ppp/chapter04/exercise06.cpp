#include "../lib_files/std_lib_facilities.h"

int main(){
    vector<string> num_in_string;
    num_in_string.push_back("zero"); num_in_string.push_back("one"); num_in_string.push_back("two");
    num_in_string.push_back("three"); num_in_string.push_back("four"); num_in_string.push_back("five");
    num_in_string.push_back("six"); num_in_string.push_back("seven"); num_in_string.push_back("eight"); 
    num_in_string.push_back("nine");

    int entered_number = 0;
    string converted_number = "";
    cout << "Conversion to string: Enter a number 0 - 9: ";
    cin >> entered_number;
    if(0 <= entered_number && entered_number <= 9){
        converted_number = num_in_string[entered_number];
        cout << entered_number << " -> " << converted_number << endl;
    } else {
        cout << "Invalid.\n";
    }
}
