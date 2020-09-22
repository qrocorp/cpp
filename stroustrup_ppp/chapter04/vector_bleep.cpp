#include "std_lib_facilities.h"

int main(){
    vector<string> words;
    string temp;
    string disliked = "Broccoli";

    while(cin>>temp)
        words.push_back(temp);
    cout << "Number of words: " << words.size() << endl;

    sort(words.begin(), words.end());

    for(int i = 0; i < words.size(); ++i){
        if(words[i] == disliked)
                words[i] = "BLEEP";
        cout << words[i] << endl;
    }

}
