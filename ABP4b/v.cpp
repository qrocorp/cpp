#include <bits/stdc++.h>
using namespace std;

int complete_time(vector<vector<int>> &children, int x)
{
    if (children.at(x).size() == 0)
    {
        return 0;
    }

    int max_receive_time = 0;
    for (int c : children.at(x))
    {
        int receive_time = complete_time(children, c) + 1;
        max_receive_time = max(max_receive_time, receive_time);
    }

    return max_receive_time;
}

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    p.at(0) = -1;
    for (int i = 1; i < n; i++)
    {
        cin >> p.at(i);
    }

    vector<vector<int>> children(n);
    for (int i = 1; i < n; i++)
    {
        int parent = p.at(i);
        children.at(parent).push_back(i);
    }

    cout << complete_time(children, 0) << endl;
}

/*
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sum(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n) << endl;
}
*/