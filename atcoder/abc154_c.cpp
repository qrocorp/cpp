#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<long long> a;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        if (a.count(x))
        {
            cout << "NO" << endl;
            return 0;
        }
        else
        {
            a.insert(x);
        }
    }
    cout << "YES" << endl;
}