#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }

    sort(a.begin(), a.end(), greater<long long>());
    long long ans = 0;
    int i = 0;
    while (true)
    {
        if (i > n - 3)
            break;
        long long s = a.at(i);
        if (s < a.at(i + 1) + a.at(i + 2))
        {
            ans += s + a.at(i + 1) + a.at(i + 2);
            break;
        }
        i++;
    }

    cout << ans << endl;
}