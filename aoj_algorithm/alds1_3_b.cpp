// Queue
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, q;
    cin >> n >> q;
    queue<pair<string, int>> p;
    rep(i, n)
    {
        string s;
        int n;
        cin >> s >> n;
        p.push(make_pair(s, n));
    }

    int elaps = 0;
    int c;
    pair<string, int> u;
    while (p.size())
    {
        u = p.front();
        p.pop();
        c = min(q, u.second);
        u.second -= c;
        elaps += c;
        if (u.second > 0)
            p.push(u);
        else
            cout << u.first << ' ' << elaps << endl;
    }
}