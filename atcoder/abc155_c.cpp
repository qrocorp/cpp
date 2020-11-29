#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    map<string, ll> t;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (t.count(s))
            t.at(s)++;
        else
            t[s] = 1;
    }

    ll maxv = 0;
    for (auto &x : t)
    {
        ll v = x.second;
        if (v > maxv)
            maxv = v;
    }

    for (auto it = t.begin(); it != t.end(); it++)
    {
        if (it->second == maxv)
        {
            cout << it->first << endl;
        }
    }
}