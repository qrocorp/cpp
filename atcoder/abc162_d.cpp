#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    long long r_count = 0, g_count = 0, b_count = 0; //無用なミスを回避するためにできるだけ型はそろえておこう
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
            r_count++;
        else if (s[i] == 'G')
            g_count++;
        else
            b_count++;
    }
    long long answer = r_count * g_count * b_count;
    if (answer == 0)
    {
        cout << answer << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        char a = s[i];
        /*
        for (int j = i + 1; j < ceil((n + i) / 2.0); j++)
        {
            char b = s[j];
            char c = s[i + (j - i) * 2];
        */
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] == s[j])
                continue;
            char b = s[j];
            long long k = 2 * j - i;
            if (k >= n || s[i] == s[k] || s[j] == s[k])
                continue;
            answer--;
        }
    }

    cout << answer << endl;

    /*
    int count = 0;
    long long max_count = (n * (n - 1) * (n - 2)) / (3 * 2); // nC3
    long long wrong_count = 0;
    //2文字が一致するところのすべての組み合わせ
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (s[i] == s[j])
                wrong_count +=
    }

    for (int i = 0; i < s.length() - 3; i++)
    {
        char a = s[i];
        for (int j = i + 1; j < s.length() - 1; j++)
        {
            char b = s[j];
            if (a == b)
                continue;
            for (int k = j + 1; k < s.length(); k++)
            {
                char c = s[k];
                if ((a == b || b == c || c == a) || j - i == k - j)
                    continue;
                count++;
            }
        }
    }

    cout << count << endl;
*/
}

/*
R, G, Bそれぞれの文字をピック
それぞれの文字が等間隔ではないものが有効
全体から、NGの分を差し引くのがよい？

3つのうち一番小さい文字数を起点にするとよい？？
ここから、距離が等しいやつを除くのがよい？

*/
