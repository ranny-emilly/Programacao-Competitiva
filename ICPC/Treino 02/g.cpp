#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;

    cin >> q;

    map<int, int>m;
    int num;

   for(int i = 0; i < q; i++){
        int tipo;
        cin >> tipo;
        if(tipo != 3){
            cin >> num;
        }
        
        if(tipo == 1 ){
            m[num]++;
            
        }else if(tipo == 2){
              m[num]--;
              if(m[num] == 0){
                 m.erase(num);
        }
        }
        else{
    
        cout << m.size() << endl;

        }
        
    }

    return 0;
}