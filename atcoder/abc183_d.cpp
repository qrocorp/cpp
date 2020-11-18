#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, w;
    cin >> n >> w;

    vector<long long> q(200010, 0);

    // 増える、減るを記録
    for (int i = 0; i < n; i++)
    {
        long long s, t, p;
        cin >> s >> t >> p;
        q.at(s) = q.at(s) + p;
        q.at(t) = q.at(t) - p;
    }

    //累積和をたどって、sumを超えるかどうかチェック
    long long sum = 0;
    bool answer = true;
    for (int i = 0; i < n; i++)
    {
        sum += q.at(i);
        if (sum > w)
        {
            answer = false;
        }
    }

    if (answer)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
/* 二重ループだと時間まにあわない
    for (int i = 0; i < n; i++)
    {
        long long s, t, p;
        cin >> s >> t >> p;
        for (int j = s; j < t; j++)
        {
            q.at(j) += p;
        }
    }

    sort(q.begin(), q.end());

    if (q.at(200009) <= w)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}


文字通りプログラムにするとTLE (200000 * 200000);

*/