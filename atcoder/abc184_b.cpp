#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, x;
    string s;
    cin >> n >> x >> s;

    for (int i = 0; i < n; i++)
    {
        if (x > 0 && s[i] == 'x')
            x--;
        else if (s[i] == 'o')
            x++;
    }

    cout << x << endl;
}