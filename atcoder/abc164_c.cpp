#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;

    set<string> s;

    for (int i = 0; i < n; i++)
    {
        string t;
        cin >> t;
        if (s.count(t))
            continue;
        else
        {
            s.insert(t);
            count++;
        }
    }

    cout << count << endl;
}