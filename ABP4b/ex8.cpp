#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a == 1)
    {
        int p, n;
        cin >> p >> n;
        cout << p * n << endl;
    }
    else if (a == 2)
    {
        string t;
        int p, n;
        cin >> t >> p >> n;
        cout << t << "!" << endl;
        cout << n * p << endl;
    }
}