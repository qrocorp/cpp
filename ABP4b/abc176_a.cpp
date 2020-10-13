#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, t;
    cin >> n >> x >> t;

    int minutes = 0;

    minutes += (n / x) * t;
    if (n % x != 0)
    {
        minutes += t;
    }
    cout << minutes << endl;
}