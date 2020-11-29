#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = 0;
    ll p = a + b;
    ll q = a - b;
    ll r = c + d;
    ll s = c - d;

    if (a == c && b == d)
        ans = 0;
    else if (p == r || q == s || abs(a - c) + abs(b - d) <= 3)
        ans = 1;
    else if ((r - p) % 2 == 0 || (s - q) % 2 == 0 || abs(r - p) <= 3 || abs(s - q) <= 3)
        ans = 2;
    else
        ans = 3;

    cout << ans << endl;
}

/*
a+b = c+d //左上と右下
左上に動くと a+bは変わらない、a-bは

a-b = c-d //右上と左下
|a-c| + |b-d| <= 3 //距離が3マス以内

*/