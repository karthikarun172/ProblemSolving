#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int N,val;
    vector<int> arr;
    int remove_val;
    cout << "enter the length and value of the array" << endl;

    cin >> N;

    for(int i = 0;i<N;i++){
        cin >> val;
        arr.push_back(val);
    }

    cin >> remove_val; 
    arr.erase(arr.begin()+remove_val-1);

    int r1,r2;

    cout << "enter the range : " << endl;
    cin >> r1 >> r2;
    arr.erase(arr.begin() + r1 - 1,arr.begin() + r2 - 1);

    cout << endl;
    for(int i = 0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
}