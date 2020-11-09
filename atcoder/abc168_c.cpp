#include <bits/stdc++.h>
using namespace std;
const double PI = 3.14159265358979323846;

int main()
{
    int a, b, h, m;
    cin >> a >> b >> h >> m;

    double total_min = h * 60 + m;
    // long double a_rad = 0, b_rad = 0;

    long double rad = PI / 180 * ((total_min / 2) - (m * 6));
    //a_rad = (total_min / 2) / 180 * PI;
    //b_rad = (m * 6) / 180 * PI;

    //long double rad = a_rad - b_rad;

    long double answer = sqrt(a * a + b * b - 2 * a * b * cos(rad));
    cout << setprecision(15);
    cout << answer << endl;
}