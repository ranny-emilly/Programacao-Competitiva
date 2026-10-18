#include <bits/stdc++.h>
using namespace std;
 
#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
const int MAXN = 1005; 
char df[MAXN][MAXN];   
bool vis[MAXN][MAXN];  
int n, m;


void dfs(int l, int c){   
    if(l < 0 || l >= n || c < 0 || c >= m)return;
    if(df[l][c] == '#'||vis[l][c]==1)return;
    
    vis[l][c] = 1;
    dfs(l-1, c);
    dfs(l+1, c);
    dfs(l, c+1);
    dfs(l, c-1);
}

int main(){_
    cin >> n >> m;
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> df[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(df[i][j] == '.' && !vis[i][j]){
                count ++;
                dfs(i, j);
            }
        }
    }

  cout << count << el;



return 0;
}