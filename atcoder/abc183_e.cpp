#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;
long long answer = 0;

bool is_valid_move(vector<vector<char>> &s, vector<vector<set<long long>>> &t, long long c, int x, int y)
{
    int h = s.size(), w = s.at(0).size();
    if (x <= -1 || x >= w || y <= -1 || y >= h)
        return false;
    if (s.at(y).at(x) == '#')
        return false;
    if (t.at(y).at(x).count(c))
        return false;

    return true;
}

bool reachable(vector<vector<char>> &s, vector<vector<set<long long>>> &t, long long c, int x, int y)
{
    int h = s.size(), w = s.at(0).size();

    if (x == w - 1 && y == h - 1)
    {
        answer += 1;
        answer /= MOD;
        return true;
    }

    t.at(y).at(x).insert(c);

    bool result = false;

    if (is_valid_move(s, t, c + 1, x + 1, y) && reachable(s, t, c + 1, x + 1, y))
    {
        result = true;
    }
    if (is_valid_move(s, t, c + 1, x, y + 1) && reachable(s, t, c + 1, x, y + 1))
    {
        result = true;
    }
    if (is_valid_move(s, t, c + 1, x + 1, y + 1) && reachable(s, t, c + 1, x + 1, y + 1))
    {
        result = true;
    }

    return result;
}

int main()
{
    long long h, w;
    cin >> h >> w;

    vector<vector<char>> s(h, vector<char>(w));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> s.at(i).at(j);
        }
    }

    vector<vector<set<long long>>> t(h, vector<set<long long>>(w));
    long long c = 0;

    reachable(s, t, c, 0, 0);

    cout << answer << endl;
}

/*
queen
複数マスの直線移動（右、下、右下）
後戻りはなし（方向的にむり）
同じ数移動したときに同じマスにはいてはいけない（setで手数をもたせるのがよいかも）
最終判定がtrueになった数を数える

*/
