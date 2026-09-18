#include <bits/stdc++.h>
using namespace std;
 
#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
int main(){
_
 
    int n;
 
    cin >> n;
 
    while(n--){
        int x;
        cin >> x;
        if(x!= 67 && x!= -67){
            cout << x+1 << el;
        }else{
            if( x== 67){
                cout << 67 << el;
            }else{
                cout << -67 << el;
            }
        }
    }
 
 
    return 0;
}
