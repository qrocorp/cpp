#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string answer;
    if (a * b % 2 == 1)
    {
        answer = "Yes";
    }
    else
    {
        answer = "No";
    }
    cout << answer << endl;
}