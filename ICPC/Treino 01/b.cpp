#include <bits/stdc++.h>
using namespace std;

#define el "\n";

int main(){

    int q, x = 0, op = 0;
    vector <int> a;

    cin >> q;

    for(int i = 0; i < q; i++){
        cin >> op;
        
        if (op != 2) {
        cin >> x;
        }
        if (op == 0){
            a.push_back(x);
        }else if(op == 1){
            cout << a[x] << endl;
        }else{
            a.pop_back();
        }
        op = 0;
        x = 0;
    }


    return 0;
}