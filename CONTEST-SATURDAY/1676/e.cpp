#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define el "\n";

typedef long long ll;
//bb em vector de prefix

int main(){_
    int n;
    cin >> n;

    while(n--){
        int a, b;
        cin >> a >> b;

        vector<int>orig(a);

        int x = a+1;

        for(int i = 0; i < a; i++){
            cin >> orig[i];
        }

        sort(orig.rbegin(), orig.rend());
        vector<ll>pref(x);
        pref[0] = 0;
        for(int i = 1; i < x; i++){
            pref[i] = pref[i-1]+orig[i-1];
        }

        while(b--){
            ll y;
            cin >> y;

            if(pref[x-1] < y){
                cout << -1 << el;
                continue;
            }

            auto it1 = lower_bound(pref.begin(), pref.end(), y);
            int ans = (it1 - pref.begin());
            cout << ans << el
        }


    }


    return 0;
}
