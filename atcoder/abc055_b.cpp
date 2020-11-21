#include <bits/stdc++.h>
using namespace std;
const unsigned long long MOD = 1000000007;

int main()
{
    long long n;
    cin >> n;
    unsigned long long power = 1;
    for (int i = 1; i < n + 1; i++)
    {
        power *= i;
        power %= MOD;
    }

    cout << power << endl;
}