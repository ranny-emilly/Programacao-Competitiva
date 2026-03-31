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
            m[num]= m[num]-(1*sub);
            if(m[num] <= 0){
                m.erase(num);
            }
        }else{
            if (!m.empty()) {
            int menor = m.begin()->first;  
            int maior = m.rbegin()->first; 
            int result = maior - menor;
            cout << result << endl;
            }
    }
}


    return 0;
}
