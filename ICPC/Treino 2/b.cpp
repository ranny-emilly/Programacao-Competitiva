#include <bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
#define el "\n";

int main(){

    int q;

    cin >> q;

    vector<int>p;

    while(q--){
        cin >> int x;
        p.push_back(x);
    }

=======

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


>>>>>>> 73616f8b149bc05e7fe05244a6c9947a7662f79d
    return 0;
}