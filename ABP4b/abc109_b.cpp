#include <bits/stdc++.h>
using namespace std;

bool solve(vector<string> &words)
{
    for (int i = 0; i < words.size() - 1; i++)
    {
        for (int j = i + 1; j < words.size(); j++)
        {
            if (words[i] == words[j])
            {
                return false;
            }
        }
    }

    for (int i = 0; i < words.size() - 1; i++)
    {
        if (words[i].back() != words[i + 1].front())
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++)
    {
        cin >> words.at(i);
    }

    bool answer = solve(words);
    if (answer)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

/*
bool dup(vector<string> str)
{
    for (int i = 0; i < str.size() - 1; i++)
    {
        if (str[str.size() - 1] == str[i])
        {
            return true;
        }
    }
    return false;
}

bool shiri(string w1, string w2)
{
    if (w1.back() != w2[0])
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<string> words(n);
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }

    string answer = "No";
    int i = 0;
    while (true)
    {
        if (i == n - 1)
        {
            if (!dup(vector(words.begin(), words.begin() + n)))
            {
                answer = "Yes";
            }
        }
    }
    cout << answer << endl;

*/