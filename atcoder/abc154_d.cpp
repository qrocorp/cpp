#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p.at(i);
    }
    //k個の連続する値を設定し、随時更新
    long long sum = 0;

    for (int i = 0; i < k; i++)
    {
        sum += p.at(i); //初期値
    }
    long long max_sum = sum;
    int max_index = 0;

    //スライドさせていく
    for (int i = k; i < n; i++)
    {
        sum += p.at(i);
        sum -= p.at(i - k);
        if (max_sum < sum)
        {
            max_sum = sum;
            max_index = i + 1 - k;
        }
    }
    //cout << max_sum << ' ' << max_index << endl;
    long double num = 0, denom = 0, answer = 0; //分子,分母,答え

    for (int i = max_index; i < max_index + k; i++)
    {
        num = p.at(i) * (p.at(i) + 1) / 2; // 初項1, 公差1, 項数p.at(i)、末項p.at(i) s = p.at(i)*(p.at(i)+1)/2
        denom = p.at(i);
        //cout << num / denom << endl;
        answer += num / denom;
    }

    cout << fixed << setprecision(10) << answer << endl;
}

/*
期待値
(1 + 2 + 3 + 4 + 5 + 6) / 6 = 3.5
複数のサイコロがある場合、個別の期待値の足し上げだと誤差がでそう
分子: 各サイコロの1..piの和
分母: 各サイコロのpi
それぞれ足し上げてまとめて割るのがよさそう

場所の特定
サイコロの和が最大になるところ
*/