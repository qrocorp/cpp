#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n - 1; i++)
    {
        ll m;
        cin >> m;
        a.at(m - 1)++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a.at(i) << endl;
    }
}