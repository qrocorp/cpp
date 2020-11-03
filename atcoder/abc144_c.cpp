#include <bits/stdc++.h>
using namespace std;

// 約数+商 - 2 の最小値を全探索

// 素因数分解は不要だったけど参考までに
vector<long long> prime_factorize(long long n)
{
    vector<long long> res;
    for (long long a = 2; a * a <= n; a++)
    {
        if (n % a != 0)
            continue;
        while (n % a == 0)
        {
            res.push_back(a);
            n /= a;
        }
    }
    if (n != 1)
        res.push_back(n);
    return res;
}

int main()
{
    long long n;
    cin >> n;

    long long answer = 1000000000001;
    for (long long a = 1; a * a <= n; a++)
    {
        if (n % a != 0)
            continue;
        if (answer > (a - 1) + (n / a - 1))
            answer = (a - 1 + (n / a - 1));
    }

    cout << answer << endl;

    /*
    vector<long long> res = prime_factorize(n);

    long long a = 1;
    long long b = 1;

    for (int i = 0; i < res.size(); i++)
    {
        if (i % 2 == 0)
            a *= res.at(i);
        else
            b *= res.at(i);
    }

    long long answer = (a - 1) + (b - 1);
    cout << answer << endl;
    */
}