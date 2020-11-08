#include <bits/stdc++.h>
using namespace std;

/*
bool is_valid(vector<vector<char>> &r, vector<vector<bool>> &checked, int y, int x)
{
    if (y < 0 || x < 0 || y >= r.size() || x >= r.at(0).size())
        return false;
    if (checked.at(y).at(x))
        return false;
    if (r.at(y).at(x) == 'b')
        return false;

    return true;
}

bool is_light(vector<vector<char>> &r, vector<vector<bool>> &checked, int y, int x)
{

    if (r.at(y).at(x) == 'l')
        return true;

    checked.at(y).at(x) = true;
    //上下左右判定
    bool res = false;
    if (is_valid(r, checked, y - 1, x) && is_light(r, checked, y - 1, x))
        res = true;
    if (is_valid(r, checked, y + 1, x) && is_light(r, checked, y + 1, x))
        res = true;
    if (is_valid(r, checked, y, x - 1) && is_light(r, checked, y, x - 1))
        res = true;
    if (is_valid(r, checked, y, x + 1) && is_light(r, checked, y, x + 1))
        res = true;

    return res;
}
*/

bool up_v(vector<vector<char>> &r, int y, int x)
{
    if (y < 0)
        return false;
    if (r.at(y).at(x) == 'b')
        return false;
    if (r.at(y).at(x) == 'l')
        return true;
    bool result = up_v(r, y - 1, x);
    return result;
}

bool down_v(vector<vector<char>> &r, int y, int x)
{
    if (y >= r.size())
        return false;
    if (r.at(y).at(x) == 'b')
        return false;
    if (r.at(y).at(x) == 'l')
        return true;
    bool result = down_v(r, y + 1, x);
    return result;
}
bool left_v(vector<vector<char>> &r, int y, int x)
{
    if (x < 0)
        return false;
    if (r.at(y).at(x) == 'b')
        return false;
    if (r.at(y).at(x) == 'l')
        return true;
    bool result = left_v(r, y, x - 1);
    return result;
}
bool right_v(vector<vector<char>> &r, int y, int x)
{
    if (x >= r.at(0).size())
        return false;
    if (r.at(y).at(x) == 'b')
        return false;
    if (r.at(y).at(x) == 'l')
        return true;
    bool result = right_v(r, y, x + 1);
    return result;
}

bool is_light(vector<vector<char>> &r, int y, int x)
{
    bool result = (up_v(r, y - 1, x) || down_v(r, y + 1, x) || right_v(r, y, x + 1) || left_v(r, y, x - 1));
    return result;
}

int main()
{
    long long h, w, n, m;
    cin >> h >> w >> n >> m;

    vector<vector<char>> room(h, vector<char>(w, '-'));

    for (int i = 0; i < n; i++)
    {
        int y, x;
        cin >> y >> x;
        room[y - 1][x - 1] = 'l';
    }
    for (int i = 0; i < m; i++)
    {
        int y, x;
        cin >> y >> x;
        room[y - 1][x - 1] = 'b';
    }
    /*
    // kakunin
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << room[i][j];
            if (j == w - 1)
                cout << endl;
        }
    }
    */
    // vector<vector<bool>> checked(h, vector<bool>(w, false));

    int answer = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (room.at(i).at(j) == '-')
            {
                if (is_light(room, i, j))
                    answer++;
            }
            else if (room.at(i).at(j) == 'l')
                answer++;
        }
    }

    cout << answer << endl;
}