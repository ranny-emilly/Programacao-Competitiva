#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){_

    int n;
    cin >> n;

    while(n--){
        int a, b;
        cin >> a >> b;

        auto minimu = min(a, b);
        auto maximu = max(a, b);

        cout << minimu << " " << maximu << el;
    }

    return 0;
}