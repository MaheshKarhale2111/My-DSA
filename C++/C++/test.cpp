#include <bits/stdc++.h>
using namespace std;

void solve(){
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, int> marksmap;
    marksmap["mahesh"]= 82;
    marksmap["param"]= 62;
    marksmap["yogesh"]= 99;

    map<string ,int> :: iterator iter;
    for ( iter = marksmap.begin(); iter!= marksmap.end(); iter++){
        cout<< (*iter).first <<" "<<(*iter).second<<endl;    }
    return 0;
}