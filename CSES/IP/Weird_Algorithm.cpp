#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){_

    


    long long n;
    cin >> n;
    cout << n << " ";
    while(n > 1){
        if(n%2==0){
            n/=2;
            cout << n << " ";
        }else{
            n*=3;
            n++;
            cout << n << " ";
        }
    }

    cout << el;

return 0;

}