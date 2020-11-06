#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s.size() == 2)
    {
        if (s.at(0) == s.at(1))
        {
            cout << 0 << endl;
            return 0;
        }
        else
        {
            cout << 1 << endl;
            return 0;
        }
    }

    int count = 0;
    string sub1 = "", sub2 = "";
    // sub1.append(1, s.at(0));

    for (int i = 0; i < s.size(); i++)
    {
        sub2 += s[i];
        if (sub1 != sub2)
        {
            sub1 = sub2;
            sub2 = "";
            count++;
        }
    }

    /*
    while (i < s.size())
    {
        sub2.append(1, s.at(i));
        i++;
        while (sub1 == sub2 && i < s.size())
        {
            sub2.append(1, s.at(i));
            i++;
        }
        if (sub1 == sub2 && i == s.size())
            break;
        sub1 = sub2;
        sub2 = "";
        count++;
    }
    */
    cout << count << endl;
}
