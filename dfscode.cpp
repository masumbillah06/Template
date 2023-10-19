const int V = 1e5+10;
vector<int> g[V];
bool vis[V];

void dfs(int vertex){
    if(vis[vertex]) return;
    vis[vertex] = true;
    for(int child : g[vertex]){
        dfs(child);
    }
}
