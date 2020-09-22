#include "std_lib_facilities.h"

int max(int v1, int v2);
int min(int v1, int v2);
int sum(int v1, int v2);
int diff(int v1, int v2);
int prod(int v1, int v2);
double ratio2(int v1, int v2);

int main(){
    int val1 =0;
    int val2 = 0;
    cout << "Enter two integers: ";
    cin >> val1 >> val2;
    cout << "Max: " << max(val1, val2) << "\n";
    cout << "Min: " << min(val1, val2) << "\n";
    cout << "Sum: " << sum(val1, val2) << "\n";
    cout << "Difference: " << diff(val1, val2) << "\n";
    cout << "Produce: " << prod(val1, val2) << "\n";
    cout << "Ratio: " << ratio2(val1, val2) << "\n";

}

int max(int v1, int v2) {
    if(v1 >= v2) {
        return v1;
    } else {
        return v2;
    }
}

int min(int v1, int v2) {
    if(v1 >= v2) {
        return v2;
    } else {
        return v1;
    }
}

int sum(int v1, int v2) {
    return v1 + v2;
}

int diff(int v1, int v2){
    return v1 - v2;
}

int prod(int v1, int v2){
    return v1 * v2;
}

double ratio2(int v1, int v2){
    return double(v1)/v2;
}
