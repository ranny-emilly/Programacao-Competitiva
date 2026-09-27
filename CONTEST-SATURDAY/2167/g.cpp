#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){_

    int n;
    cin >> n;

    while(n--){
        int a;
        cin >> a;
        vector<pair<int, int>>pa(a);
        for(int i = 0; i < a; i++){
            int z;
            cin >> z;
            pa[i].first = z;
        }

        for(int i = 0; i < a; i++){
            int y;
            cin >> y;
            pa[i].second = y;
        }

    }


    return 0;
}