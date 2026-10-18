#include <bits/stdc++.h>
using namespace std; 
 
#define el "\n"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
int MAX = 2*10e5;
 
vector<vector<int>>adj(MAX);
vector<bool>vis(MAX);
vector<int>pai(MAX);
 
int ini = -1, sec = -1;
 
void dfs(int v){
    vis[v] = true;
 
    for(auto w:adj[v]){
        if(w == pai[v])continue;
        if(ini != -1)return;
        if(vis[w]){
            ini = w;
            sec = v;
            return;
        }
        pai[w] = v;
        dfs(w);
    }
}
 
 
int main(){
    int n, m;
 
    cin >> n >> m;
 
    for(int i = 0; i < m; i++){
        int a, b;
 
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
 
    for(int i = 1; i <= n; i++){
        if(!vis[i] && ini == -1) dfs(i);
    }
 
        if(ini == -1){
            cout << "IMPOSSIBLE" << el;
        }else{
            vector<int>ans;
            ans.push_back(ini);
 
            int at = sec;
 
            while(at!= ini && at !=0){
                ans.push_back(at);
                at = pai[at];
            }
            ans.push_back(ini);
            cout << ans.size() << el;
 
            for(auto x: ans)cout << x << " ";
            cout << el;
    }
 
 
    return 0;
}
