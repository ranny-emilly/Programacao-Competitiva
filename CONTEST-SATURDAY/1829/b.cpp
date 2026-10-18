#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

int main(){_
    int n;
    cin >> n;

    while(n--){
        int a;
        cin >> a;

        vector<int>s;
        while(a--){
            int b;
            cin >> b;
            s.push_back(b);
        }

        int inter = 0, glob = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 0){
                inter++;
              if(inter > glob){
                    glob = inter;
                //cout << glob << el
                }   //cout << inter << el
            }else{
                 if(inter > glob){
                    glob = inter;
                //cout << glob << el
                }
                inter = 0;
            }
               
        }
        cout << glob << el
    }




    return 0;
}