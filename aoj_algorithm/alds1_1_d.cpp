#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> r(n);
    for (int i = 0; i < n; i++)
        cin >> r.at(i);

    int max_profit = -1000000000;
    int min_price = r.at(0);

    for (int i = 1; i < n; i++)
    {
        max_profit = max(max_profit, r.at(i) - min_price);
        min_price = min(min_price, r.at(i));
    }
    cout << max_profit << endl;
}