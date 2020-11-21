#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    map<ll, ll> a;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (a.count(x))
            a[x]++;
        else
            a[x] = 1;
    }

    ll ans = 0;
    auto begin = a.begin(), end = a.end();
    for (auto iter = begin; iter != end; iter++)
    {
        ans += iter->first * iter->second;
    }

    ll q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        ll b, c;
        cin >> b >> c;
        if (a.count(b))
        {
            ans -= b * a[b];
            ans += c * a[b];
            if (a.count(c))
            {
                a[c] += a[b];
            }
            else
            {
                a[c] = a[b];
            }
            a[b] = 0;
        }
        cout << ans << endl;
    }
}