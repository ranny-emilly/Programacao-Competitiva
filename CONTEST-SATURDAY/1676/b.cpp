#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define el "\n";

typedef long long ll;


int solve(vector<int>a, int b){
    auto eat = 0;

    sort(a.begin(), a.end());
    for(int i = 1; i < b; i++){
        eat+=abs(a[0]-a[i]);
    }

    return eat;
}

int main(){_
    int n;
    cin >> n;

    while(n--){
        int b;
        cin >> b;

        vector<int>a(b);

        for(int i = 0; i < b; i++){
            cin >> a[i];
        }
        cout << solve(a, b) << el;
    }


    return 0;
}
