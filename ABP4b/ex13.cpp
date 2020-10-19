#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> as;
    int sum = 0;
    int average;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        as.push_back(a);
        sum += a;
    }
    average = sum / n;

    for (int i = 0; i < n; i++)
    {
        int diff = abs(as[i] - average);
        cout << diff << endl;
    }
}