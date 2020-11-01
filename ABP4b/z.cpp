#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<string, int> p("abc", 3);
    cout << p.first << endl;

    p.first = "hello";
    cout << p.first << endl;
    cout << p.second << endl;

    p = make_pair("*", 1);

    string s;
    int a;
    tie(s, a) = p;

    cout << s << endl;
    cout << a << endl;
}
