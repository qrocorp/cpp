#include "std_lib_facilities.h"

int main()
{   
    cout << "Enter the name of the person you want to: ";
    string first_name;
    cin >> first_name;
    cout << "Dear " << first_name  << ",\n\n"
         << " How are you? I am fine. I miss you so much.\n";
    
    string friend_name;
    char friend_gender = '0';
    cout << "Enter your friend's name and gender(male:m, female:f)";
    cin >> friend_name >> friend_gender;
    cout <<" Have you seen " << friend_name << " lately?\n";
    cout <<" If you see " << friend_name << " please ask ";
    if (friend_gender == 'm'){
        cout <<"him";
        } else {
        cout << "her";
        }
    cout << " to call me.\n";

    int age = 0;
    while(1) {
        cout << "Enter the age of the receiver: ";
        cin >> age;
        if (0 < age && age < 110) {
            break;
        } else {
            simple_error("you're kidding!");
            continue;
        }
    }
    cout << " I hear you just had a birthday and you are "
         << age << " years old.\n";
    
    if (age < 12 ){
        cout << " Next year you will be " << age + 1 << ".\n";
    }  else if(age == 17) {
        cout << " Next year you will be able to vote.\n";
    } else if(age >= 70 ) {
        cout << " I hope you are enjoying retirement.\n";
    }

    cout << " Yours sincerely.\n\n\n     Takao Kurokawa.\n";
}
