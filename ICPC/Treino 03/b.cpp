#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define el "\n";

int main(){
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> jogadores(m + 1); 
    for(int i = 0; i < m + 1; i++){
        int x;
        cin >> x;
        jogadores.push_back(x);
    }

    int fedor = jogadores[m]; 
    //cout << fedor;
    

    int amigos = 0;


    for(int i = 0; i < m; i++){
        
        int dif = jogadores[i] ^ fedor;

        int bitsbits = __builtin_popcount(dif);
            if(bitsbits <= k){
            amigos++;
        }
    }

    cout << amigos << el;

    return 0;
}

/* 
F (string alternada) OK
D (sudoku) - 
B (fedor)
A (bits ímpar/par)
E (xor fibonacci) */