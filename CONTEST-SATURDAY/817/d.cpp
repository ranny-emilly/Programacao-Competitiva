#include <bits/stdc++.h>
using namespace std;

//EM DESENVOLVIMENTO

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

void solve(int a){_
    
    string s;
    cin >> s;

    int mod = 0;

    for(int i = 1; i <= a; i++){
        mod+=i;
    }

    for(int i = 0; i < a; i++){
        if(i < s.size()/2){
            if(s[i] == 'L'){
                s[i] = 'R';
            }
        }else{
            if(s[i]=='R'){
                s[i] = 'L';
            }
        }

        cout << s;
        ll sum = 0;
          for(int j = 0; j < a; j++){
            if(s[j] == 'R'){
                sum+=s.size()-(i+1);
            }else{
                sum+= s.size()-i;
            }
          }
          cout << sum << " ";

    }  

    cout << el

   
}

int main(){_
    int n;
    cin >> n;

    while(n--){
        int a;
        cin >> a;
        solve(a);
    }

    return 0;
}
