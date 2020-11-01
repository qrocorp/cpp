#include <bits/stdc++.h>
using namespace std;

int main()
{
    int64_t mod = 998244353;

    int64_t a, b, c;
    cin >> a >> b >> c;

    int64_t ans = 0;
    int64_t sum_a = a * (a + 1) / 2 % mod;
    int64_t sum_b = b * (b + 1) / 2 % mod;
    int64_t sum_c = c * (c + 1) / 2 % mod;

    ans = sum_a * sum_b % mod * sum_c % mod;

    cout << ans << endl;
}