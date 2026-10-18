#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

int main(){

    ll n, m;

    cin >> n >> m;

    vector<ll>ori(n);
    ori[0] = 0;

    vector<ll>pref(n);
    for(ll i = 1; i <= n; i++){
       cin >> ori[i];
    }

    pref[0] = 0;


    for(ll i = 1; i <= n; i++){
        pref[i] = ori[i]+pref[i-1];
    }

    //cout << "VELOR DE N:" << n << el;
    
    // for(int i = 1; i <= n; i++){
    //     cout << pref[i] << " ";
    // }

    // cout << el;

    while(m--){
        ll l, r;
        cin >> l >> r;
        //cout << pref[r] << " " << pref[l-1] << el


        cout << pref[r]-pref[l-1] << el
    }


    return 0;
}