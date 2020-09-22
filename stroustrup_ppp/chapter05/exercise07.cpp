#include "../lib_files/std_lib_facilities.h"

// the quadratic formula

vector<double> solution(double a, double b, double c)
{
    //pre-condition a,b,c are double
    //post condition return 1 vector
    vector<double> quad_sol;

    //check if a solution exists
    if((b*b - 4*a*c) < 0) error("solution not exists");

    //quadratic formula
    double x1 = (-b + sqrt(b*b - 4.0*a*c))/2.0*a;
    double x2 = (-b - sqrt(b*b - 4.0*a*c))/2.0*a;

    quad_sol.push_back(x1);
    //check multiple root
    if(x1 != x2) quad_sol.push_back(x2);

    return quad_sol;
}

int main()
{
    double a = 0; double b = 0; double c = 0;
    cout << "Enter three number to solve quadratic solutions.\n"
         << "(a)x^2 + bx + c = 0\n";

    cin >> a >> b >> c;
    vector<double> quad_sol;
    quad_sol = solution(a, b, c);

    cout << "The solution is ";
    for(int i = 0; i < quad_sol.size(); i++)
        cout << quad_sol[i] << "  ";
    cout << "\n";

}
