#include <bits/stdc++.h>
using namespace std;

void solve(){
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {1,2,6,96};
    vector<int> a (5,1); // initilaize vector of size 5 with all elements = 1

    // cout<< v.size()<<endl;
    // cout<< v.capacity()<<endl;
    // v.push_back(5);
    // cout<<v[2]<<endl;
    
// for loop for vector (Same functionality as we used for lists in python )
// for ( int i: v)
// {
//     cout<<i<<endl;
// }
v.clear();
cout<< v.size()<<endl;
    cout<< v.capacity()<<endl;

    return 0;
}


/* 
Vector is a dynamic array 
When we try to add new elemtnt to vector it doubles its capicity
It will create new vector double of size of older one and copy all the 
old data into new one 
We can use shrink to fit to fit size 

v.size() for total number of elements present right now 
v.capacity() for total memory given 
v.clear() will make size= 0 and not capatity = 0


*/