#include <bits/stdc++.h>
using namespace std;

struct UnionFind
{
    vector<int> par, siz;
    UnionFind(int n) : par(n, -1), siz(n, 1){};

    int root(int x)
    {
        if (par[x] == -1)
            return x;
        return par[x] = root(par[x]);
    }

    bool unite(int x, int y)
    {
        x = root(x);
        y = root(y);
        if (x == y)
            return false;

        if (siz[x] < siz[y])
            swap(x, y);
        par[y] = x;
        siz[x] += siz[y];
        return true;
    }

    bool issame(int x, int y)
    {
        return root(x) == root(y);
    }

    int size(int x)
    {
        return siz[root(x)];
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    UnionFind uf(n);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        uf.unite(a - 1, b - 1);
    }

    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        if (uf.size(i) > answer)
        {
            answer = uf.size(i);
        }
    }

    cout << answer << endl;
}