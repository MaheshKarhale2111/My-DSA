#include <bits/stdc++.h>
using namespace std;

int fibonacci1(int n, vector<int> &dp ){
    if(n == 0 || n==1){
            return n; 
        }
    if(dp[n] != -1){
            return dp[n]; 
        }
    dp[n] = fibonacci1(n-1, dp) + fibonacci1(n-2, dp); 
    return dp[n]; 
}

int fibonacci2(int n, vector<int>& dp) {
    dp[0] = 0; 
    dp[1] = 1; 

    for( int i = 2; i <= n ; i++){
        dp[i] = dp [i-1] + dp[i-2]; 
        // cout<<dp[i]<<endl; 
    }

    return dp[n]; 
}

int fibonacci3(int n){
    int curr, prev1, prev2 ; 
    prev1 = 1 ; 
    prev2 = 0 ;

     if(n==0){
        return 0;
     }
    for( int i = 2; i <= n ; i++){
        curr = prev1 + prev2 ; 
        prev2 = prev1 ; 
        prev1 = curr ; 
        // cout<<dp[i]<<endl; 
    }
    return prev1; // better to use prev1 instead of curr as it will automatically handle n==1 case 
}
int main() {
            int n = 6; 
  vector<int> dp(n+1,-1) ;
            
        // int ans = fibonacci1(n,dp); // this is by recursion top down approach 
        // int ans = fibonacci2(n,dp); // this by bottom up approach 
        int ans = fibonacci3(n); // this by space optimization
        cout<<ans; 
        

  return 0;
}