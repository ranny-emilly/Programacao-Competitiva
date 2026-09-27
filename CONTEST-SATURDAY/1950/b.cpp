#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){_

    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        int t = 2*a;
        for(int i = 0; i < t; i++){
            for(int j = 0; j < t; j++){
                if((i/2 + j/2)% 2 == 0){
                    cout << '#';
                }else{
                    cout << '.';
                }
            }
            cout << el;
        }
    }


    return 0;
}