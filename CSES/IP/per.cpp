//EM DEV

#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){_

    int n;
    cin >> n;
    int a = 0;

    vector<int>imp(n, 0);
    for(int i = n; i > 0; i--){
        if(i%2==0){
            imp[a] = i;
            a++;
        }
    }
    for(int i = n; i > 0; i--){
        if(i%2 != 0){
            imp[a] = i;
            a++;
        }
    }

    for(int i = 0; i < n; i++){
        cout << imp[i] << " ";
    }

    cout << el;

    return 0;
}    int a = 0;
