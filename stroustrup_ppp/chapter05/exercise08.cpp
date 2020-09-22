#include "../lib_files/std_lib_facilities.h"

//Sum up number sequence
//First, ask user to enter how many numbers to sum up
//Next, enter number sequences followed by '|' to stop
//Show the sum, and error of unexpected input


int sumup(vector<int> nums, int n){
    //pre-condition nums.size() >= n
    //post-condition sum > 0
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += nums[i];
    }
    return sum;
}

int main(){
    int n = 0;
    int val;
    vector<int> nums;
    int sum = 0;
    bool more_flag = false;
    bool less_flag = false;

    cout << "How many numbers do you want to sum-up: ";
    cin >> n;
    //cin.good()は型確認, 合致しない場合0を出力
    if(cin.good()==0) error("invalid input");
    if(n <= 0) error("non-positive number not acceptable");

    cout << "Enter number sequence followed by '|' to end: ";

    //読み取った数字を順にvectorに格納
    while(cin >> val) nums.push_back(val);
    //intでない場合、エラーをクリアしてから文字列として読み取り
    cin.clear();
    string s;
    cin >> s;
    if(s != "|") error("invalid: not a integer or appropriate character");
    if(n < nums.size()){
        more_flag = true;
    } else if(n > nums.size()){
        less_flag = true;
        n = nums.size();
    }
    sum = sumup(nums, n);

    cout << "Sum of " << n << " numbers from the beginning is " << sum << endl;
    if(more_flag) cerr << "you entered more numbers than you declared\n";
    else if(less_flag) cerr << "you entered less numbers than you declared\n";


}
