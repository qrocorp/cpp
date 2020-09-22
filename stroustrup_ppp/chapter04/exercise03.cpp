#include "../lib_files/std_lib_facilities.h"

int main(){
    double dist;
    vector<double> dist_list;
    double sum;
    cout << "Enter a distance between two cities: ";
    while(cin>>dist){
        dist_list.push_back(dist);
    }
    sort(dist_list.begin(), dist_list.end());

    cout << "The shortest distance : " << dist_list[0] << " km\n";
    cout << "The longest distance : " << dist_list[dist_list.size()-1] << " km\n";

    for(int i = 0; i < dist_list.size(); i++){
        sum += dist_list[i];
    }
    cout << "Sum: " << sum << " km\n";

    cout << "Average distance: " << sum/dist_list.size() << " km\n";

}
