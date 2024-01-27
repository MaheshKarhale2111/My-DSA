#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<long long int> vec;

  while (n--) {
    long long int temp;
    cin >> temp;
    vec.push_back(temp);
  }

  auto it = max_element(vec.begin(), vec.end());
  int maxi = *it;
  int maxindex = it - vec.begin();

  int next = vec[maxindex];
  int prev = vec[maxindex - 1];
  int ans = 0;

  while (k > 0) {
  }

  //   for(auto i : vec2){
  //     cout<<i<<" ";
  //   }
  //   cout<<endl;

  //   reverse(vec.begin(), vec.end());

  //   string ans = "YES";

  //   for (int i = 0; i < vec.size(); i++) {
  //     if (vec[i] == vec2[i]) {
  //       ans = "NO";
  //     }
  //   }

  //   cout << ans << endl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}