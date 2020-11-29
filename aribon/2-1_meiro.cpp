#include <bits/stdc++.h>
using namespace std;
const int INF = 100000000;
typedef pair<int, int> P;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(n, vector<char>(m));
    int sx, sy, gx, gy;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a.at(i).at(j);
            if (a.at(i).at(j) == 'S')
            {
                sx = j;
                sy = i;
            }
            else if (a.at(i).at(j) == 'G')
            {
                gx = j;
                gy = i;
            }
        }
    }

    vector<vector<int>> d(n, vector<int>(m, INF));      //各マスの最短距離
    vector<int> dx = {1, 0, -1, 0}, dy = {0, 1, 0, -1}; //上下左右の移動

    queue<P> que; //幅優先探索のためqueueを使用
    que.push(P(sx, sy));
    d[sy][sx] = 0;

    while (que.size())
    {
        P p = que.front();
        que.pop();

        if (p.first == gx && p.second == gy)
            break;

        for (int i = 0; i < 4; i++)
        {
            int nx = p.first + dx[i], ny = p.second + dy[i];

            if (0 <= nx && nx < m && 0 <= ny && ny < n && a[ny][nx] != '#' && d[ny][nx] == INF)
            {
                que.push(P(nx, ny));
                d[ny][nx] = d[p.second][p.first] + 1;
            }
        }
    }

    if (d[gy][gx] == INF)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << d[gy][gx] << endl;
    }
}