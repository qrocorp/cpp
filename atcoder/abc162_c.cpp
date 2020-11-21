#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int k;
    cin >> k;
    int answer = 0;
    for (int a = 1; a <= k; a++)
    {
        for (int b = 1; b <= k; b++)
        {
            for (int c = 1; c <= k; c++)
            {
                answer += gcd(a, gcd(b, c));
            }
        }
    }

    cout << answer << endl;
}