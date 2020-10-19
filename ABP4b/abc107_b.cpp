#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;

    vector<vector<char>> data(h, vector<char>(w));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> data.at(i).at(j);
        }
    }

    vector<int> white_row;
    vector<int> white_column;

    for (int i = 0; i < h; i++)
    {
        bool wh = true;
        for (int j = 0; j < w; j++)
        {
            if (data.at(i).at(j) == '#')
            {
                wh = false;
                break;
            }
        }
        if (!wh)
        {
            continue;
        }
        else
        {
            white_row.push_back(i);
        }
    }

    for (int i = 0; i < w; i++)
    {
        bool wh = true;
        for (int j = 0; j < h; j++)
        {
            if (data.at(j).at(i) == '#')
            {
                wh = false;
                break;
            }
        }
        if (!wh)
        {
            continue;
        }
        else
        {
            white_column.push_back(i);
        }
    }

    for (int i = 0; i < h; i++)
    {
        auto result = find(white_row.begin(), white_row.end(), i);
        if (result != white_row.end())
        {
            continue;
        }
        else
        {
            for (int j = 0; j < w; j++)
            {
                auto result = find(white_column.begin(), white_column.end(), j);
                if (result != white_column.end())
                {
                    continue;
                }
                else
                {
                    cout << data.at(i).at(j);
                }
            }
            cout << endl;
        }
    }
}