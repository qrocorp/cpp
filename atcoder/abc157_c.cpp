#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef long long ll;
using P = pair<int, int>;
const int INF = 1001001001;
const int mod = 1e9 + 7;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> s(M), c(M);
    rep(i, M)
    {
        cin >> s[i] >> c[i];
        s[i]--;
    }
    rep(i, 10000)
    {
        string t = to_string(i);
        if (t.size() != N)
        {
            continue;
        }
        bool ok = true;
        rep(j, M)
        {
            if (t[s[j]] != c[j] + '0')
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}

/*
int main()
{
    int n, m;
    cin >> n >> m;

    int answer = -1;

    for (int a = 0; a < pow(10, n); a++)
    {
        bool flag = false;
        string b = to_string(a);
        if (b.size() < n)
            continue;

        for (int i = 0; i < m; i++)
        {
            int s;
            char c;
            cin >> s >> c;
            cout << s << ' ' << c << endl;
            if (b.at(n - s) != c)
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            continue;
        }
        else
        {
            answer = a;
            break;
        }
    }

    cout << answer << endl;
}
*/
