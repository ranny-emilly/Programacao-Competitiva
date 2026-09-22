#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);


int main(){_

    int n;
    cin >> n;

        while (n--) {
        
        int a;
        cin >> a; 

        map<int, int> mp;

        int gp = 0; 

        for (int i = 0; i < a; i++) {
            int at;
            cin >> at;
            
            //cout << "mp[at] = " << mp[at] << el;                              
            if (mp[at] == 0) {
                gp++;
                
                int inv = INT_MAX ^ at;
                
                mp[inv]++;
                //cout << "mp[inv] " << mp[inv] << el;
                
            } else {

                mp[at]--;
            }
        }

                cout << gp << "\n";


    }

    return 0; 
}
