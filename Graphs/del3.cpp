#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin>>n ; 
    vector<int> vec; 

    for (int i = 0; i < n; i++)
    {
        int temp; 
        cin>>temp; 
       vec.push_back(temp); 
    }

    // covert to base of 10 
    

    __int128 num = 0; 

    for(int i = 0; i< n; i++){ 
        num = num + vec[i]*pow(2,i); 
    }
    // cout<<num;

    // convert to base of 6 

    vector<int> ans; 

    while(num >= 6){
        // cout<<num<<endl;
        int rem = num %6;
         num = num/6  ;
         ans.push_back(rem); 
    }
    ans.push_back(num); 

    // return ans;

    for(auto i : ans){
        cout<<i<<" "; 
    }    
    cout<<endl;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >>t;
    while(t--) solve();
    return 0;
}