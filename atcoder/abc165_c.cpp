#include <bits/stdc++.h>
using namespace std;

long long score_calc(vector<vector<int>> s, vector<int> t)
{
    long long score = 0;
}

int main()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<int>> s(q, vector<int>(4));
    for (int i = 0; i < q; i++)
        for (int j = 0; j < 4; j++)
            cin >> s.at(i).at(j);

    //n個の仕切りとM-1のボールを並べ替えて数列を列挙
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            vector<int> t(n);
        }
    }
}
