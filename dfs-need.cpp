/* need for any dfs */
#include<bits/stdc++.h>

// for 4 directional dfs
vector<pair<int,int>> v={
    {1,0},{0,1},{-1,0},{0,-1}
};

// validate function
bool vd(int i,int j,int n,int m){
    return i>=0 && j>=0 && i<n && j<m;
}
//dfs function
void dfs(int source,vector<bool>&vis,vector<int> adj[]){
     vis[source]=true;
     for(auto&it : adj[source]){
        if(vis[it]) continue;
        dfs(it,vis,adj);
     }
}


