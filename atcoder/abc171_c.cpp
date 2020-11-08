#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n;
    cin >> n;

    string s;

    while (n)
    {
        n--;
        s = (char)('a' + (n % 26)) + s;
        n /= 26;
    }
    /*
    while (n)
    {
        int m = n % 26;
        if (m == 0)
        {
            s = 'z' + s;
            n = n / 26 - 1;
            continue;
        }

        s = (char)(m + 96) + s;
        n /= 26;
    }
*/
    cout << s << endl;
}