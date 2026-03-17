#include  <bits/stdc++.h>
using namespace std;

int main(){

    long long cont = 0, dif = 0, n;

    cin >> n;

    vector<long long> vet(n);
    

    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }
    
    
    
        for(int i = 1; i < n; i++){
            if(vet[i-1] > vet[i]){
               dif = vet[i-1] - vet[i];
                vet[i] += dif;
                cont += dif;
        
            }

    }
   cout << cont;

    return 0;
}