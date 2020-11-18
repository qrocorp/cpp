#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;

    sy *= -1;

    long double katamuki = (gy - sy) / (gx - sx);
    long double seppen = sy - katamuki * sx;
    long double answer = (-1) * seppen / katamuki;

    cout << fixed << setprecision(10) << answer << endl;
    /*
    katamuki * sx + sy = 0

*/
}