#include <bits/stdc++.h>
using namespace std;

vector<pair<long long, long long>> prime_factorize(long long n)
{
    vector<pair<long long, long long>> res;

    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i != 0)
            continue;
        long long ex = 0;

        while (n % i == 0)
        {
            ++ex;
            n /= i;
        }
        res.push_back({i, ex});
    }

    if (n != 1)
        res.push_back({n, 1});

    return res;
}

int main()
{
    long long n;
    cin >> n;

    vector<pair<long long, long long>> res = prime_factorize(n);

    long long ans = 0;

    for (int i = 0; i < res.size(); i++)
    {
        int ex = 1;
        while (true)
        {
            if (res.at(i).second < ex)
                break;
            ans++;
            res.at(i).second -= ex;
            ex++;
        }
    }

    cout << ans << endl;
}

/*
要するに素因数分解か
ただし同じ数を2回使えない
素数の指数の数によって





*/