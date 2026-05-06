#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> price(n);
    for(int i = 0; i < n; i++){
        cin >> price[i];
    }

    
    sort(price.begin(), price.end());

    int q;
    cin >> q;

    while(q--){
        int m;
        cin >> m;

        
        int ans = upper_bound(price.begin(), price.end(), m) - price.begin();

        cout << ans << "\n";
    }
}