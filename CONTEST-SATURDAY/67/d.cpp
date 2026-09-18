#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define el "\n";
 
int main(){_
 
    int n;
    cin >> n;
 
    while(n--){
        int a;
        cin >> a;
 
        int num = 1;
        for(int i = 1; i <= a; i++){
 
            cout << (num*(num+2)) << " ";
            num+=2;
        }
        cout << el;
    }
 
    return 0;
}
