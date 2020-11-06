#include <bits/stdc++.h>
using namespace std;
// #define N 6

int main()
{
    int h, w, k, answer = 0;
    cin >> h >> w >> k;
    vector<vector<char>> c(h, vector<char>(w));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
            cin >> c.at(i).at(j);
    }
    // rowとcolumnをmaskしても#のままのマスを数えあげて、kと一致するかを確認
    for (int maskR = 0; maskR < (1 << h); maskR++)
    {
        for (int maskC = 0; maskC < (1 << w); maskC++)
        {
            int black = 0;
            for (int i = 0; i < h; i++)
            {
                for (int j = 0; j < w; j++)
                {
                    if ((maskR & (1 << i)) == 0 && (maskC & (1 << j)) == 0 && c.at(i).at(j) == '#')
                        //if ((1 & (maskR >> i)) == 0 && (1 & (maskC >> j)) == 0 && c.at(i).at(j) == '#')
                        black++;
                }
            }
            if (black == k)
                answer++;
        }
    }
    cout << answer << endl;
}

/*

int count_h(vector<vector<char>> &c, bitset<N> b)
{
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (b.test(i))
        {
            for (int j = 0; j < c.at(0).size(); j++)
            {
                if (c.at(i).at(j) == '#')
                {
                    count++;
                }
            }
        }
    }
    return count;
}

int count_w(vector<vector<char>> &c, bitset<N> b)
{
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (b.test(i))
        {
            for (int j = 0; j < c.size(); j++)
            {
                if (c.at(j).at(i) == '#')
                {
                    count++;
                }
            }
        }
    }
    return count;
}

int count_d(vector<vector<char>> &c, bitset<N> b1, bitset<N> b2)
{
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (b1.test(i))
        {
            for (int j = 0; j < c.at(0).size(); j++)
            {
                if (b2.test(j) && c.at(i).at(j) == '#')
                {
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{
    int h, w, k;
    cin >> h >> w >> k;
    int black_count = 0;
    vector<vector<char>> c(h, vector<char>(w));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            char ch;
            cin >> ch;
            c.at(i).at(j) = ch;
            if (ch == '#')
                black_count++;
        }
    }

    int diff = black_count - k;
    if (diff < 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else if (diff == 0)
    {
        cout << 1 << endl;
        return 0;
    }
    if (h == 1 && w == 1 && k == 0 && black_count == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    int count = 0, answer = 0;
    bitset<N> bit_h;
    bitset<N> bit_w;
    // cout << "bit_h  bit_w  bit_d   h w d" << endl;
    for (int i = 0; i < (1 << h); i++) // bit_h
    {
        bit_h = i;
        for (int j = 0; j < (1 << w); j++) // bit_w
        {
            bit_w = j;

            // cout << bit_h << ' ' << bit_w << ' ' << bit_d << "  ";
            count += count_h(c, bit_h);
            // cout << count_h(c, bit_h) << ' ';
            count += count_w(c, bit_w);
            // cout << count_w(c, bit_w) << ' ';
            count -= count_d(c, bit_h, bit_w);
            // cout << count_d(c, bit_h, bit_w) << ' ';
            // cout << count << ' ';
            if (count == diff)
            {
                answer++;
                // cout << 'o';
            }
            // cout << endl;
            count = 0;
        }
    }

    cout << answer << endl;
}
*/