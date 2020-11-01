#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef __int128_t Int128;

/*
int main()
{
    int64_t n;
    cin >> n;

    int64_t A = 0;
    int64_t B = 0;
    int64_t th = 1;
    int64_t fi = 1;
    int64_t num = 0;
    bool out = false;
    bool found = false;

    while (true)
    {
        ++A;
        th *= 3;
        if (th > n)
            break;
        while (true)
        {
            B++;
            fi *= 5;
            num = th + fi;
            if (num == n)
            {
                found = true;
                break;
            }
            else if (num > n)
            {
                B = 0;
                fi = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (found)
    {
        cout << A << ' ' << B << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
*/

int main()
{
    int64_t n;
    cin >> n;

    bool found = false;
    int a = 0;
    int b = 0;
    for (int i = 1; i < 38; i++)
    {
        for (int j = 1; j < 26; j++)
        {
            Int128 th = pow(3, i);
            Int128 fi = pow(5, j);
            if (th + fi == n)
            {
                found = true;
                a = i;
                b = j;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }
    if (found)
    {
        cout << a << ' ' << b << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}

/*
int main()
{
    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            unsigned long long th = pow(3, i);
            unsigned long long fi = pow(5, j);
            cout << th + fi << endl;
        }
    }
}
*/

/*
int main()
{
    int64_t n;
    cin >> n;

    int64_t max = 0;
    int max_a = 0;
    int max_b = 0;
    for (int a = 1; (int64_t)pow(3, a) <= n; a++)
    {
        for (int b = 1; (int64_t)pow(5, b) <= n; b++)
        {
            int64_t th = (int64_t)pow(3, a);
            int64_t fi = (int64_t)pow(5, b);
            if (max < th + fi)
            {
                max = th + fi;
                max_a = a;
                max_b = b;
            }
        }
    }
    cout << max << endl;
    cout << max_a << ' ' << max_b << endl;
}

*/