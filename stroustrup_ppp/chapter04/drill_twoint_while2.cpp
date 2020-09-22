#include "std_lib_facilities.h"

// 長さを順に入力して、最大、最小、合計、ソートした長さを出力するプログラム

int main(){
    //長さ変換単位　メートルが基準
    const double m_per_cm = 1.0/100;
    const double m_per_in = 2.54/100;
    const double m_per_ft = 12.0*2.54/100;

    double a = 0;
    double a_in_m = 0; //メートルに変換した値
    string unit = "";
    double max = 0;
    double min = 0;
    double sum = 0;
    int i = 0;
    vector<double> nums; //メートル変換後の各数値を格納

    while(true){
        cout << "Enter a length followed by an unit(cm, m, in, ft)\n"
             << "To quit enter '|' in an unit: ";
        cin >> a >> unit;
        //メートルへの変換部分
        if(unit == "m"){
            a_in_m = a;
        } else if (unit == "cm"){
            a_in_m = a * m_per_cm;
        } else if (unit == "in"){
            a_in_m = a * m_per_in;
        } else if (unit == "ft"){
            a_in_m = a * m_per_ft;
        } else if (unit == "|"){ //終了のサイン
            break;
        } else {//わからない単位は無視
            cout << "Can't identify an unit, try again.\n";
            continue;
        }
        //初期値入力の上最大最小をジャッジ
        if(i == 0) {
            max = a_in_m;
            min = a_in_m;
        } else if(a_in_m < min) {
            min = a_in_m;
            cout << "the smallest so far\n";
        } else if(a_in_m > max) {
            max = a_in_m;
            cout << "the largest so far\n";
        }
        sum += a_in_m;
        nums.push_back(a_in_m);
        i++;
    }
    sort(nums.begin(), nums.end()); //昇順にならべかえ

    cout << "--List of value--\n";
    for(int j = 0; j < nums.size(); j++)
        cout << "[" << j << "]\t" << nums[j] << " m\n";
    cout << "-----------------\n";

    cout << "Max: " << max << " m\n";
    cout << "Min: " << min << " m\n";
    cout << "Number of value: " << i << endl;
    cout << "Sum: " << sum << " m\n";

}
