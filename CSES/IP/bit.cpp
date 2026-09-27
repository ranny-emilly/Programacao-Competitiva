#include <bits/stdc++.h>
using namespace std;
 
#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

long long MAX = 1000000007;
int main(){_
 
    long long n;
    cin >> n;

    long long comb = 1;
    
 for(int i = 1; i <= n; i++){
        comb*=2;
        comb %=MAX;
    }


    cout << comb << el;

    return 0;
}