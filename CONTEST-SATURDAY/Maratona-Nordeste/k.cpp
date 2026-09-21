#include<bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){
    _;
    int a, x, y = 0;

    cin >> a >> x;

    if(x == 1){
        cout << a+1 << endl;
        return 0;
    }

    for(int i = 0; i < 10000; i++){
        if((i*x)%a == 1){
            cout << i << endl;
            return 0;
        }
    }

    cout << "-1" << endl;
    

    return 0;
}