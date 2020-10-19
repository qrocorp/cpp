#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;
    vector<int> a(n), p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> p.at(i);
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] + p[j] == s)
                count++;
        }
    }
    cout << count << endl;
}