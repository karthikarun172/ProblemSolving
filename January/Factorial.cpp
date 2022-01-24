#include <iostream>
#include <vector>
#include <algorithm>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

int main(){
    long long int val,ans = 1;

    cout << "enter the val: " << endl;
    cin >> val;

    for(long long int i = val ;i >= 1 ;i--){
        ans *= i;
    }

    cout << ans << endl;
}