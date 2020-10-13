#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> vec;

    for (int i = 0; i < h; i++)
    {
        string temp;
        cin >> temp;
        vec.push_back(temp);
    }

    for (int i = 0; i < w + 2; i++)
    {
        cout << '#';
    }
    cout << endl;
    for (int i = 0; i < h; i++)
    {
        cout << '#' << vec[i] << '#' << endl;
    }

    for (int i = 0; i < w + 2; i++)
    {
        cout << '#';
    }
    cout << endl;
}