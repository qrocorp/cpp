#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    stack<int> c;
    string s;
    while (cin >> s)
    {
        if (s[0] == '+')
        {
            a = c.top();
            c.pop();
            b = c.top();
            c.pop();
            c.push(a + b);
        }
        else if (s[0] == '-')
        {
            b = c.top();
            c.pop();
            a = c.top();
            c.pop();
            c.push(a - b);
        }
        else if (s[0] == '*')
        {
            a = c.top();
            c.pop();
            b = c.top();
            c.pop();
            c.push(a * b);
        }
        else
        {
            int num = atoi(s.c_str());
            c.push(num);
        }
    }
    cout << c.top() << endl;
}