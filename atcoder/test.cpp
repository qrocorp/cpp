#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {0, 1, 2, 3};
    do
    {
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i];
            if (i != a.size() - 1)
                cout << " ";
        }
        cout << endl;
    } while (next_permutation(a.begin() + 1, a.end()));
    return 0;
}

/*
long long fact(long long n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    long long n;
    cin >> n;

    cout << fact(n) << endl;
}
*/
/*
int main()
{
    string ch;
    cin >> ch;
    // int x = atoi(ch.at(0).c_str());
    // cout << x << endl;
    int y = (int)(ch.at(0) - '0');
    cout << y << endl;
}

*/