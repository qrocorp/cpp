#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    pair<double, double> t;

    int mousho = 0;
    int manatsu = 0;
    int natsu = 0;
    int nettai = 0;
    int fuyu = 0;
    int mafuyu = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> t.first >> t.second;

        if (t.first >= 35)
            mousho++;
        if (t.first >= 30 && t.first < 35)
            manatsu++;
        if (t.first >= 25 && t.first < 30)
            natsu++;
        if (t.second >= 25)
            nettai++;
        if (t.first >= 0 && t.second < 0)
            fuyu++;
        if (t.first < 0)
            mafuyu++;
    }
    cout << mousho << ' ' << manatsu << ' ' << natsu << ' ' << nettai << ' ' << fuyu << ' ' << mafuyu << endl;
}