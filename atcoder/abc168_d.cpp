#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll, ll> P;
const ll INF = 1000000;

/*
無向グラフをつくる
根を決める（部屋１）
幅優先探索で各部屋の指すべきところを決める
*/

int main()
{
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> graph(n); //無向グラフ

    for (ll i = 0; i < m; i++)
    {
        ll a, b;
        cin >> a >> b;
        a--, b--; //0スタートで管理
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<ll> ans(n, -1);
    queue<ll> que;

    ans[0] = 0;
    que.push(0);
    //深さゼロから、
    while (!que.empty())
    {
        ll n = que.front();
        que.pop();
        for (auto x : graph[n]) //行き先を指す
        {
            if (ans[x] != -1)
                continue;
            ans[x] = n; //最短ルートの部屋番号を格納
            que.push(x);
        }
    }

    cout << "Yes" << endl;
    for (int i = 1; i < n; i++)
        cout << ans[i] + 1 << endl; //1スタートに戻す
}

/*
int main()
{
    ll n, m;
    cin >> n >> m;

    vector<P> aisle;                      //通路のリスト
    vector<vector<ll>> aisle_list(n + 1); //各部屋の通路の添字をリスト化, 添字が部屋番号、値が通路の場所

    for (int i = 0; i < m; i++)
    {
        ll a, b;
        cin >> a >> b;
        if (a > b) //これやってもうまくたどれないな
        {
            ll temp = b;
            b = a;
            a = temp;
        }
        aisle.push_back(make_pair(a, b)); //0..m-1
        aisle_list.at(a).push_back(i);    //1..n
        aisle_list.at(b).push_back(i);    //両方の値に対してリストいれとく
    }

    vector<ll> sign(n + 1, INF); //各部屋の道標の示し先 1..n

    queue<pair<ll, vector<ll>>> que;
    que.push(make_pair(1, aisle_list.at(1)));

    sign[0] = 0;
    sign[1] = 0;

    while (que.size())
    {
        ll x = que.front().first; //もとの部屋

        cout << x << endl;

        vector<ll> l = que.front().second; // 指している通路のindex
        que.pop();

        for (int i = 0; i < l.size(); i++)
        {
            cout << l[i] << ' ';
        }
        cout << endl;

        for (int i = 0; i < l.size(); i++)
        {
            ll y = aisle[l[i]].first;
            ll z = aisle[l[i]].second;
            if (z == x)
            {
                ll temp = z;
                z = y;
                y = temp;
            }
            cout << y << ' ' << z << endl;

            if (sign[z] == INF)
            {
                sign[z] = y;
                que.push(make_pair(z, aisle_list.at(z)));
            }
        }
    }

    for (int i = 0; i < sign.size(); i++)
    {
        cout << sign.at(i) << ' ';
    }
    cout << endl;

    auto itr = find(sign.begin() + 2, sign.end(), 0);
    if (*itr)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
        for (int i = 2; i < n + 1; i++)
        {
            cout << sign[i] << endl;
        }
    }
}



幅優先っぽい

1の部屋からスタートして、最小手数をマークしていく
すべての部屋がマークできるかどうか

すべての部屋の距離と指す部屋をpairにする？

小さい値を左にしてpush
各部屋の通路の添字をリスト化

部屋1から順に、指す部屋リストをqueueにpush
queueのリストの要素それぞれが指す部屋のsign前の部屋をいれる
(signの値が0でないことが条件か)
指す部屋の通路リストをpush


*/