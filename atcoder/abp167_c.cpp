#include <bits/stdc++.h>
using namespace std;
const long long INF = 100000000;

int main()
{
    int n, m, x;
    cin >> n >> m >> x;

    vector<vector<int>> c(n, vector<int>(m + 1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            cin >> c.at(i).at(j);
        }
    }

    long long min_price = INF;
    for (int i = 0; i < (1 << n); i++) // 本を選ぶbitset
    {
        vector<int> y(m, 0); // 各アルゴリズムの理解度
        int price = 0;
        for (int j = 0; j < n; j++) // 各本を走査
        {
            if (i & (1 << j))
            {
                price += c.at(j).at(0);
                for (int k = 0; k < m; k++) //その書籍の理解度を加算
                {
                    y.at(k) += c.at(j).at(k + 1);
                }
            }
        }
        sort(y.begin(), y.end());
        if (y.at(0) >= x)
        {
            if (min_price > price)
                min_price = price;
        }
    }
    if (min_price == INF)
        cout << -1 << endl;
    else
        cout << min_price << endl;
}
