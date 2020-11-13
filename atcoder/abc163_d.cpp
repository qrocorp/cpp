#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

long long fact(long long n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

long long combination(long long n, long long r)
{
    if (r == 0 || r == n)
        return 1;
    else if (r == 1)
        return n;
    return (combination(n - 1, r - 1) + combination(n - 1, r)) % MOD;
}

int main()
{
    long long n, k;
    cin >> n >> k;

    vector<long long> dp(n + 2); // 0個〜n個それぞれ選ぶときのパターン

    dp[0] = 0;

    long long lower = 0;
    long long upper = 0;

    for (int i = 1; i <= n + 1; i++)
    {
        lower += i - 1;
        upper += n - (i - 1);
        dp[i] = upper - lower + 1;
    }

    long long sum = 0;
    for (int i = k; i <= n + 1; i++)
    {
        sum += dp[i] % MOD;
    }
    cout << sum % MOD << endl;
}

/*
x+0..x+Nから
k個以上の数をえらぶ
0を選ぶ場合もxの数がかわるので考慮が必要
k個以上で同一の数値になるケースを考慮する必要があり
選択数ををN+1 -> kとした場合の個数カウントがよい？

0 - 9として
10個以上選ぶ: 1
9個以上選ぶ: 1 + 10 nC1 = n
8個以上選ぶ: 1+10+45 (n)*(n-1)/2*1
7個以上選ぶ:


10*9/2*1 10C2

10*9*8 / 3*2*1 10C3 = 10C3 /7 *4 

10*9*8*7 / 4*3*2*1 10C4

10C10 = 10..1 / 10..1 = 1
10C9 = 10..2 / 9..1 10C9 = 10C10 /1 *10
1 = 10 - 9 10 = 10
10C8 = 10..3 / 8..1 10C8 = 10C9 /2 *9
2 = 10-8 9 = 



nCr = nCr+1 /(n-r+1) *r

*/
