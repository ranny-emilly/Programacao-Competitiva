#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){
    _;

    int sum = 0, tirada = 0;
    vector <int> vetinho;
    string n;
    
        cin >> n;
       
        for(int i = 0; i < n.size(); i++){
            vetinho.push_back(n[i] - '0');
        }
        for(int i = 0; i < vetinho.size(); i++){
            sum+=vetinho[i];
        }

        if(sum %3 == 0){
            cout << "0" << el;
            return 0; 
        }
        /* if(sum < 3){
                cout << "-1" << el;
                return 0;
            } */

        int resto = sum%3;
        int cont1 = 0;
        int cont2 = 0;

        for(int i = 0; i < vetinho.size(); i++){
           if(vetinho[i] %3 == 1)cont1++;
           if(vetinho[i] %3 == 2)cont2++;
        }

        if(resto == 1){
            if(cont1 >= 1 && vetinho.size() > 1){
                cout << 1 << el;
            }else if(cont2 >= 2 && vetinho.size() > 2){
                cout << 2 << el;
            }else{
                cout << -1 << el;
            }
        }else{
            if(cont2 >= 1 && vetinho.size() > 1){
                cout << 1 << el;
            }else if(cont1 >= 2 && vetinho.size() > 2){
                cout << 2 << el;
            }else{
                cout << -1 << el;
            }
        }

    return 0;

    }