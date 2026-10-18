#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

int main(){
    int n;
    cin >> n;

    string s1 = "codeforces";
    while(n--){
        string s;
        cin >> s;

        int count = 0;
        for(int i = 0; i < 10; i++){
            if(s[i]!=s1[i]){
                count++;
            }
        }

        cout << count << el

    }


    return 0;
}