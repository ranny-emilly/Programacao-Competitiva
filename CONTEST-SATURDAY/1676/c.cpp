#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define el "\n";

typedef long long ll;

int solve(vector<vector<int>>&s, int a, int b){
    int menor = 10e9;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){

            if(i == j)continue;
            
            int dif = 0;
            int atual = 0, prox = 0;
            for(int k = 0; k < b; k++){
                atual = s[i][k];
                prox = s[j][k];
                if(atual!=prox){
                    dif += abs(atual-prox);
                }
            }
            if(dif < menor){
                menor = dif;
            }
        }


    }   

    return menor;
}

int main(){_
//     char a = 'o';
//     cout << int(a);
// cout << el
//      char z = 'e';
//     cout << int(z);

    int n;
    cin >> n;

    while(n--){
        int a, b;
        cin >> a >> b;
        vector<vector<int>>s(a, vector<int>(b));

            for(int i = 0; i < a; i++){
                for(int j = 0; j < b; j++){
                    char f;
                    cin >> f;
                    int h = int(f);
                    s[i][j] = h;                    
                }  

            }
            cout << solve(s, a, b) << el;
    }


    return 0;
}
