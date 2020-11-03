#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a.at(i);

    int current_max = 0;
    int64_t count = 0;

    for (int i = 0; i < n; i++)
    {
        int x = a.at(i);
        if (current_max < x)
            current_max = x;
        count += current_max - x;
    }
    cout << count << endl;
}