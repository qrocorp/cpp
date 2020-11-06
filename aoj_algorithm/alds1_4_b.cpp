// Binary Search

#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> s, int n, int key)
{
    int left = 0, right = n;
    while (left < right)
    {
        int mid = (left + right) / 2;
        if (s.at(mid) == key)
            return 1;
        else if (key < s.at(mid))
            right = mid;
        else
            left = mid + 1;
    }
    return 0;
}

int main()
{
    int n, q, key, count;

    scanf("%d", &n);
    vector<int> s(n);
    for (int i = 0; i < n; i++)
        scanf("%d", &s.at(i));

    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        scanf("%d", &key);
        if (binary_search(s, n, key))
            count++;
    }
    printf("%d\n", count);
}