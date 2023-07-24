bool dfs(int node, unordered_map<int, bool>& isVisited, 
unordered_map<int, bool>& dfsVisited, vector<int> adj[],bool &cycleDetected ) {
       if(cycleDetected){
           return true; 
       }
    isVisited[node] = true;
    dfsVisited[node] = true;

    for (auto i : adj[node]) {
        if (i == node) {
            return true;  // Self-loop detected
        } else if (!isVisited[i]) {
            cycleDetected = dfs(i, isVisited, dfsVisited, adj, cycleDetected);
            if (cycleDetected) {
                // break; 
                return true;
                
            }
        } else if (dfsVisited[i]) {
            // break; 
            return true;
        }
    }

    dfsVisited[node] = false;
    return false;
}

bool isCyclic(int V, vector<int> adj[]) {
    unordered_map<int, bool> isVisited;
    unordered_map<int, bool> dfsVisited;
    bool cycleDetected = false; 

    
    for (int i = 0; i < V; i++) {
        if (!isVisited[i]) {
            bool ans = dfs(i, isVisited, dfsVisited, adj, cycleDetected);
            if (cycleDetected) {
                return true;
            }
        }
    }

    return false;
}