#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define el "\n";

int main(){

    string s;
    int cont = 0, cont2 = 0;

    cin >> s;

    if(s.size()==1){
        cout << "0" << el;
        return 0;
    }
    /* if(s.size() == 2){
        if(s[0] == s[1]){
            cout << "1" << el;
        }else{
            cout << "0" << el;
        }
        return 0;
    }
    else if(s.size() == 3){
        if(s[0] != s[1] && s[1] != s[2]){
            cout << "0" << el;
        }else{
            cout << "1" << el;
        }
        return 0;
    }
 */
int n = s.size();

   

    for(int i = 0; i < n; i++){
        
        if(i % 2 == 0){
            if(s[i] == '0'){
                cont++;
                //cout << s[i] << " << si\t" << cont << "\ti >>" << i << el;
            }
        }else{
            if(s[i] == '1'){
                cont++;
            }
        }
    }
    
  for(int i = 0; i < n; i++){
   
        if(i % 2 == 0){
            if(s[i] == '1'){
                cont2++;
            }
        }else{
            if(s[i] == '0'){
                cont2++;
            }
        }
    }

    //cout << cont << cont2;

    if(cont > cont2){
        cout << cont2 << el;
    }else{
        cout << cont << el;
    }




    //while(getline(cin, s)){
     /*    for(int i = s.size()-1; i >= 0; i--){
            if(i == 1){
                cout << cont << el;
                return 0;
            }
            if(i == s.size()-1){
                
            }else if(s[i] != s[i-1] && s[i] != s[i+1]){
                //cout << s[i] << s[i-1] << s[i-2];
            }else{
                cont++;
                cout << "cont e igual a:" << cont << "em i valendo" << i << "because s[i] e" << s[i] << "e s[i-1]" << s[i-1] << el;
            }
        }
   // } */
    


    return 0;
}