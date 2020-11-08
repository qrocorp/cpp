#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }

    vector<vector<int>> dp(n + 1, vector<int>(3, 0));

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            dp[i][0] = a[i - 1];
            dp[i][1] = b[i - 1];
            dp[i][2] = c[i - 1];
        }
        else
        {
            dp[i][0] = max(dp[i - 1][1] + a[i - 1], dp[i - 1][2] + a[i - 1]);
            dp[i][1] = max(dp[i - 1][0] + b[i - 1], dp[i - 1][2] + b[i - 1]);
            dp[i][2] = max(dp[i - 1][0] + c[i - 1], dp[i - 1][1] + c[i - 1]);
        }
    }

    int answer = max(dp[n][0], max(dp[n][1], dp[n][2]));
    cout << answer << endl;
}