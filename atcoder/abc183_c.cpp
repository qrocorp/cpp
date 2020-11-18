#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    vector<vector<long long>> t(n, vector<long long>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> t.at(i).at(j);
        }
    }

    vector<int> index;
    for (int i = 0; i < n; i++)
    {
        index.push_back(i);
    }
    int answer = 0;

    do
    {
        int time = 0;
        for (int i = 0; i < n; i++)
        {
            time += t.at(index[i]).at(index[(i + 1) % n]);
        }
        if (time == k)
            answer++;
    } while (next_permutation(index.begin() + 1, index.end()));

    cout << answer << endl;
}

/*
    do
    {
        int time = 0;
        for (int i = 0; i < n; i++)
        {
            time += t[index[i]][index[(i + 1) % n]];
            if (time == k)
                answer++;
        }
    } while (next_permutation(index.begin() + 1, index.end()));

    cout << answer << endl;
}
/*
    if (n == 2)
    {
        long long count = 0;
        long long answer = 0;
        for (int a = 1; a < n; a++)
        {
            count = t[0][a] + t[a][0];
            if (count == k)
                answer++;
        }
        cout << answer << endl;
        return 0;
    }
    if (n == 3)
    {
        long long count = 0;
        long long answer = 0;
        for (int a = 1; a < n; a++)
        {
            for (int b = 1; b < n; b++)
            {
                if (a == b)
                    continue;
                count = t[0][a] + t[a][b] + t[b][0];
                if (count == k)
                    answer++;
            }
        }
        cout << answer << endl;
        return 0;
    }
    if (n == 4)
    {
        long long count = 0;
        long long answer = 0;
        for (int a = 1; a < n; a++)
        {
            for (int b = 1; b < n; b++)
            {
                if (a == b)
                    continue;
                for (int c = 1; c < n; c++)
                {
                    if (c == a || c == b)
                        continue;
                    count = t[0][a] + t[a][b] + t[b][c] + t[c][0];
                    if (count == k)
                        answer++;
                }
            }
            cout << answer << endl;
            return 0;
        }
    }

    if (n == 5)
    {
        long long count = 0;
        long long answer = 0;
        for (int a = 1; a < n; a++)
        {
            for (int b = 1; b < n; b++)
            {
                if (a == b)
                    continue;
                for (int c = 1; c < n; c++)
                {
                    if (c == a || c == b)
                        continue;
                    for (int d = 1; d < n; d++)
                    {
                        if (d == a || d == b || d == c)
                            continue;
                        count = t[0][a] + t[a][b] + t[b][c] + t[c][d] + t[d][0];
                        if (count == k)
                            answer++;
                    }
                }
            }
        }
        cout << answer << endl;
        return 0;
    }
    if (n == 6)
    {
        long long count = 0;
        long long answer = 0;
        for (int a = 1; a < n; a++)
        {
            for (int b = 1; b < n; b++)
            {
                if (a == b)
                    continue;
                for (int c = 1; c < n; c++)
                {
                    if (c == a || c == b)
                        continue;
                    for (int d = 1; d < n; d++)
                    {
                        if (d == a || d == b || d == c)
                            continue;
                        for (int e = 1; e < n; e++)
                        {
                            if (d == a || e == b || e == c || e == d)
                                continue;
                            count = t[0][a] + t[a][b] + t[b][c] + t[c][d] + t[d][e] + t[e][0];
                            if (count == k)
                                answer++;
                        }
                    }
                }
            }
        }
        cout << answer << endl;
        return 0;
    }
    if (n == 7)
    {
        long long count = 0;
        long long answer = 0;
        for (int a = 1; a < n; a++)
        {
            for (int b = 1; b < n; b++)
            {
                if (a == b)
                    continue;
                for (int c = 1; c < n; c++)
                {
                    if (c == a || c == b)
                        continue;
                    for (int d = 1; d < n; d++)
                    {
                        if (d == a || d == b || d == c)
                            continue;
                        for (int e = 1; e < n; e++)
                        {
                            if (d == a || e == b || e == c || e == d)
                                continue;
                            for (int f = 1; f < n; f++)
                            {
                                if (f == a || f == b || f == c || f == d || f == e)
                                    continue;
                                count = t[0][a] + t[a][b] + t[b][c] + t[c][d] + t[d][e] + t[e][f] + t[f][0];
                                if (count == k)
                                    answer++;
                            }
                        }
                    }
                }
            }
        }
        cout << answer << endl;
        return 0;
    }
    if (n == 8)
    {
        long long count = 0;
        long long answer = 0;
        for (int a = 1; a < n; a++)
        {
            for (int b = 1; b < n; b++)
            {
                if (a == b)
                    continue;
                for (int c = 1; c < n; c++)
                {
                    if (c == a || c == b)
                        continue;
                    for (int d = 1; d < n; d++)
                    {
                        if (d == a || d == b || d == c)
                            continue;
                        for (int e = 1; e < n; e++)
                        {
                            if (d == a || e == b || e == c || e == d)
                                continue;
                            for (int f = 1; f < n; f++)
                            {
                                if (f == a || f == b || f == c || f == d || f == e)
                                    continue;
                                for (int g = 1; g < n; g++)
                                {
                                    if (g == a || g == b || g == c || g == d || g == e || g == f)
                                        continue;
                                    count = t[0][a] + t[a][b] + t[b][c] + t[c][d] + t[d][e] + t[e][f] + t[f][g] + t[g][0];
                                    if (count == k)
                                        answer++;
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << answer << endl;
        return 0;
    }
    
}
*/
