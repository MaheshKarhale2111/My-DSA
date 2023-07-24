#include <bits/stdc++.h>
using namespace std;

void solve() {}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int row = 5;
  int col = 3;

  for (int i = 0; i < 9; i++) {
    cout <<(3 * (row / 3) + i / 3) << " " << (3 * (col / 3) + i % 3)<< endl;
  }

  return 0;
}