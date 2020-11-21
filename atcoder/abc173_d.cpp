#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    sort(a.begin(), a.end(), greater<long long>());

    long long answer = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            continue;
        answer += a[i / 2];
    }

    cout << answer << endl;
}