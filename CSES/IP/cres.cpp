#include <bits/stdc++.h>
using namespace std;
 
#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
int main(){_

    long long n, movim = 0;
    cin >> n;
    vector<int>vec(n);
    
    while(n--){
       int a; 
       cin >> a; 
       vec.push_back(a);
    }

    for(int i = 0; i < vec.size()-1; i++){
        if(i == vec.size()-1){
            if(vec[i] < vec[i-1]){
                movim+=vec[i-1]-vec[i];
                cout << movim << el;
                return 0;
            }
        }
        if(vec[i] > vec[i+1]){
            int dife = vec[i] - vec[i+1];
            //cout << dife << el;
            movim+= dife;
            vec[i+1]+= dife;
            //cout << movim << el;
        }
    }

    cout << movim << el;


    return 0;
}