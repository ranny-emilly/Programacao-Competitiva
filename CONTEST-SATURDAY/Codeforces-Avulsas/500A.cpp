#include <bits/stdc++.h>
using namespace std;
 
#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;
 
int main(){_
    int n;
    cin >> n;

    while(n--){
        ll a, b, count = 0;
        cin >> a >> b;
        
         cout << b+(b-1)/(a-1) << el;
    }
    

return 0;
}
