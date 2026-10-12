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

        if(s.size()==1){
            cout << "NO" << el;
        }

        string conf = s, rev = s;

        sort(conf.begin(), conf.end());
        if(conf[0] == conf[conf.size()-1] && s.size()!=1){
            cout << "NO" << el;
        }

        if(conf != s){
            cout << "YES" << el;
            cout << conf << el;
        }else{
            reverse(rev.begin(), rev.end());
            if(rev != s){
                cout << "YES" << el;
                cout << rev << el;
            }
        }

    }


    return 0;
}