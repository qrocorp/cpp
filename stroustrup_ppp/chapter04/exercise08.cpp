#include "../lib_files/std_lib_facilities.h"

int main(){
    int i = 1;
    int grain = 1;
    int sum = 0;
    
    sum += grain;
    cout << "Position\tGrain\tSum\n"
         << "---------------------------------------------\n";
    cout << i << "\t" << grain << "\t" << sum << endl;

    while(true){
        i++;
        grain *= 2;
        sum += grain;
        cout << i << '\t' << grain << '\t' << sum << endl;
        if (sum >= 1000000000) break;
    }
}
