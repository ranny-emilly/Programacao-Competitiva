#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){

    _;

    int n;

    cin >> n;

    vector<int>vec(n);
    vector<int>pre(n);
    pre[0] = 0;
    vec[0] = 0;

    for(int i = 1; i <= n; i++){
        cin >> vec[i];
        pre[i] = pre[i-1]+vec[i];
    }

    

    return 0;
}