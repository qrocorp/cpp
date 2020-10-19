#include <bits/stdc++.h>
using namespace std;

long manhattan(vector<int> x)
{
    long d = 0;
    for (int a : x)
    {
        d += abs(a);
    }
    return d;
}

long double euclid(vector<int> x)
{
    unsigned long long d = 0;
    for (int a : x)
    {
        d += abs(a) * (long)abs(a);
    }
    return sqrtl(d);
}

int chebychev(vector<int> x)
{
    int d = 0;
    for (int a : x)
    {
        if (abs(a) > d)
        {
            d = abs(a);
        }
    }
    return d;
}
int main()
{
    cout << fixed << setprecision(15);
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x.at(i);
    }

    cout << manhattan(x) << endl;
    cout << euclid(x) << endl;
    cout << chebychev(x) << endl;
}