#include <bits/stdc++.h>
using namespace std;

int main()
{
    using tsii = tuple<string, int, int>;
    int n;
    cin >> n;
    vector<tsii> x(n);

    for (int i = 0; i < x.size(); i++)
    {
        string s;
        int p;
        cin >> s >> p;
        x.at(i) = make_tuple(s, p * (-1), i + 1); // スコアの降順 -> スコア* -1 の昇順
    }

    sort(x.begin(), x.end());

    for (auto t : x)
    {
        int m;
        tie(ignore, ignore, m) = t;
        cout << m << endl;
    }
}
