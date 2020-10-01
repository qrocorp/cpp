#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, a, b;
    cin >> x >> a >> b;

    x++;
    cout << x << endl;
    x = x * (a + b);
    cout << x << endl;
    x = x * x;
    cout << x << endl;
    x--;
    cout << x << endl;
}