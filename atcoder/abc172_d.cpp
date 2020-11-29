#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll k = 1; k <= n; k++)
    {
        ll y = n / k;
        ll z = (y * (y + 1) * k) / 2;
        ans += z;
    }

    cout << ans << endl;
}

/*
for(int i = 1; i<=n; i++)
{
    for(int j = 1; j <=n; j++)
    {
        if(i % j == 0)
            ans += i;
    }
}
->
for(int j = 1; j<=n; j++)
    for(int i = 1; i<=n; i++)
        if(i%j == 0) ans += i;

初稿j, 等差j, 最大値n以下の等差数列の和を足し上げていけばOK



f はその数の約数の個数を求める
ここを効率化できるような気がする

f(1) = 1 // 1
f(2) = 2 // 1, 2
f(3) = 2 // 1, 3
f(4) = 3 // 1, 2, 4 // 2 * 2
f(5) = 2 // 1, 5
f(6) = 4 // 1, 2, 3, 6// 2 * 3
f(7) = 2 // 1, 7
f(8) = 4 // 1, 2, 4, 8 // 2 * 2 * 2
f(9) = 3 // 1, 3, 9 // 3 * 3
f(10) = 4 // 1, 2, 5, 10 // 2 * 5
f(11) = 2 // 1, 11
f(12) = 6 // 1, 2, 3, 4, 6, 12 // 2 * 2 * 3
f(13) = 2 // 1, 13
f(14) = 4 // 1, 2, 7, 14 // 2 * 7
f(15) = 4 // 1, 3, 5, 15 // 3 * 5
f(16) = 5 // 1, 2, 4, 8, 16 // 2 * 2 * 2 * 2

*/