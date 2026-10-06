//Em desenvolvimento no pensamento. Nem compensa analisar : )

#include <bits/stdc++.h>
using namespace std;

#define el "\n"

int resposta(int res){
int res = 0;
int mt = a/2;
if(a%2==0){
    if(s[mxs] == 0){
        cout << mt << el;
    }else{
        cout << mt-mxs << el;
    }
}else{
    if(s[mxs] == 0){
        cout << mt-1 << el;
    }else{
        cout << mt-mxs-1 << el;
    }
}
return res;
}
int main(){
    int n;
    cin >> n;

    while(n--){
        int a;
        char x;
        cin >> a >> x;
        map<char, int>s;
        int mx = 0, mxs = 0;
        char c;
        for(int i = 0; i < a; i++){
            char l;
            cin >> l;
            s[l]++;
            if(s[l] > mx && l!= x){
                mx = s[l];
                c = l;
            }
            if(l == x){
                mxs++;
            }

            
            for(auto &par : s){
                if(par == mx){

                }
            }
        }
    }
    return 0;
}
