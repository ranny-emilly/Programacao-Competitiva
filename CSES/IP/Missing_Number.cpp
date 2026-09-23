#include <bits/stdc++.h>
using namespace std;
 
#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
int MAX = 2*10e5+1;
vector<int>tem(MAX, 0);

 
int main(){_
 
//     #ifndef ONLINE_JUDGE
//     freopen("entrada.txt", "r", stdin);
// #endif

    long long n;
    cin >> n;
    for(long long i = 0; i < n-1; i++){
    cin >> tem[i];
    }

    sort(tem.begin(), tem.end());
 
 
for(long long i = 0; i < tem.size()-1; i++){
        if (tem[i] != i+1){
            cout << i+1 << el;
            return 0;
        }
    }
 
 
    return 0;
}
