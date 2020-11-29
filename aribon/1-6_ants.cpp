#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll l, n;
    cin >> l >> n;
    vector<ll> x(n);
    for (int i = 0; i < n; i++)
        cin >> x.at(i);

    ll minimum = 0, maximum = 0;
    for (int i = 0; i < n; i++)
    {
        ll y = min(x[i], l - x[i]);
        if (y > minimum)
            minimum = y;
        ll z = max(x[i], l - x[i]);
        if (z > maximum)
            maximum = z;
    }

    cout << "min: " << minimum << endl;
    cout << "max: " << maximum << endl;
}