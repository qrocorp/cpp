#include <bits/stdc++.h>
using namespace std;

int count_report_num(vector<vector<int>> &children, int x)
{
    if (children.at(x).size() == 0)
    {
        return 1;
    }

    int total_num_report = 0;
    for (int c : children.at(x))
    {
        int num_report = count_report_num(children, c);
        total_num_report += num_report;
    }
    total_num_report++;
    return total_num_report;
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

    for (int i = 0; i < n; i++)
    {
        cout << count_report_num(children, i) << endl;
    }
}