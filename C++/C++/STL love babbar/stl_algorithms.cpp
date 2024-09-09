#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void solve(){
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {1,5,6,4,9,2,6,11}; 
    
sort(v.begin(), v.end());
for ( int i : v){
    cout<< i<< " ";
}
cout<<endl;
// Binary search - condition for binary search is array/vector should be sorted 
// syntax -> binary_search(startaddress, endaddress, valuetofind)
vector<int> :: iterator lower, upper; 
lower = lower_bound(v.begin(),v.end(),5);
// cout<< binary_search( v.begin(), v.end(), 4)<<endl;
// cout<<"Lower bound ->"<< lower_bound(v.begin(),v.end(),6);
cout<<lower - v.begin()<<endl;
    return 0;
}