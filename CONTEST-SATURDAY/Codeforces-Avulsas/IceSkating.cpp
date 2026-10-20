#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int MAX = 1e5+5;

vector<vector<int>>df(MAX);
vector<bool>vis(MAX);
int componentes = 0;

void dfs(int v){
    vis[v] = 1;

    for(auto u : df[v]){
        if(!vis[u]){
            dfs(u);
        }
    }
}

int n, m;

int main(){_

    cin >> n;
    int x = n;
    vector<pair<int, int>>pontos(n);
    for(int i = 0; i < n; i++){
        cin >> pontos[i].first >> pontos[i].second;
    }

    for(int i = 0; i < x; i++){
        for(int j = i+1; j < n; j++){
            if(pontos[i].first == pontos[j].first || pontos[i].second == pontos[j].second){
                df[i].push_back(j);
                df[j].push_back(i);
            }
        }
    }
    for(int i = 0; i < x; i++){
        if(!vis[i]){
            dfs(i);
        componentes++;
        }
    }
    cout << componentes-1 << el;
    return 0;
}