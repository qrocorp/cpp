#include <bits/stdc++.h>
using namespace std;
typedef pair<long long, long long> P;
#define ll long long
const long long INF = 10000000000;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<P> student(n);
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        student.at(i) = make_pair(a, b);
    }
    vector<P> point(m);
    for (int i = 0; i < m; i++)
    {
        ll c, d;
        cin >> c >> d;
        point.at(i) = make_pair(c, d);
    }

    vector<int> index(n);

    for (int i = 0; i < n; i++)
    {
        ll a = student.at(i).first, b = student.at(i).second;
        ll min = INF;
        for (int j = 0; j < m; j++)
        {
            ll c = point.at(j).first, d = point.at(j).second;
            ll dist = abs(a - c) + abs(b - d);
            if (dist < min)
            {
                min = dist;
                index.at(i) = j + 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << index.at(i) << endl;
    }
}