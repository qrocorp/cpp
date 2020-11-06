#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    vector<long long> a(n + 1);
    a.at(0) = 0;
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        long long x;
        scanf("%lld", &x);
        sum += x;
        a.at(i) = sum;
    }

    vector<long long> b(m + 1);
    b.at(0) = 0;
    sum = 0;
    for (int i = 1; i <= m; i++)
    {
        long long x;
        scanf("%lld", &x);
        sum += x;
        b.at(i) = sum;
    }

    long long count = 0;
    long long j = m;

    for (int i = 0; i <= n; i++)
    {
        if (a.at(i) > k)
            break;
        while (b.at(j) > k - a.at(i))
            j--;
        count = max(count, i + j);
    }
    cout << count << endl;
}
