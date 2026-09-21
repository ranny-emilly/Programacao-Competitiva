#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){_
    
    //DEBUGAR
    
    int n;
    cin >> n;
    int c = 0;
    
    while(n--){
        bool square = 1;
        cin >> c;
        vector<string>vec(c);
        for(int i = 0; i < c; i++){
                cin >> vec[i];
        }

        vector<int>cont;

        for(int i = 0; i < c; i++){
            int contl = 0;

            for(int j = 0; j < c; j++){
                // cout << vec[i][j] << el;
                if(vec[i][j] == '1'){
                    contl++;
                    // if(vec[i][j] == 1 && vec[i+1][j+1] == 1){
                    //  l1+=1;
                    //  l2+=1;
                    // }
                 }
            }
            if(contl > 0){
                cont.push_back(contl);
            }
            
        }

            for(int i = 1; i < cont.size(); i++){
                if(cont[i] != cont[0]){
                    square = 0;
                    break;
                }
            }

            if(square){
                cout << "SQUARE" << el;
            }else{
                cout << "TRIANGLE" << el;
            }
            
        }



    return 0;
}