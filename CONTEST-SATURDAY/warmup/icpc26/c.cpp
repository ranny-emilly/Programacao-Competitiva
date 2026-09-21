#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){

    _;
    int n, p, total = 0;

    cin >> n;
    vector<int>vec(n);

    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    cin >> p;

    for(int i = 0; i < p; i++){
        int a;
        cin >> a;
            if(vec[a-1] > 0){
                vec[a-1]--;
                total++;
            }
    }

    cout << total << el;

    return 0;
}