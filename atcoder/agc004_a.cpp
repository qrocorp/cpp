#include <bits/stdc++.h>
using namespace std;

int main()
{
    int64_t a, b, c;
    cin >> a >> b >> c;

    if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    cout << min((a * b), min((b * c), (c * a))) << endl;
}
