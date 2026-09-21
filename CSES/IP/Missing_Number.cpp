#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){_

    #ifndef ONLINE_JUDGE
    freopen("entrada.txt", "r", stdin);
#endif

    long long n;
    cin >> n;
    vector<long long>vec(n);
    vector<bool>tem(n);
    for(long long i = 1; i <= n; i++){
        int a;
        cin >> a;
        tem[a] = 1;
    }

    for(long long i = 1; i <= tem.size(); i++){
        if (tem[i] == 0){
            cout << i << el;
        }
    }


    return 0;
}