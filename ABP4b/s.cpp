#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(3), b(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> a.at(i);
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> b.at(i);
    }

    bool answer = false;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i] == b[j])
            {
                answer = true;
                break;
            }
        }
    }

    if (answer)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}