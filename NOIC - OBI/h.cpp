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
            if(mat[i][j] == 'o'){
                linhaini = i;
                colini = j;
            }
        }
    }

    for(int i = linhaini; i < n; i++){
        for(int j = colini; j < m; j++){

            vis[i][j] = 1;

            if(i == 0){
                if(j != 0 && mat[i][j-1] == 'H' ){
                    j-=1;
                }else{
                    if(j!= m-1)
                    j+=1;
                }
            }else{
                if(j != 0 && mat[i][j-1] == 'H'){
                    j-=1;
                }else if(j!= m-1 && mat[i][j+1] == 'H'){
                    j+=1;
                }else if(i != n-1 && mat[i+1][j] == 'H'){
                    i+=1;
                }else{
                    i-=1;
                }
            }


         cout << i+1 << " " << j+1 << el;
        }
        cout << el;
    }
    return 0;

}



