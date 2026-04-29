#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){
    _;
    int n, q;
    vector <int> vec;
    int a = n;

    cin >> n >> q;

    while(n--){
        int y;
        cin >> y;
        vec.push_back(y);
    }
    vector <int> pre;

    pre.push_back(0);

    for (int i = 1; i <= a; i++) {;
        //faz um push ai mona e arruma a formula do vec anterior 
        pre[i] = pre[i - 1] + x;
    }

    while(q--){
        int a, b;
        cin >> a >> b;
        cout << pre[a] - pre[b-1] << el;

    }



    return 0;
}
