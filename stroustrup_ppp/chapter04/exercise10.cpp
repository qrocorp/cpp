#include "../lib_files/std_lib_facilities.h"

//じゃんけんプログラム

int main(){
    vector<int> te_cp; //CPの手
    int g = 0; //各手は数値であらわす
    int c = 1;
    int p = 2;
    char te_pl = ' ';//読み取り用
    int pl_num = 0; //プレイヤーの手を数値化
    int i = 0; //CPの手の試行回数
    int diff; //プレイヤーの手とCPの手の差
    int win = 0; int lose = 0; int draw = 0;
    char proceed = ' ';

    te_cp.push_back(g); te_cp.push_back(c); te_cp.push_back(c);
    te_cp.push_back(g); te_cp.push_back(p); te_cp.push_back(p);
    te_cp.push_back(p); te_cp.push_back(g); te_cp.push_back(p);
    te_cp.push_back(c); te_cp.push_back(c); te_cp.push_back(g);
    
    cout << "Let's start 'Jyanken'!\n"; 
    while(true){
        cout << "Enter your choice, (g)oo, (c)hoki or (p)a: ";
        cin >> te_pl;
        switch(te_pl) {
            case 'g': pl_num = 0; break;
            case 'c': pl_num = 1; break;
            case 'p': pl_num = 2; break;
            default: cout << "Sorry, can't read your choice. Try again.\n "; continue;
        }
        cout << "Your choice: " << te_pl << "   My choice: " << te_cp[i] << endl;

        diff = pl_num - te_cp[i];
        switch(diff){
            case -1:
            case 2: cout << "You win!!\n"; win++; break;
            case 1:
            case -2: cout << "You lose!!\n"; lose++; break;
            case 0: cout << "Draw.\n"; draw++; break;
            default: cout << "Error\n"; break;
        }
        cout << "Win: " << win << "   Lose: " << lose << "   Draw: " << draw << endl;

        i++;
        if(i >= te_cp.size()){
            break;
        }
        cout << "Try again? (y or n): ";
        cin >> proceed;
        if(proceed == 'y'){
            continue;
        } else {
            break;
        }

    }

}
