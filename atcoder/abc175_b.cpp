#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long> l(n);
    for (int i = 0; i < n; i++)
    {
        cin >> l.at(i);
    }

    sort(l.begin(), l.end());

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            for (int k = 0; k < j; k++)
            {
                if (l.at(i) != l.at(j) && l.at(j) != l.at(k) && l.at(k) + l.at(j) > l.at(i))
                    count++;
            }
        }
    }

    cout << count << endl;
}