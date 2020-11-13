#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int a = -118; a < 120; a++)
    {
        for (int b = -119; b < 119; b++)
        {
            if (pow(a, 5) - pow(b, 5) == x)
            {
                cout << a << ' ' << b << endl;
                return 0;
            }
        }
    }

    return 0;
}

/*

a^5 - b^5 = x
x- b^5 = a^5

1^5 - 0^5 = 1
2^5 - 1^5 = 31
3^5 - 2^5 = 211

120^5 - 119^5 = 1019663401

-118 <= A <= 119

*/