// https://atcoder.jp/contests/dp/tasks/dp_a
#include <bits/stdc++.h>
using namespace std;
const long long INF = 1LL << 60;

template <class T>
void chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<long long> h(n);
    for (int i = 0; i < n; i++)
        cin >> h.at(i);

    vector<long long> dp(n, INF);
    dp[0] = 0;
    /*
    //pull-based
    for (int i = 1; i < n; i++)
    {
        chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
        if (i > 1)
            chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
    }
    */

    //push-based
    for (int i = 0; i < n; i++)
    {
        if (i + 1 < n)
        {
            chmin(dp[i + 1], dp[i] + abs(h[i + 1] - h[i]));
        }
        if (i + 2 < n)
        {
            chmin(dp[i + 2], dp[i] + abs(h[i + 2] - h[i]));
        }
    }
    cout << dp.at(n - 1) << endl;
}