#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n;
    long long k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> s;
    vector<int> ord(n + 1, -1);
    int c = 1, l = 0;

    int v = 1;
    while (ord[v] == -1)
    {
        ord[v] = s.size();
        s.push_back(v);
        v = a[v - 1];
    }
    c = s.size() - ord[v];
    l = ord[v];

    if (k < l)
        cout << s[k] << endl;
    else
    {
        k -= l;
        k %= c;
        cout << s[l + k] << endl;
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    vector<long long> a(n + 1);
    for (int i = 0; i < n; i++)
        cin >> a.at(i + 1);

    vector<long long> b;
    set<long long> c;

    //遷移におけるループの開始と終点を特定する必要あり
    b.push_back(1);
    c.insert(1);
    long long i = 1;
    vector<long long>::iterator itr;
    while (true)
    {
        if (c.count(a.at(i)))
        {
            itr = find(b.begin(), b.end(), a.at(i));
            break;
        }
        b.push_back(a.at(i));
        c.insert(a.at(i));
        i = a.at(i);
    }

    long long non_loop = *itr - 1;
    long long loop_len = b.size() - non_loop - 1;
    long long pos = 0;
    if (k < b.size())
    {
        pos = k;
    }
    else
    {
        pos = non_loop + (k - non_loop) % loop_len;
    }
    cout << *itr << ' ' << non_loop << ' ' << loop_len << ' ' << pos << endl;

    cout << b.at(pos) << endl;
}
*/