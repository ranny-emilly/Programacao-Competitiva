#include <bits/stdc++.h>
using namespace std;
 
#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
int main(){_
    
    string s;
    cin >> s;

    int max = 1;
    int rep = 1;
    for(int i = 0; i < s.size()-2; i++){
        if(s[i]==s[i+1]){
            rep++;
        }else{
            rep = 0;
        }
        if(i == s.size()-2 && s[i] == s[i+1]){
            rep++;
        }
        if(rep > max){
            max = rep;
        }

    }

    cout << max << el;

    return 0;
}