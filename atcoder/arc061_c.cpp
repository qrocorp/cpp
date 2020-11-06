#include <bits/stdc++.h>
using namespace std;

int64_t calc(string str)
{
    vector<int> a;
    int64_t x = 0, sum = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) == '+')
        {
            a.push_back(x);
            x = 0;
        }
        else
        {
            x = x * 10 + (int)(str.at(i) - '0');
        }
        if (i == str.length() - 1)
            a.push_back(x);
    }

    for (int i = 0; i < a.size(); i++)
    {
        // cout << a.at(i) << endl;
        sum += a.at(i);
    }
    // cout << sum << endl;
    return sum;
}

int main()
{
    string s;
    cin >> s;
    int64_t sum = 0;

    bitset<9> bit;
    for (int i = 0; i < (1 << s.length() - 1); i++)
    {
        string sub_s = s;
        bit = i;
        // cout << bit << endl;
        int count = 0;
        for (int j = 0; j < s.length() - 1; j++)
        {
            if (i & (1 << j))
            {
                sub_s.insert(j + 1 + count, "+");
                count++;
            }
        }
        // cout << sub_s << endl;
        sum += calc(sub_s);
    }

    cout << sum << endl;
}