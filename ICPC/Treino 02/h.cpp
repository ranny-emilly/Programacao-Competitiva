//CODIGO EM DESENVOLVIMENTO
#include <bits/stdc++.h>
using namespace std;

int main(){
    int testes, op, sub, maior;
    
    cin >> testes;
    map<int, int>m;
    int num;

    while(testes--){
        cin >> op;

        if(op == 1){
            cin >> num;
            m[num]++;
        }else if(op == 2){
            cin >> num >> sub;
            m[num]= m[num]-sub;
        }else{
            if (!m.empty()) {
            int menor = m.begin()->first;  // Primeira chave (menor)
            int maior = m.rbegin()->first; // Última chave (maior)
            int result = maior - menor;
            cout << result << endl;
            }
    }
}


    return 0;
}
