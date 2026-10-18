#include <bits/stdc++.h>
using namespace std;
 
#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
int main(){_
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    string s2;

    for(int i = 0; i < s.size()-1; i++){
        if(i%2!=0){
            s2.insert(s2.begin(), 1, s[i]); 
        }else{
            s2.push_back(s[i]);
        }
    }

    cout << s2 << el;


    return 0;
}