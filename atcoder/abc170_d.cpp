#include <bits/stdc++.h>
using namespace std;

void print(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i);
        if (i == a.size() - 1)
            cout << endl;
        else
            cout << ' ';
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }

    sort(a.begin(), a.end());
    // a.erase(unique(a.begin(), a.end()), a.end());

    int count = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        if (i == 0)
        {
            if (a.at(i) != a.at(i + 1))
                count++;
            break;
        }

        bool flag = false;
        for (int j = i - 1; j >= 0; j--)
        {
            if (a.at(i) % a.at(j) == 0 || a.at(i) == a.at(j))
            {
                flag = true;
                break;
            }
        }
        if (!flag)
            count++;
    }
    cout << count << endl;
}