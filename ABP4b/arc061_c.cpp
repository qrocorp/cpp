#include <bits/stdc++.h>
using namespace std;

string s;
long long answer = 0;

void add(string l)
{
    string num;
    for (int k = 0; k < l.length(); k++)
    {
        if (l[k] == '+')
        {
            answer += atoi(num.c_str());
            num = "";
        }
        else
        {
            num += l[k];
        }
    }
    if (num.length() != 0)
    {
        answer += stoll(num);
    }
}

string search(int i, string t)
{
    if (s.length() == i)
    {
        add(t);
        return t;
    }
    search(i + 1, t + '+' + s[i]);
    search(i + 1, t + s[i]);
    return t;
}

int main()
{
    cin >> s;
    string t;
    t += s[0];
    search(1, t);
    cout << answer << endl;
}

/*
10C10 = 1
10C9 = 10
10C8 = 10*9/2*1 = 45
10C7 = 10*9*8/3*2*1 = 120
10C6 = 10*9*8*7/4*3*2*1 = 210
10C5 = 10*9*8*7*6/5*4*3*2*1 = 252
10C4 = 210
10C3 = 120
10C2 = 45
10C1  = 10

total: 1023

*/