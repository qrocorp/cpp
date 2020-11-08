#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a.at(i);

    sort(a.begin(), a.end());

    int max_gcd = 0, max_k = 0;

    for (int k = 2; k <= a[a.size() - 1]; k++)
    {
        int gcd = 0;
        for (int i = 0; i < n; i++)
        {
            if (a.at(i) % k == 0)
            {
                gcd++;
            }
        }
        if (gcd > max_gcd)
        {
            max_gcd = gcd;
            max_k = k;
        }
    }

    cout << max_k << endl;
}