#include <bits/stdc++.h>
using namespace std;
const long long INF = 1 << 29;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
        cin >> h.at(i);

    vector<int> dp(n, INF);
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);

    for (int i = 2; i < n; i++)
    {
        dp[i] = dp[i - 1] + abs(h[i - 1] - h[i]);
        for (int j = 2; j <= k; j++)
        {
            if (i - j >= 0)
                dp[i] = min(dp[i], dp[i - j] + abs(h[i - j] - h[i]));
        }
    }

    /*
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (i + j < n)
                dp[i + j] = min(dp[i + j], dp[i] + abs(h[i + j] - h[i]));
        }
        for (int k = 0; k < n; k++)
        {
            cout << dp[k];
            if (k == n - 1)
                cout << endl;
            else
            {
                cout << ' ';
            }
        }
    }
*/
    cout << dp[n - 1] << endl;
}