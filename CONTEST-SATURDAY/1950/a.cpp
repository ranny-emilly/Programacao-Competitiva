#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){_

    int n;
    cin >> n;

    while(n--){
        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c;
        //cout << a << b << c;

        if(a < b && b < c){
            cout << "STAIR";
        }else if(a < b && b > c){
            cout << "PEAK";
        }
        else {
            cout << "NONE";
        }

        cout << el;
    }


    return 0;
}
