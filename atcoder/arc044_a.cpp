#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool is_like_prime(int n)
{
    if (n == 1)
        return false;
    if (is_prime(n))
        return true;

    int first = n % 10;
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }

    if (first % 2 != 0 && first != 5 && sum % 3 != 0)
        return true;

    return false;
}

int main()
{
    int n;
    cin >> n;

    if (is_like_prime(n))
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;
}