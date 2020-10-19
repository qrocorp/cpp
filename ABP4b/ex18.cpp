#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a.at(i) >> b.at(i);
    }

    vector<vector<char>> data(n, vector<char>(n, '-'));

    for (int i = 0; i < m; i++)
    {
        int win = a.at(i) - 1;
        int lose = b.at(i) - 1;
        data.at(win).at(lose) = 'o';
        data.at(lose).at(win) = 'x';
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << data.at(i).at(j);
            if (j != n - 1)
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
}