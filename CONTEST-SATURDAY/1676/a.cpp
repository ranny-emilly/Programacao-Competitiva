#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define el "\n";

typedef long long ll;

bool solve(string s){
    bool result = 0;
    if(s[0]+s[1]+s[2]== s[3]+s[4]+s[5]){
        result = 1;
    }else{
        result = 0;
    }

    return result;
}

int main(){_

    int n;
    cin >> n;

    while(n--){
        string s;
        cin >> s;
        
        if(solve(s)){cout << "YES" << el;
        }
        else cout << "NO" << el;
    }

    return 0;
}
