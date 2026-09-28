#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

const int MAX = 2*1e5+5;

vector<vector<int>>vec(MAX);
vector<vector<int>>rev(MAX);
vector<bool>vis(MAX);

void dfs(int v){
    vis[v] = true;

    for(auto w: vec[v]) if(!vis[w]){
        dfs(w);
    }
}

void dfsrev(int v){
    vis[v] = true;

    for(auto w: rev[v]) if(!vis[w]){
        dfsrev(w);
    }
}

int main(){

    int n, m, dfsno = -1, cont = 0;
    bool ebfs = false;

    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int a, b;

        cin >> a >> b;

        vec[a].push_back(b);
        rev[b].push_back(a);

    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j<= n; j++){
            vis[j] = false;
            rev[j] = false;
        }
        dfs(i);
        dfsrev(i);
        
        for(int j = 1; j<= n; j++){
            if(vis[j] == false){
                cout << "NO " << i << " " << j << el;
                return 0;
            }
        }

    }

    cout << "YES" << el;


    return 0;
}