#include <bits/stdc++.h>
using namespace std;

#define f(i,n) for (int i = 0; i < n; i++)
#define int long long
#define print(n) cout << n << endl;
#define print2(a,b) cout << a <<" "<<b<< endl;
#define printv(v)  for (auto i : v)  {cout << i << " ";} cout << endl;
#define vall(v) v.begin(), v.end()
#define printmap(m) for(auto i: m) { cout <<m.first <<" "<<m.second<< endl;}
#define yes {cout<<"YES"<<endl; return;}
#define no {cout<<"NO"<<endl; return ;}

pair<int,int> sol(int n){
    // int num = 0; 
    vector<int> small,large;
    while(n){
        int temp = n%10; 
        small.push_back(temp); 
        large.push_back(temp); 
        n = n/10;  
    }

    sort(vall(small)); 
    sort(vall(large),greater<int>()); 

    int s = 0, l = 0; 

    f(i,4) l  = l*10 + small[i]; 
    f(i,4) s  = s*10 + large[i]; 

    return {s,l}; 
}


void solve(){
    int n; 
    cin>>n; 
    int count = 0; 

    while(1){
        int num1 = sol(n).first; 
        int num2 = sol(n).second; 
        int ans = abs(num1- num2); 
        if(n == ans) break;
        count++; 
        n = ans;  
    }

    print2(n,count); 
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >>t;
    while(t--) solve();
    return 0;
}