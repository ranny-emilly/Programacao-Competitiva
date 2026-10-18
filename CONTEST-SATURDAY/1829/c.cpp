#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

int main(){
    int n;
    cin >> n;

    while(n--){
        int a;
        cin >> a;

        vector<pair<int, string>>jogo;
       for(int i = 0; i < a; i++){
        int g;
        string s;
        cin >> g >> s;
        
        jogo.push_back({g, s});

       }
       sort(jogo.begin(), jogo.end());

       int pont = 0, pu = -1;
       bool priz = 0, secz = 0, uu = 0;

       for(int i = 0; i < a; i++){
        if(jogo[i].second == "11" && uu == 0){
        pu = jogo[i].first;
            uu = 1;

        }else if(jogo[i].second == "01" && priz == false){
            pont += jogo[i].first;
            priz = true;
            
        }else if(jogo[i].second == "10" && secz == 0){
            pont += jogo[i].first;
            secz = true;
        }

       }

       if(uu == 1 && (priz == 0||secz==0||pu < pont)){
        cout << pu << el
       }else{
           if(priz&&secz){
           cout << pont << el
               
           }else{
               cout << -1 << el
           }
       }
    }


    return 0;
}