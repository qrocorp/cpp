#include "../lib_files/std_lib_facilities.h"

int main(){
    vector<string> num_in_string;
    num_in_string.push_back("zero"); num_in_string.push_back("one"); num_in_string.push_back("two");
    num_in_string.push_back("three"); num_in_string.push_back("four"); num_in_string.push_back("five");
    num_in_string.push_back("six"); num_in_string.push_back("seven"); num_in_string.push_back("eight"); 
    num_in_string.push_back("nine");

    string entered_number = "";
    int converted_number = -1;
    cout << "Conversion to integer: Enter a number zero - nine : ";
    cin >> entered_number;
    for(int i = 0; i < 10; i++){
        if(entered_number == num_in_string[i]){
            converted_number = i;
        }
    }
    if(0 <= converted_number && converted_number <= 9){
        cout << entered_number << " -> " << converted_number << endl;
    } else {
        cout << "Invalid.\n";
    }
}
