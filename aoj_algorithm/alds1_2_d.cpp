// Shell Sort

#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &a, int n, int g, int &c)
{

    for (int i = g; i < n; i++)
    {
        int v, j;
        v = a.at(i);
        j = i - g;
        while (j >= 0 && a.at(j) > v)
        {
            a.at(j + g) = a.at(j);
            j = j - g;
            c++;
        }
        a.at(j + g) = v;
    }
}

void shell_sort(vector<int> &a, int n)
{
    int count = 0;
    vector<int> g;
    for (int h = 1;;)
    {
        if (h > n)
            break;
        g.push_back(h);
        h = 3 * h + 1;
    }

    for (int i = g.size() - 1; i >= 0; i--)
    {
        insertion_sort(a, n, g.at(i), count);
    }

    cout << g.size() << endl;
    for (int i = g.size() - 1; i >= 0; i--)
    {
        cout << g.at(i);
        if (i == 0)
            cout << endl;
        else
            cout << ' ';
    }

    cout << count << endl;

    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a.at(i);

    shell_sort(a, n);
}