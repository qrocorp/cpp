#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;

    vector<pair<bool, long long>> p(n); //first:AC, second:WA
    for (int i = 0; i < n; i++)
    {
        p.at(i).first = false;
        p.at(i).second = 0;
    }

    for (int i = 0; i < m; i++)
    {
        long long q;
        string s;
        cin >> q >> s;

        if (s[0] == 'A')
            p.at(q - 1).first = true;
        else if (!p.at(q - 1).first)
            p.at(q - 1).second++;
    }

    long long ac = 0, pena = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i].first == true)
        {
            ac++;
            pena += p[i].second;
        }
    }

    cout << ac << ' ' << pena << endl;
}