
   bool dfs(int node,  vector<bool> isVisited, 
    vector<bool> dfsVisited, vector<int> adj[]) {
    isVisited[node] = 1;
    dfsVisited[node] = 1;

    for (auto i : adj[node]) {
       
        if (!isVisited[i]) {
            if (dfs(i, isVisited, dfsVisited, adj)) {
                return 1;   
            }
        } else if (dfsVisited[i] == dfsVisited[node]) {
            return 1;
        }
    }

    dfsVisited[node] = 0;
    return 0;
}

bool isCyclic(int V, vector<int> adj[]) {
    // unordered_map<int, bool> isVisited;
    // unordered_map<int, bool> dfsVisited;
    vector<bool> isVisited(V,0) ; 
    vector<bool> dfsVisited(V,0); 

    
    for (int i = 0; i < V; i++) {
        if (!isVisited[i]) {
            if (dfs(i, isVisited, dfsVisited, adj)) {
                return true;
            }
        }
    }

    return false;
}