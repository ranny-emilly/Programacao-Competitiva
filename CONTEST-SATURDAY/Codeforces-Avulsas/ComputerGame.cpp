#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int MAX = 1e5+5;

vector<vector<char>>df(MAX);
vector<vector<bool>>vis(MAX);

int n, m;

bool dfs(int i, int j){
    if(i >= 2 || i < 0 || j >= m || j < 0)return 0;
        if(df[i][j] == '1')return 0;
        if(vis[i][j]!=0)return 0;
        
        if(i== 1 && j ==m-1)return 1;
        vis[i][j] = 1;

        for(int di = -1; di <= 1; di++){
            for(int dj = -1; dj <= 1; dj++){
                if(di == 0 && dj == 0)continue;
                if(dfs(i+di, j+dj))return 1;
            }
        }

        return 0;
}

int main(){

    cin >> n;

    while(n--){_
        cin >> m;

        df.assign(2, vector<char>(m));
        vis.assign(2, vector<bool>(m, 0));
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < m; j++){
                cin >> df[i][j];
            }
        }

        if(dfs(0, 0)){
            cout << "YES" << el;            
        }
        else cout << "NO" << el;
    }

    return 0;
}