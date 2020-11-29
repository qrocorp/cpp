#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool is_valid(vector<vector<char>> &l, vector<vector<bool>> &checked, int x, int y)
{
    int n = l.size(), m = l.at(0).size();
    if (x < 0 || x >= m || y < 0 || y >= n)
        return false;
    if (l.at(y).at(x) == '*')
        return false;
    if (checked.at(y).at(x))
        return false;
    return true;
}

void make_lake(vector<vector<char>> &l, vector<vector<bool>> &checked, int x, int y)
{
    checked.at(y).at(x) = true;
    //8方向
    if (is_valid(l, checked, x - 1, y - 1))
        make_lake(l, checked, x - 1, y - 1);
    if (is_valid(l, checked, x, y - 1))
        make_lake(l, checked, x, y - 1);
    if (is_valid(l, checked, x + 1, y - 1))
        make_lake(l, checked, x + 1, y - 1);
    if (is_valid(l, checked, x + 1, y))
        make_lake(l, checked, x + 1, y);
    if (is_valid(l, checked, x + 1, y + 1))
        make_lake(l, checked, x + 1, y + 1);
    if (is_valid(l, checked, x, y + 1))
        make_lake(l, checked, x, y + 1);
    if (is_valid(l, checked, x - 1, y + 1))
        make_lake(l, checked, x - 1, y + 1);
    if (is_valid(l, checked, x - 1, y))
        make_lake(l, checked, x - 1, y);
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> l(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> l.at(i).at(j);
        }
    }

    vector<vector<bool>> checked(n, vector<bool>(m, false));

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (l.at(i).at(j) == 'W' && !checked.at(i).at(j))
            {
                ans++;
                make_lake(l, checked, j, i);
            }
        }
    }

    cout << ans << endl;
}