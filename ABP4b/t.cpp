#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    vector<vector<int>> data(3, vector<int>(4));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> data.at(i).at(j);
        }
    }
    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (data.at(i).at(j) == 0)
                count++;
        }
    }
    cout << count << endl;
    */
    /*
    vector<vector<int>> data2(3);
    data2.at(0).push_back(1);
    data2.at(0).push_back(2);
    data2.at(0).push_back(3);

    data2.at(1).push_back(4);
    data2.at(1).push_back(5);
    data2.at(1).push_back(6);
    data2.at(1).push_back(7);

    data2.at(2).push_back(8);
    data2.at(2).push_back(9);

    for (int i = 0; i < data2.size(); i++)
    {
        for (int j = 0; j < data2.at(i).size(); j++)
        {
            cout << data2.at(i).at(j) << ' ';
        }
        cout << endl;
    }
    cout << endl;
*/
    int n;
    cin >> n;
    vector<vector<vector<char>>> data(n, vector<vector<char>>(3, vector<char>(3)));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cin >> data.at(i).at(j).at(k);
            }
        }
    }

    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (data.at(i).at(j).at(k) == 'o')
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}