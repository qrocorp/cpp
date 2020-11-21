#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    vector<ll> m(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        ll b;
        cin >> b;
        a.at(i) = b;
        m.at(b)++;
    }

    ll combination = 0;
    for (int i = 0; i < n + 1; i++)
    {
        combination += (m.at(i) * (m.at(i) - 1)) / 2;
    }

    for (int i = 0; i < n; i++)
    {
        ll temp = combination;
        ll k = a.at(i);
        temp -= (m.at(k) * (m.at(k) - 1)) / 2;
        temp += ((m.at(k) - 1) * (m.at(k) - 2)) / 2;
        cout << temp << endl;
    }
}