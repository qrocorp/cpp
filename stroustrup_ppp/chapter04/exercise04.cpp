#include "../lib_files/std_lib_facilities.h"

int main(){
    int guessnum = 0;
    int max = 101;
    int min = 0;
    int median = (max+min) / 2;
    int i = 0;
    string answer = "";

    cout << "Let's start 'number-guessing' game!!!\n"
         << "Imagine a number between 1 - 100.\n"
         << "And answer my guess with (c)orrect, (m)ore or (l)ess\n\n";
    
    while(true){
        ++i;
        cout << "My guess:  " << median << ", (c), (m) or (l)?: ";
        cin >> answer;
        if(answer == "c"){
            break;
        } else if(answer == "l"){
            max = median;
            if(max - min <= 1){
                median--;
            } else {
                median = (max+min)/2;
            }
        } else if(answer == "m"){
            min = median;
            if(max - min <= 1){
                median++;
            } else {
                median = (max+min)/2;
            }
        } else {
            cout << "Sorry, I can't understand your answer. Please enter again.\n";
            continue;
        }
    }

    cout << "Yes!! I could guess your number in " << i << " questions.\n";

}
