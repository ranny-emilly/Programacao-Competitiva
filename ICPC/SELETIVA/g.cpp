#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define el "\n";

int main(){
    _ 

    int n, k, q;
    if (!(cin >> n >> k >> q)) return 0;

    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    vector<int> P(k);
    for(int i = 0; i < k; i++){
        cin >> P[i];
        P[i]--; 
    }

    vector<vector<int>> min_calc(k);

    for(int i = 0; i < k; i++){
        int start_pos = P[i];
        int menor_atual = A[start_pos];

        for(int j = start_pos; j < n; j++){
            menor_atual = min(menor_atual, A[j]);
            min_calc[i].push_back(menor_atual);
        }
    }

    while(q--){
        int X, T;
        cin >> X >> T;
        
        X--; 
        
        cout << min_calc[X][T-1] << el;
    }

    return 0;
}