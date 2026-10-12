#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){_
    
    int n;
    cin >> n;

    while(n--){
        string s;
        cin >> s;

        int inter = 0;
        bool zu = 0;

        for(int i = 0; i < s.size()-1; i++){
            if(s[i] != s[i+1]){
                inter++;
            }
            if(s[i] == '0' && s[i+1] =='1'){
                zu = 1;
            }
        }

        cout << inter + 1 - zu << el;
    }

    return 0;
}