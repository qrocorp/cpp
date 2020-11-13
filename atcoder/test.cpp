#include <bits/stdc++.h>
using namespace std;

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