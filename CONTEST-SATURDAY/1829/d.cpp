#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;


bool solve(int n, int m){
    if(n == m)return 1;
    if(n < m || n%3 !=0)return 0;
    if(solve(n/3, m) == 1)return 1;
    else if(solve(2*n/3, m) == 1)return 1;
    else return 0;
    
}
//n == m sim; partes de 1
//n < m ou n%3!=0 -> no
// 
int main(){_
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        if (solve(n, m) == 1)cout << "YES";
        else cout << "NO";
         
        cout << el;
    }



    return 0;
}