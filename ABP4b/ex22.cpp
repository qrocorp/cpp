#include <bits/stdc++.h>
using namespace std;

int main()
{
    using pii = pair<int, int>;
    int n;
    cin >> n;

    vector<pii> p(n);
    for (int i = 0; i < p.size(); i++)
    {
        int a, b;
        cin >> a >> b;
        p.at(i) = make_pair(b, a);
    }

    sort(p.begin(), p.end());

    for (auto x : p)
    {
        int b, a;
        tie(b, a) = x;
        cout << a << ' ' << b << endl;
    }
}