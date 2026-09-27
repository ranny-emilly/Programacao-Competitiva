#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define el "\n";

int main(){

    int n,m, linhaini = 0, colini = 0;
    cin >> n >> m;
    char mat[n][m];
    bool vis[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
            vis[i][j] = 0;
            if(mat[i][j] == 'o'){
                linhaini = i;
                colini = j;
                vis[i][j] = 1;
            }
        }
    }

    bool her=1;
    int i = linhaini;
    int j = colini;
    
    while(her == 1){
        if(i!= n-1 && mat[i+1][j]=='H' && vis[i+1][j]== 0){
                    vis[i+1][j] = 1;
                    i++;
                }else if(i!=0 && mat[i-1][j]=='H' && vis[i-1][j]== 0){
                    vis[i-1][j] = 1;
                    i--;
                }else if(j!= m-1 && mat[i][j+1] == 'H' && vis[i][j+1] == 0){
                    vis[i][j+1] = 1;
                    j++;
                }else if(j!=0 && mat[i][j-1] == 'H' && vis[i][j-1] == 0){
                    vis[i][j-1] = 1;
                    j--;
                }else{
                    cout << i+1 << " " << j+1 << el;
                    her = 0;
                    
                }
                //cout << "[i]" << i << "[j]" << j << " = " << mat[i][j] << el;        
    }
    
    return 0;

}



