#include <bits/stdc++.h>
using namespace std;

class graph {

public:
  unordered_map<int, list<int>> adj;

  void addEdge(int u, int v, bool direction) {
    // direction = 0 -> undirected
    // direction = 1 -> directed

    // create an edge of from u to v
    adj[u].push_back(v);

    if (direction == 0) {
      // agar undirected graph hai to v se u bhi edge ban sakti  hia
      adj[v].push_back(u);
    }
  }

  void printAdjList() {
    for (auto i : adj) {
      cout << i.first << "->";

      for (auto j : i.second) {
        cout << j << " ";
      }
      cout << endl;
    }
  }
};

int main(){

  int n;
  cout << "Enter the nuumber of edges : " << endl;
  cin >> n;

  int m;
  cout << " NUmber of nodes : " << endl;
  cin >> m;

  graph g;

  for (int i = 0; i < n; i++) {
    int u, v;
    cin >> u >> v;
    g.addEdge(u, v, 0);
  }

  //   printing graph
  g.printAdjList();
  return 0;
}