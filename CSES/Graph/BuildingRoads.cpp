#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define el "\n";
 
int MAX = 2*10e5;
 
vector<vector<int>>adj(MAX);
vector<bool>vis(MAX);
 
void dfs(int v){
    vis[v] = true;
 
    for(auto w:adj[v]) if(!vis[w]){
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
 
    vector<int>adc;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            adc.push_back(i);
            dfs(i);
        }
    }
 
    cout << adc.size()-1 << el;
    //for(auto x: adc) cout << x << el;
 
    for(int i = 0; i < adc.size()-1; i++){
        cout << adc[i] << " "<< adc [i+1];
        cout << el;
    }
 
 
    return 0;
}