#include "../lib_files/std_lib_facilities.h"

int str_to_integer(string s);

int main(){
    string a = "";
    int anum = 0;
    string b = "";
    int bnum = 0;

    char operation;
    
    cout << "Enter two number followed by a operator(+ - * / %): ";
    cin >> a >> b >> operation;
    if("0" <= a && a <= "9" && 0 <= stoi(a) && stoi(a) <= 9){
        anum = stoi(a);
    } else {
        anum = str_to_integer(a);
    }

    if("0" <= b && b <= "9" && 0 <= stoi(b) && stoi(b) <= 9){
        bnum = stoi(b);
    } else {
        bnum = str_to_integer(b);
    }
    if (anum == -1 || bnum == -1){
        cout << "Invalid number.\n";
    } else if (operation == '+'){
        cout << "The sum of " << anum << " and " << bnum << " is " << anum + bnum << endl;
    } else if(operation == '-') {
        cout << "The difference of " << anum << " and " << bnum << " is " << anum - bnum << endl;
    } else if(operation == '*'){
        cout << "The produce of " << anum << " and " << bnum << " is " << anum * bnum << endl;
    } else if(operation == '/'){
        cout << "The quotient of " << anum << " and " << bnum << " is " << anum / bnum << endl;
    } else if(operation == '%'){
        cout << "The remainder of " << anum << " and " << bnum << " is " << anum % bnum << endl;
    } else {
        cout << " Invalid operator.\n";
    }

}

/*
string itos(int n){
    vector<string> num_in_string;
    num_in_string.push_back("zero"); num_in_string.push_back("one"); num_in_string.push_back("two");
    num_in_string.push_back("three"); num_in_string.push_back("four"); num_in_string.push_back("five");
    num_in_string.push_back("six"); num_in_string.push_back("seven"); num_in_string.push_back("eight"); 
    num_in_string.push_back("nine");

    string converted_number = "";

    if(0 <= n && n <= 9){
        converted_number = num_in_string[n];
    }
    return converted_number;
}
*/

int str_to_integer(string s){
    vector<string> num_in_string;
    num_in_string.push_back("zero"); num_in_string.push_back("one"); num_in_string.push_back("two");
    num_in_string.push_back("three"); num_in_string.push_back("four"); num_in_string.push_back("five");
    num_in_string.push_back("six"); num_in_string.push_back("seven"); num_in_string.push_back("eight"); 
    num_in_string.push_back("nine");

    int converted_number = -1;

    for(int i = 0; i < 10; i++){
        if(s == num_in_string[i]){
            converted_number = i;
        }
    }

    return converted_number;

}
