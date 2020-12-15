#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n, 0);
    ll val = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (a.at(x - 1) == 0)
            val++;
        a.at(x - 1)++;
    }

    sort(a.begin(), a.end(), greater<ll>());

    ll select = 0;
    for (int i = 0; i < k; i++)
    {
        select += a.at(i);
    }

    ll ans = n - select;
    cout << ans << endl;
}
/*
    vector<ll> a(200009, 0);
    ll val = 0;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (a.at(x) == 0)
            val++;
        a.at(x)++;
    }

    ll num_del = val - k;
    ll ans = 0;
    if (num_del <= 0)
    {
        cout << 0 << endl;
        return 0;
    }

    bool flag = false;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (a.at(j) == i)
            {
                num_del--;
                ans += a.at(j);
                if (num_del == 0)
                {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
            break;
    }
    cout << ans << endl;
}
*/