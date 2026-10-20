#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

//DEU TLE : )

typedef long long ll;

int main(){_

    
    int n;
    cin >> n;
    
    while(n--){
        int a, b;
        cin >> a >> b;
        vector<vector<int>>mat(a, vector<int>(b));

        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                cin >> mat[i][j];
            }
        }

        int gl = 0, maior = 0;

        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                if(mat[i][j]==0)continue;

                vector<vector<bool>>vis(a, vector<bool>(b, 0));
                vis[i][j] = 1;
                bool andou = true;
                gl = 0;

                while(andou){
                    andou = 0;
                    for(int o = 0; o < a; o++){
                        for(int w = 0; w < b; w++){
                            if(vis[o][w] != 1||mat[o][w]==0)continue;
                            gl+=mat[o][w];
                            mat[o][w] = 0;

                            int dio[] = {-1, 1, 0, 0};
                            int dw[] = {0, 0, -1, 1};


                            for(int k = 0; k < 4; k++){
                                int ni = o+dio[k];
                                int nj = w + dw[k];
                                
                                if(ni >= 0 && ni < a && nj >= 0 && nj < b && mat[ni][nj] > 0 && vis[ni][nj]!=1){
                                    vis[ni][nj] = 1;
                                    andou = 1;
                            }
                            // if(mat[i+1][j]!=0){
                            //         max+=mat[i][j];
                            //         i = i+1;
                            //     }else if(mat[i][j+1]!=0){
                            //         max+=mat[i][j];
                            //         j = j+1;
                            //     }
            

                        }
                    }
                    }
                }
                maior=(max(maior, gl));
            }
        }
        cout << maior << el;
    }



    return 0;
}