#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        int t = 0;
        cin >> t;

        map<int, int>m;
        int num;

        for(int j = 0; j < t; j++){
            cin >> num;
            
            m[num]++;

        }
        bool ordena = true;
        for (auto const& [num, qtd] : m){
            if(qtd > 1){
            ordena = false;
            cout << "No" << endl;
            break;
        }else{
           ordena = true;
        }
        
}           if (ordena) {
    cout << "Yes" << endl;
        }      
    }

    return 0;
}
