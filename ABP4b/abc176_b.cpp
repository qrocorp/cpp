#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    long count = 0;
    for (char x : n)
    {
        int i_x = (int)x - (int)'0';
        count += i_x;
    }

    if (count % 9 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}