#include "std_lib_facilities.h"

double max(double v1, double v2);
double min(double v1, double v2);
double sum(double v1, double v2);
double diff(double v1, double v2);
double prod(double v1, double v2);
double ratio2(double v1, double v2);

int main(){
    double val1 =0;
    double val2 = 0;
    cout << "Enter two integers: ";
    cin >> val1 >> val2;
    cout << "Max: " << max(val1, val2) << "\n";
    cout << "Min: " << min(val1, val2) << "\n";
    cout << "Sum: " << sum(val1, val2) << "\n";
    cout << "Difference: " << diff(val1, val2) << "\n";
    cout << "Produce: " << prod(val1, val2) << "\n";
    cout << "Ratio: " << ratio2(val1, val2) << "\n";

}

double max(double v1, double v2) {
    if(v1 >= v2) {
        return v1;
    } else {
        return v2;
    }
}

double min(double v1, double v2) {
    if(v1 >= v2) {
        return v2;
    } else {
        return v1;
    }
}

double sum(double v1, double v2) {
    return v1 + v2;
}

double diff(double v1, double v2){
    return v1 - v2;
}

double prod(double v1, double v2){
    return v1 * v2;
}

double ratio2(double v1, double v2){
    return v1/v2;
}
