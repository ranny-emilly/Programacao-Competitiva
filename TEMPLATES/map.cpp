#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<int, int> m;

    int n;
    cin >> n;

  
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        m[x]++; // conta frequência
    }

    // acessar quantos "5" existem
    cout << m[5] << endl; 


    // verificar se existe
    if(m.count(5)){
        cout << "5 existe\n";
    }

    // percorrer tudo
    for(auto &it : m){
        cout << "numero: " << it.first 
             << " aparece: " << it.second << " vezes\n";
    }

    // encontrar números que aparecem 2 vezes
    for(auto &it : m){
        if(it.second == 2){
            cout << "numero com freq 2: " << it.first << endl;
        }
    }

    // remover um número
    m.erase(5);

    return 0;
}