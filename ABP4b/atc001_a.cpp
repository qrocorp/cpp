#include <bits/stdc++.h>
using namespace std;

bool is_valid_move(vector<vector<char>> &c, vector<vector<bool>> &checked, int y, int x)
{
    if (y < 0 || x < 0 || y >= c.size() || x >= c.at(0).size())
        return false;
    if (c.at(y).at(x) == '#')
        return false;
    if (checked.at(y).at(x))
        return false;

    return true;
}

bool reachable(vector<vector<char>> &c, vector<vector<bool>> &checked, int y, int x)
{
    if (c.at(y).at(x) == 'g')
        return true;

    checked.at(y).at(x) = true;

    bool result = false;

    if (is_valid_move(c, checked, y - 1, x) && reachable(c, checked, y - 1, x))
        return true;
    if (is_valid_move(c, checked, y, x + 1) && reachable(c, checked, y, x + 1))
        return true;
    if (is_valid_move(c, checked, y + 1, x) && reachable(c, checked, y + 1, x))
        return true;
    if (is_valid_move(c, checked, y, x - 1) && reachable(c, checked, y, x - 1))
        return true;

    return result;
}

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> c(h, vector<char>(w));

    int s_y, s_x;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            char x;
            cin >> x;
            c.at(i).at(j) = x;
            if (x == 's')
            {
                s_y = i;
                s_x = j;
            }
        }
    }
    vector<vector<bool>> checked(h, vector<bool>(w));

    bool answer = reachable(c, checked, s_y, s_x);
    if (answer)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}