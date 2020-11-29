#include <bits/stdc++.h>
using namespace std;
#define ll long long

//部分和問題を再帰（深さ優先探索）で解く（配列それぞれの数を足すかたさないかで分岐）、O(2^n)
bool dfs(ll i, ll n, ll k, ll sum, vector<ll> &a)
{
    if (i == n)
        return sum == k;

    if (dfs(i + 1, n, k, sum, a))
        return true;
    if (dfs(i + 1, n, k, sum + a[i], a))
        return true;

    return false;
}

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a.at(i);

    if (dfs(0, n, k, 0, a))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}