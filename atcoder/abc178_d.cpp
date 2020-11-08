#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main()
{
    int n;
    cin >> n;

    if (n < 3)
    {
        cout << 0 << endl;
        return 0;
    }
    vector<long long> dp(n + 1, 0);
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 0;
    dp[3] = 1;
    for (int i = 4; i < n + 1; i++)
    {
        dp[i] = (dp[i - 3] + dp[i - 1]) % MOD;
    }

    cout << dp[n] << endl;
}