#include <bits/stdc++.h>
using namespace std;


/* 
PSEUDO CODE : 
1. find ultimate parent of u and v , called as pu and pv 
2. find rank of pu and pv 
3. Connnect smaller ranker to higher ranker


*/

class DisjointSet{
    vector<int> rank,parent; 
public: 
    //constructor
    DisjointSet(int n){
        rank.resize(n+1,0); // 0 based indexing thus n+1
        parent.resize(n+1); 
        for(int i = 0; i <=n; i++){
            parent[i] = i; 
        }
    }

    int findUPar(int node){
        // find ultimate parent 
        if(node == parent[node]) return node; 

        return parent[node] = findUPar(parent[node]); 
    }

    void unionByRank(int u,int v){
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v); 

        if(ulp_u == ulp_v) return; 
        if(rank[ulp_u] < rank[ulp_v]){
            parent[ulp_u] = ulp_v; 
            // no change is rank as smaller guy gets attached to bigger guy
        }
        else if (rank[ulp_u] > rank[ulp_v]){
                 parent[ulp_v] = ulp_u; 
        }
        else {
            // if both ranks are same 
            // do anything 
             parent[ulp_u] = ulp_v; 
             // since both are same, rank of v will increase 
             rank[ulp_v]++; 
        }

    }


};




signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    DisjointSet ds(7); 
    ds.unionByRank(1,2);
    ds.unionByRank(2,3);
    ds.unionByRank(4,5);
    ds.unionByRank(6,7);
    ds.unionByRank(5,6);
    
    if(ds.findUPar(3) == ds.findUPar(7)){
        cout<<"Yes"<<endl; 
    }
    else {
        cout<<"NO"<<endl; 
    }

    ds.unionByRank(3,7);

    if(ds.findUPar(3) == ds.findUPar(7)){
        cout<<"Yes"<<endl; 
    }
    else {
        cout<<"NO"<<endl; 
    }
    
    return 0;
}