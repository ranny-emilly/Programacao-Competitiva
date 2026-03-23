#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m, x;

    cin >> n >> m;
    vector<int>fila(n);

    for(int i = 0; i < n; i++){
        cin >> fila[i];
        if(fila[i] <= m){
            fila.pop_back();
        }
       
            if(fila[i] > m){
            fila[i] -= m;
            fila.push_back(fila[i]);
            fila.erase(fila.begin());
        }
        
    }
        while(n--){
            cout <<fila[n];
        }
    
    return 0;
}