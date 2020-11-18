#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m;
    cin >> n >> m;

    vector<pair<ll, ll>> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p.at(i).first >> p.at(i).second;
    }

    sort(p.begin(), p.end());

    ll budget = 0;
    int i = 0;
    while (true)
    {
        m -= p.at(i).second;
        budget += p.at(i).first * p.at(i).second;
        if (m < 0)
        {
            budget += p.at(i).first * m;
            break;
        }
        else if (m == 0)
        {
            break;
        }
        else
        {
            i++;
        }
    }
    cout << budget << endl;
}