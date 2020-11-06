#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    list<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    int64_t count = 0;
    while (!a.empty())
    {
        count += a.front() - 1;
        a.pop_front();
    }

    cout << count << endl;
}