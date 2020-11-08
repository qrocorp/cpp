#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    set<int> p;

    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        p.insert(b);
    }

    int l = x, g = x;

    while (true)
    {
        if (!p.count(l))
        {
            cout << l << endl;
            break;
        }
        else if (!p.count(g))
        {
            cout << g << endl;
            break;
        }
        l--;
        g++;
    }
    return 0;
}