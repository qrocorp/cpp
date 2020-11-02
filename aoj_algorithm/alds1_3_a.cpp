#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    stack<int> c;
    string s;
    while (true)
    {
        s = cin.get();
        cout << s << endl;
        if (atoi(s.c_str()) == istream::traits_type::eof())
            break;
        if (s == "+")
        {
            a = c.top();
            c.pop();
            b = c.top();
            c.pop();
            c.push(a + b);
        }
        else if (s == "-")
        {
            a = c.top();
            c.pop();
            b = c.top();
            c.pop();
            c.push(a - b);
        }
        else if (s == "*")
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