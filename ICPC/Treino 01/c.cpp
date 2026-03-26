#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m, x = 0, indice = 0;

    cin >> n >> m;
    vector<int>fila(n);

    for(int i = 0; i < n; i++){
        cin >> fila[i];

        if(fila[i] >= x){
            x = fila[i];
            indice = i;
        }
             
    }
     cout << indice+1 << endl;  
    
    return 0;
}