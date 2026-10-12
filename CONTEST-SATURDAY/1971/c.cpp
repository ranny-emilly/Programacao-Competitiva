#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){_
    
    int n;

    cin >> n;
    while(n--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        bool inimenor = 0, jafoi = 0;
        if(a > b){
             if(c > b && c < a)inimenor=1;
            if(d > b && d < a)jafoi=1;
            if(inimenor != jafoi){
               cout << "YES" << el;
        }else{
            cout << "NO" << el;
        }


        }else{
            if(c > a && c < b)inimenor=1;
            if(d > a && d < b)jafoi=1;
            if(inimenor != jafoi){
               cout << "YES" << el;
        }else{
            cout << "NO" << el;
        }

        }

    }

    return 0;
}