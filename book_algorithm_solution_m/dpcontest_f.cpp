#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int slen = s.size(), tlen = t.size();

    vector<vector<int>> dp(slen + 1, vector<int>(tlen + 1, 0));
    for (int i = 1; i <= slen; i++)
    {
        // bool flag = false;
        for (int j = 1; j <= tlen; j++)
        {
            if (s[i - 1] == t[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
            {
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
    }
    cout << dp[slen][tlen] << endl;

    int len = dp[slen][tlen], i = slen + 1, j = tlen + 1;
    string answer(len, ' ');

    while (len > 0)
    {
        if (s[i - 1] == t[j - 1])
        {
            answer[len] = s[i - 1];
            i--;
            j--;
            len--;
        }
        else if (dp[i][j] == dp[i - 1][j])
        {
            i--;
        }
        else
        {
            j--;
        }
    }

    cout << answer << endl;
}