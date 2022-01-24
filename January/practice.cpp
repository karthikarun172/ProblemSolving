#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
    vector<int> val; 
    int v[5] = {4,2,1,3,2};

    for(int i = 0;i < 5;i++){
        val.push_back(v[i]);
    }

    for(int i = 0;i < val.size();i++){
        cout  <<  val[i] << " ";
    }
    cout << endl;
    cout << "======" << endl;
    sort(val.begin(),val.end());

    for(auto i : val){
        cout << i << " ";
    }


}