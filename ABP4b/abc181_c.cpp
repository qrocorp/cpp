#include <bits/stdc++.h>
using namespace std;

pair<double, double> line(pair<double, double> p1, pair<double, double> p2)
{
    pair<double, double> p3;

    if (p2.first == p1.first)
    {
        p3.first = numeric_limits<double>::infinity();
        p3.second = p1.first;
    }
    else
    {
        double a = (p2.second - p1.second) / (p2.first - p1.first);
        double b = p1.second - a * p1.first;

        p3 = make_pair(a, b);
    }

    return p3;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<double, double>> z(n);
    for (int i = 0; i < n; i++)
    {
        cin >> z.at(i).first >> z.at(i).second;
    }

    map<pair<double, double>, int> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            pair<double, double> p1 = line(z.at(i), z.at(j));
            for (int k = j + 1; k < n; k++)
            {
                pair<double, double> p2 = line(z.at(i), z.at(k));
                if (p1 == p2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
}

/*
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> z(n);
    for (int i = 0; i < n; i++)
    {
        cin >> z.at(i).first >> z.at(i).second;
    }

    map<pair<double, double>, int> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            pair<double, double> p = line(z.at(i), z.at(j));

            if (m.count(p))
            {
                m.at(p) += 1;
            }
            else
            {
                m[p] = 1;
            }
        }
    }

    for (auto itr = m.begin(); itr != m.end(); ++itr)
    {
        if (itr->second >= 3)
        {
            cout << "Yes" << endl;
            cout << itr->first.first << ' ' << itr->first.second << endl;
            //return 0;
        }
    }
    // cout << "No" << endl;
}
*/