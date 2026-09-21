#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
int main(){
    _
 
    int n;
    cin >> n;
 
    long long par = 1;
    long long impar = 0;
 
    int atual = 0;
 
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
 
        if(x == 1)
            atual ^= 1;
 
        if(atual == 0)
            par++;
        else
            impar++;
    }
 
    cout << par * impar << '\n';
 
    return 0;
}