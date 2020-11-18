#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    map<string, long long> s;

    for (int i = 0; i < n; i++)
    {
        string t;
        cin >> t;

        sort(t.begin(), t.end());
        if (s.count(t))
        {
            s[t] += 1;
        }
        else
        {
            s[t] = 1;
        }
    }

    long long ans = 0;
    for (auto t : s)
    {
        auto value = t.second;
        if (value < 2)
            continue;
        ans += value * (value - 1) / 2;
    }

    cout << ans << endl;
}

/*
anagram
文字数10
同じ文字列はない
int変換して各文字を足し上げ、同じやつ

文字列を並べ替える-> map格納 -> かぶってるときにはカウント増やす

map<string, int> で
*/