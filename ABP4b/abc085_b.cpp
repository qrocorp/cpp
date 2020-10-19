#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> d;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        d.push_back(a);
    }

    sort(d.begin(), d.end());
    int count = 1;
    for (int i = 0; i < d.size() - 1; i++)
    {
        if (d[i] < d[i + 1])
            count++;
    }

    cout << count << endl;
}