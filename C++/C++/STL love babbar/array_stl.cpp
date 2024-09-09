#include <bits/stdc++.h>
using namespace std;

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  array<int, 4> a;
  for (int i = 0; i <a.size() ; i++){
    cin>> a[i];
  }
  a.fill(4);
  
for (int i = 0; i <a.size() ; i++){
    cout<<a[i]<<endl;
  }
  return 0;
}