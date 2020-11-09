#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, k, d;
    cin >> x >> k >> d;

    x = abs(x);
    long long mod = x % d;
    long long quot = x / d;
    long long mod_d = abs(x % d - d);
    long long answer = 0;

    if (k < quot)
        answer = x - (k * d);
    else
    {
        if ((k - quot) % 2 == 0)
            answer = mod;
        else
            answer = mod_d;
    }

    cout << answer << endl;
}
