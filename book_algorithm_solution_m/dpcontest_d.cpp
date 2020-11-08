#include <bits/stdc++.h>
using namespace std;

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
    long long N, W;
    cin >> N >> W;

    vector<long long> weight(N), value(N);
    for (int i = 0; i < N; i++)
        cin >> weight[i] >> value[i];

    vector<vector<long long>> dp(N + 1, vector<long long>(W + 1, 0));

    for (long long i = 0; i < N; i++)
    {
        for (long long w = 0; w <= W; w++)
        {
            if (w - weight[i] >= 0)
                chmax(dp[i + 1][w], dp[i][w - weight[i]] + value[i]);
            chmax(dp[i + 1][w], dp[i][w]);
        }
    }
    cout << dp[N][W] << endl;
}