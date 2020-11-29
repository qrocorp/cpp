#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool is_valid(vector<vector<char>> &a, vector<vector<bool>> &checked, int x, int y)
{
    int h = a.size();
    int w = a.at(0).size();
    if (x < 0 || x >= w || y < 0 || y >= h)
        return false;
    if (checked.at(y).at(x))
        return false;
    if (a.at(y).at(x) == '#')
        return false;
    return true;
}

bool reachable(vector<vector<char>> &a, vector<vector<bool>> &checked, int x, int y, int count, vector<int> &ans)
{
    if (a.at(y).at(x) == 'G')
    {
        ans.push_back(count);
        return true;
    }

    //テレポート対応
    bool flag = false;
    int h = a.size();
    int w = a.at(0).size();
    char z = a.at(y).at(x);
    int tel_x, tel_y;

    checked.at(y).at(x) = true;

    if (z != '.')
    {
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if (a.at(i).at(j) == z && !checked.at(i).at(j))
                {
                    tel_x = j;
                    tel_y = i;
                    flag = true;
                }
            }
        }
    }

    bool result = false;
    //上下左右
    if (is_valid(a, checked, x, y - 1) && reachable(a, checked, x, y - 1, ++count, ans))
        result = true;
    if (is_valid(a, checked, x + 1, y) && reachable(a, checked, x + 1, y, ++count, ans))
        result = true;
    if (is_valid(a, checked, x, y + 1) && reachable(a, checked, x, y + 1, ++count, ans))
        result = true;
    if (is_valid(a, checked, x - 1, y) && reachable(a, checked, x - 1, y, ++count, ans))
        result = true;
    if (flag && is_valid(a, checked, tel_x, tel_y) && reachable(a, checked, tel_x, tel_y, ++count, ans))
        result = true;

    return result;
}

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> a(h, vector<char>(w));
    int s_y, s_x;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> a.at(i).at(j);
            if (a.at(i).at(j) == 'S')
            {
                s_y = i;
                s_x = j;
            }
        }
    }

    vector<vector<bool>> checked(h, vector<bool>(w, false));
    int count = 0;
    vector<int> ans;
    reachable(a, checked, s_x, s_y, count, ans);
    sort(ans.begin(), ans.end());
    if (ans.size())
    {
        cout << ans.at(0) << endl;
     }
    else
        cout << -1 << endl;
}