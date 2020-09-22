#include "std_lib_facilities.h"

int main(){
    vector<double> temps;
    double temp;
    while (cin>>temp)
        temps.push_back(temp);

    double sum = 0;
    for (int i = 0; i < temps.size(); i++) sum += temps[i];
    cout << "Average temperature: " << sum/temps.size() << endl;

    sort(temps.begin(), temps.end());

    cout << "Median temperature: " << temps[temps.size()/2] << endl;
}

