// Stable Sort
#include <bits/stdc++.h>
using namespace std;

struct Card
{
    char suit, value;
};

void bubble(vector<Card> &a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= i + 1; j--)
        {
            if (a.at(j).value < a.at(j - 1).value)
            {
                Card t = a.at(j);
                a.at(j) = a.at(j - 1);
                a.at(j - 1) = t;
            }
        }
    }
}

void selection(vector<Card> &a, int n)
{
    for (int i = 0; i < n; i++)
    {
        int minj = i;
        for (int j = i; j < n; j++)
        {
            if (a.at(j).value < a.at(minj).value)
                minj = j;
        }
        Card t = a.at(i);
        a.at(i) = a.at(minj);
        a.at(minj) = t;
    }
}

void print(vector<Card> &a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a.at(i).suit << a.at(i).value;
        if (i == n - 1)
            cout << endl;
        else
            cout << ' ';
    }
}

bool is_stable(vector<Card> &c1, vector<Card> &c2, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (c1.at(i).suit != c2.at(i).suit)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    vector<Card> c1(n), c2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c1.at(i).suit >> c1.at(i).value;
    }

    for (int i = 0; i < n; i++)
        c2.at(i) = c1.at(i);

    bubble(c1, n);
    selection(c2, n);

    print(c1, n);
    cout << "Stable" << endl;
    print(c2, n);
    if (is_stable(c1, c2, n))
    {
        cout << "Stable" << endl;
    }
    else
    {
        cout << "Not stable" << endl;
    }
}