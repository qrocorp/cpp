#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;
using LL = long long;
using P = pair<int, int>;
const int INF = 1e9;
const int Max_N = 2e5 + 5;

LL const mod = 1000000007;

// struct mintがMOD用によく使われるようだ
struct mint
{
    LL x;
    mint(LL x = 0) : x(x % mod) {}
    mint &operator+=(const mint n)
    {
        x += n.x;
        if (x >= mod)
            x -= mod;
        return *this;
    }
    mint &operator-=(const mint n)
    {
        x -= n.x;
        if (x < 0)
            x += mod;
        return *this;
    }
    mint &operator*=(const mint n)
    {
        x *= n.x;
        x %= mod;
        return *this;
    }
    mint operator+(const mint n) const
    {
        mint res(*this);
        return res += n;
    }
    mint operator-(const mint n) const
    {
        mint res(*this);
        return res -= n;
    }
    mint operator*(const mint n) const
    {
        mint res(*this);
        return res *= n;
    }
    mint pow(LL n) const
    {
        if (n == 0)
            return 1;
        mint m = pow(n >> 1);
        m *= m;
        if (n & 1)
            m *= *this;
        return m;
    }
    // mint division for prime mod
    mint inv() const
    {
        return pow(mod - 2);
    }
    mint &operator/=(const mint n)
    {
        return (*this) *= n.inv();
    }
    mint operator/(const mint n) const
    {
        mint res(*this);
        return res /= n;
    }
};

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<mint> comb(Max_N);
    comb[0] = 1;
    rep(i, Max_N - 1)
    {
        mint p = n - i, q = i + 1;
        comb[i + 1] = comb[i] * p * q.inv();
    }
    mint ans = 0, m = 2;
    ans += m.pow(n);
    ans -= comb[a] + comb[b] + 1;

    cout << ans.x << endl;

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const long long MOD = 10e9 + 7;

ll modPow(ll a, ll n) //繰り返し二乗法 (((a^2)^2)^2)...
{
    if (n == 0)
        return 1;
    if (n == 1)
        return a % MOD;
    if (n % 2 == 1)
        return (a * modPow(a, n - 1)) % MOD;
    ll t = modPow(a, n / 2);
    return (t * t) % MOD;
}

ll combination(ll n, ll k)
{
    ll num = 1;
    for (int i = 1; i <= k; i++)
    {
        num = num * (n - i + 1) / i;
        num %= MOD;
    }
    return num;
}

int main()
{
    ll n, a, b;
    cin >> n >> a >> b;
    if (n == 2)
    {
        cout << 0 << endl;
        return 0;
    }

    ll ans = modPow(2, n);
    ans--; // nC0を外す

    ll com_a = combination(n, a);
    ll com_b = combination(n, b);

    ans -= com_a;

    /*
    if (ans < com_a)
        ans = MOD - (com_a - ans);
    else
        ans -= com_a;
    if (ans < com_b)
        ans = MOD - (com_b - ans);
    else
        ans -= com_b;

    cout << ans - com_a - com_b << endl;
}


n種類の花からx本ピックアップして花束をつくる nCx
ただしa本とb本はだめ

1本 nC1 = n
2本 nC2 = n * (n-1) / 2
3本 nC3 = n * (n-1) * (n-2) / 3 * 2
4本 nC4 =

5C0 = 1, 5C1 = 5, 5C2 = 10, 5C3 = 10, 5C4 = 5, 5C5 = 1;
二項係数 パスカルの三角形
n行の合計値は2^n
1
2
4
8
16
32
64

0本選ぶのを外す -1
a本選ぶのを外す nCa
b本選ぶのを外す nCb

*/