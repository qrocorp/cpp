#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }

    map<ll, ll> cnt;

    for (auto x : a)
    {
        if (cnt.count(x))
        {
            cnt.at(x) += 1;
        }
        else
        {
            cnt[x] = 1;
        }
    }

    int max_count = 0;
    int max_index = -1;
    for (auto p : cnt)
    {
        auto index = p.first;
        auto count = p.second;

        if (max_count < count)
        {
            max_count = count;
            max_index = index;
        }
    }

    cout << max_index << ' ' << max_count << endl;
}