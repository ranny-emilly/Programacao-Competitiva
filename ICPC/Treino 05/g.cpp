#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;

    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    int ans = 0, atual = 0;

    for(int j = 0; j < d; j++){
        bool ok = true;

        
        for(int i = 0; i < n; i++){
            if(s[i][j] == 'x'){
                ok = false;
                break;
            }
        }

        if(ok){
            atual++;
            ans = max(ans, atual);
        }else{
            atual = 0;
        }
    }

    cout << ans << "\n";
}