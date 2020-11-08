#include <bits/stdc++.h>
using namespace std;
#define INF 10000000007

template <class T>
void chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
    }
}

template <class T>
void chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
    }
}

int main()
{
    int N, W;
    cin >> N >> W;

    vector<long long> weight(N), value(N);
    for (int i = 0; i < N; i++)
    {
        cin >> weight[i] >> value[i];
    }

    vector<vector<long long>> dp(N + 1, vector<long long>(1000001, INF));
    dp[0][0] = 0;

    for (int i = 1; i < N + 1; i++)
    {
        for (int v = 0; v <= 1000001; v++)
        {
            // i番目の荷物を選ぶ場合
            if (v - value[i] >= 0)
            {
                dp[i][v] = min(dp[i - 1][v], dp[i - 1][v - value[i]] + weight[i]);
            }
            else
            {
                dp[i][v] = dp[i - 1][v];
            }
        }
    }

    int ans = 100000;
    while (dp[N][ans] > W)
        ans--;
    cout << ans << endl;
}
