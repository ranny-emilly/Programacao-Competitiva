#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, x, a=0;

    cin >> n >> x;

    for(int i = 0; i < n; i++){
        cin >> a;
        if(a < x){
            cout << "1" << endl;
            x = a;
        }else{
            cout << "0" << endl;
        }
    }


    return 0;
}