#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long h;
    cin >> h;
    long long num = 0;
    long long ans = 0;
    long long index = 1;

    while (h != 0)
    {
        num++;
        ans += index;
        index *= 2;
        h /= 2;
    }
    cout << ans << endl;
}