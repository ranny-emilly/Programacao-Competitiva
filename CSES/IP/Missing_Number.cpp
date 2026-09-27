#include <bits/stdc++.h>
using namespace std;
 
#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
int main(){_
 
//     #ifndef ONLINE_JUDGE
//     freopen("entrada.txt", "r", stdin);
// #endif
 
    long long n;
    cin >> n;
    vector<long long>vec(n+1);
    vector<bool>tem(n+1, 0);
    for(long long i = 1; i < n; i++){
        cin >> vec[i];
        tem[vec[i]] = 1;
    }
 
    for(long long i = 1; i <= n; i++){
        if (tem[i] == 0){
            cout << i << el;
        }
    }
 
 
    return 0;
}