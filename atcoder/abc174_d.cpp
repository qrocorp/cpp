#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<char> c(n);
    int red = 0, white = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> c.at(i);
        if (c.at(i) == 'R')
            red++;
        else
            white++;
    }
    int count = 0, min_count = n, cross_w = 0, cross_r = red;

    if (red == 0 || white == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    //仕切り位置ごとに、右側、左側をそれぞれ一色にする場合の手数をもとめて、その最小値をとる
    for (int i = 1; i < n; i++)
    {
        if (c[i - 1] == 'W')
            cross_w++;
        else
            cross_r--;
        count = max(cross_w, cross_r);
        if (min_count > count)
            min_count = count;
    }

    cout << min_count << endl;
}