#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){_

    int n;
    cin >> n;

    while(n--){
        int a, b;
        char e;
    
        cin >> a >> e >> b;
        //cout << a << e << b;
         //tratamento se for menor que 10 pra 0 na frente 
        if(a > 11){
            if(a != 12){
                a = a%12;
            }
            if(a < 10){
                cout << 0;
            }
            cout << a << e;
            if(b < 10){
                cout << 0;
            }
            cout << b << " PM";
        }else{
            if(a == 0){
                a = 12;
            }
           if(a < 10){
                cout << 0;
            }
            cout << a << e;
            if(b < 10){
                cout << 0;
            }
            cout << b << " AM";
        }

        cout << el;
    }

    return 0;
}