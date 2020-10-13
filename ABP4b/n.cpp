#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> math(n);
    vector<int> english(n);

    for (int i = 0; i < n; i++)
    {
        cin >> math.at(i);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> english.at(i);
    }

    for (int i = 0; i < n; i++)
    {
        cout << math.at(i) + english.at(i) << endl;
    }
}

/*
int main()
{
    string str;
    str = "abcd";
    cout << str << endl;
    cout << str.at(0) << endl;
    cout << str.size() << endl;

    vector<int> vec;
    vec = {25, 100, 64};
    cout << vec.at(0) << endl;
    cout << vec.size() << endl;
}
*/