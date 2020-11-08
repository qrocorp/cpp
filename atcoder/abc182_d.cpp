#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }

    long long max_x = 0;                          //最大値
    long long x = 0;                              //現在地
    vector<pair<long long, long long>> dp(n + 1); //途中の回答を保存, 最終値と移動中の最大値
    dp[0].first = 0;
    dp[1].second = 0;

    for (int i = 1; i <= n; i++)
    {
        dp[i].first = dp[i - 1].first + a.at(i - 1);
        dp[i].second = max(dp[i - 1].second, dp[i].first);
        if (max_x < x + dp[i].second)
            max_x = x + dp[i].second;
        x += dp[i].first;
    }

    cout << max_x << endl;
}