#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a;
    double b1;
    cin >> a >> b1;
    long long b2 = b1 * 100 + 0.5; //誤差は小数点をさらに追加して解消できる？
    a *= b2;
    a /= 100;

    cout << a << endl;
}
