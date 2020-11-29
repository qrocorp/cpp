#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<vector<double>>> dp(101, vector<vector<double>>(101, vector<double>(101)));

double f(int a, int b, int c)
{
    if (dp[a][b][c])
        return dp[a][b][c];
    if (a == 100 || b == 100 || c == 100)
        return 0;
    double ans = 0;
    ans += (f(a + 1, b, c) + 1) * a / (a + b + c);
    ans += (f(a, b + 1, c) + 1) * b / (a + b + c);
    ans += (f(a, b, c + 1) + 1) * c / (a + b + c);
    dp[a][b][c] = ans;
    return ans;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << fixed << setprecision(10) << f(a, b, c) << endl;
}

/*
aが100枚になる期待値
(100-a)回、aを引く
(100-a)*3 + (100-b)*3 + (100-c)*3


10回aを引くための回数の期待値
10*3 = 30
*/
