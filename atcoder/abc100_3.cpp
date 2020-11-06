#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int64_t> a(n);
    for (int i = 0; i < n; i++)
        cin >> a.at(i);

    int64_t count = 0;

    for (int64_t x : a)
    {
        while (x % 2 == 0)
        {
            count++;
            x /= 2;
        }
    }

    cout << count << endl;
}