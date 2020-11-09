#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
        cin >> h.at(i);

    vector<bool> flag(n, true);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;

        if (h.at(a - 1) < h.at(b - 1))
            flag.at(a - 1) = false;
        else if (h.at(a - 1) == h.at(b - 1))
        {
            flag.at(a - 1) = false;
            flag.at(b - 1) = false;
        }
        else
            flag.at(b - 1) = false;
    }

    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        if (flag.at(i))
            answer++;
    }

    cout << answer << endl;
}
