#include <bits/stdc++.h>
using namespace std;
#define el "\n";


//EM DESENVOLVIMENTO 

int main(){
    int nbolas, qconsultas;
    long long k = 0;
    vector <int> a;
    vector <int> b;

    cin >> nbolas >> qconsultas;
    for(int i = 0; i <nbolas; i++){
    for(int i = 0; i < qconsultas; i++){
       cin >> a[i];
       cin >> k;
       while(k--){
        cin >> b[k];
        if(b[k] == a[i]){
            a[i] = -1;
        }
        k = 0;
       }
        for(int i = 1; i <= qconsultas; i++){
       if(a[i] <= 0){
        cout << a[i];
       }
       }
    }
}



    return 0;
}