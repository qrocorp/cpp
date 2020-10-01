#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int answer = 1;
    for (int i = 1; i < s.size(); i += 2)
    {
        char op = char(s.at(i));
        if (op == '+')
        {
            answer++;
        }
        else if (op == '-')
        {
            answer--;
        }
    }
    cout << answer << endl;
}
