#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int MAX = 1e5+5;

vector<vector<int>>df(MAX);
vector<vector<bool>>vis(MAX);

int n, m, a;
ll counta = 0;

ll dfs(int i, int j){
    if(i >= m || i < 0 || j >= a || j < 0)return 0;

        if(df[i][j] == 0)return 0;
        if(vis[i][j]!=0)return 0;
        
        vis[i][j] = 1;
        ll volume = df[i][j];

        int di[] = {-1, 1, 0, 0};
        int dj[] = {0, 0, -1, 1};

        for(int k = 0; k < 4; k++){
            volume+=dfs(i+di[k], j+dj[k]);
        }

        return volume;
}

int main(){_

    cin >> n;

    while(n--){
        cin >> m >> a;
        
        df.assign(m, vector<int>(a));
        vis.assign(m, vector<bool>(a, false));

        for(int i = 0; i < m; i++){
            for(int j = 0; j < a; j++){
                cin >> df[i][j];
            }
        }
        
        counta = 0;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < a; j++){
                if(df[i][j] > 0 && vis[i][j]==0){
                   counta=max(counta, dfs(i, j));
                }
            }
        }

            cout << counta << el;            
        
    }

    return 0;
}