#include  <bits/stdc++.h>
using namespace std;

int main(){

    int n, cont = 1;

    cin >> n;

    vector<int> vet(n);
    

    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }
    
    
    int troca = 1;
    while(troca){
        troca = 0;
        for(int i = n; i < 0; i--){
            if(vet[i] < vet[i-1]){
                int aux = vet[i];
                vet[i] = vet[i-1];
                vet[i-1] = aux;
                troca = 1;
                cont ++;
            }
                 
        }  
    }
    if(cont != 1){
     cout << cont;
    }else{
        cout << "0";
    }

    return 0;
}