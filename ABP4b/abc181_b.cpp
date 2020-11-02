#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unsigned long long count = 0;
    for (int i = 0; i < n; i++)
    {
        unsigned long long a, b;
        cin >> a >> b;
        count += (b - a + 1) * (a + b) / 2;
    }

    cout << count << endl;
}