#include <bits/stdc++.h>
using namespace std;

const unsigned long long INF = (1 << 31);

int main()
{
    int n, k;
    cin >> n >> k;

    unsigned long long answer = 0;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            answer += k;
            continue;
        }

        answer *= (k - 1);
    }

    cout << answer << endl;
}
