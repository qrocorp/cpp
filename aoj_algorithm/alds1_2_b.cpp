// Selection Sort
#include <bits/stdc++.h>
using namespace std;

void print_vector(vector<int> &a)
{
    for (int i = 0; i < (int)a.size(); i++)
    {
        cout << a.at(i);
        if (i == (int)a.size() - 1)
            cout << endl;
        else
            cout << ' ';
    }
}

int selection_sort(vector<int> &a, int n)
{
    int minj, count;
    for (int i = 0; i < n; i++)
    {
        minj = i;
        for (int j = i; j < n; j++)
        {
            if (a.at(j) < a.at(minj))
                minj = j;
        }
        if (i != minj)
        {
            count++;
            swap(a.at(i), a.at(minj));
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a.at(i);

    int count = selection_sort(a, n);

    print_vector(a);
    cout << count << endl;
}