#include <bits/stdc++.h>
using namespace std;
 
#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
int main(){
 
    int n;
    cin >> n;
    while(n--){
        int a; 
        cin >> a;
        
        for(int i = 1; i <= a; i++){
            cout << i << " " << a+2*i-1 << " " << a+2*i << " ";
 
        }
 
        cout << el;
    }
 
 
    return 0;
}
