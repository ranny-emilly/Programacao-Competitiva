#include <bits/stdc++.h>
using namespace std;

//EM DESENVOLVIMENTO

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;


void solve(int a){_
    
    string s;
    cin >> s;

    vector<ll>sum(a);
    ll total = 0;
    vector<ll>ganhos(a);
    
    for(int i = 0; i < a; i++){
     if(s[i] == 'L'){
        sum[i] = i;
     }else{
        sum[i] = a - i - 1;
     }
     total+=sum[i];
    }


    for(int i = 0; i < a; i++){
        if(s[i] == 'L' && (a-i-1) > sum[i]){
            ganhos[i] = (a - i - 1) - i;
        }if(s[i] == 'R' && i > sum[i]){
            ganhos[i] = i - (a - i - 1);   
        }
    }

    sort(ganhos.rbegin(), ganhos.rend());
    for(int i = 0; i < a; i++){

        //cout << ganhos[i]+sum[i] << " "; 
        total += ganhos[i];
        cout << total << " ";
    }


    cout << el;

   
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
