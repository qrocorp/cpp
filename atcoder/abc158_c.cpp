#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a, b;
    cin >> a >> b;

    ll ans = 1;
    while (true)
    {
        if (ans > 1009)
            break;
        if (ans * 8 / 100 == a && ans / 10 == b)
            break;
        ans++;
    }
    if (ans > 1000)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
}

/*
x * 8/100 = a;
100x = a / 8;
100x = b / 10



*/