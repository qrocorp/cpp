#include <bits/stdc++.h>
using namespace std;

int sum100(vector<int> &a)
{
    int result = 0;
    for (int i = 0; i < 100; i++)
    {
        result += a.at(i);
    }
    return result;
}

int main()
{
    vector<int> vec(100000000, 1);

    for (int i = 0; i < 500; i++)
    {
        cout << sum100(vec) << endl;
    }
}

/*
void min_and_max(int a, int b, int c, int &minimum, int &maximum)
{
    minimum = min(a, min(b, c));
    maximum = max(a, max(b, c));
}

int main()
{
    int minimum, maximum;
    min_and_max(3, 1, 5, minimum, maximum);
    cout << "minimum: " << minimum << endl;
    cout << "maximum: " << maximum << endl;
}
*/