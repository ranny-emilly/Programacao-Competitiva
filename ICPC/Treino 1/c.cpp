<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, controle=0;

    cin >> n;

    vector <long long> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int troca = 1;

    while(troca){
        troca = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > arr[i + 1]){
                controle = controle + (arr[i+1] - arr[i]);
                troca = 1;
            }
        }

    }
    
    cout << controle;

    return 0;
}
=======
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
>>>>>>> 9b979944461a985443892ca7992c3c2c1e0f46b3
