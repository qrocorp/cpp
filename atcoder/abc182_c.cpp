#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int len = n.length();
    int sum = 0;
    int zero_count = 0, one_count = 0, two_count = 0;
    for (int i = 0; i < n.length(); i++)
    {
        int x = (int)n[i] - '0';
        sum += x;
        if (x % 3 == 0)
            zero_count++;
        else if (x % 3 == 1)
            one_count++;
        else
            two_count++;
    }

    if (sum % 3 == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else if (sum % 3 == 1)
    {
        if (one_count)
            if (len == 1)
                cout << -1 << endl;
            else
                cout << 1 << endl;
        else if (len > 2)
            cout << 2 << endl;
        else
            cout << -1 << endl;
    }
    else
    {
        if (two_count)
            if (len == 1)
                cout << -1 << endl;
            else
                cout << 1 << endl;
        else if (len > 2)
            cout << 2 << endl;
        else
            cout << -1 << endl;
    }
}

/*
3
6
9
12
123
126
129
132
999
3の倍数は各桁の数字の和が3の倍数になる

各桁の合計値を算出
3の倍数との差分を算出

*/