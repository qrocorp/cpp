#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h.at(i);
    }

    sort(h.begin(), h.end());

    long long ans = 0;

    if (h.size() <= k)
    {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < h.size() - k; i++)
    {
        ans += h.at(i);
    }

    cout << ans << endl;
}