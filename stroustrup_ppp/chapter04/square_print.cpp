#include "std_lib_facilities.h"

int square(int a);

int main(){
    int i = 0;
    while (i < 100) {
        cout << i << '\t' << square(i) << '\n';
        ++i;
    }
}

int square(int a){
    int sum = 0;
    for(int i = 0; i < a; i++){
        sum += a;
    }
    return sum;
}
