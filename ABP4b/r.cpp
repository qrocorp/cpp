#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 3, 2, 5};
    for (int x : a)
    {
        cout << x << endl;
    }

    string str = "hello";
    for (char c : str)
    {
        if (c == 'l')
        {
            c = 'L';
        }
        cout << c;
    }
    cout << endl;
}