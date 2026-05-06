#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long m;
    cin >> n >> m;

    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    
    sort(a.begin(), a.end());

    int l = 0, ans = 0;

    for(int r = 0; r < n; r++){


        while(a[r] - a[l] >= m){
            l++;
        }

        
        ans = max(ans, r - l + 1);
    }

    cout << ans << "\n";
}