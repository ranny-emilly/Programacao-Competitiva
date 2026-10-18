#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){
    int n;
    cin >> n;

    set<int>se;

    while(n--){
        int a;
        cin >> a;
        se.insert(a);
    }

    cout << se.size() << el;

    return 0;
}